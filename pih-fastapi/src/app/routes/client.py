"""Client router module for all client API routes."""

from fastapi import APIRouter
from datetime import datetime

from app.utils import dump_to_file

router = APIRouter(prefix="/api/client/v1", tags=["client"])


@router.post("/update-sensor")
def update_sensor(sensor_id: str, temperature: float, humidity: float):
    now = datetime.now().timestamp()
    data_obj = {
        "timestamp": now,
        "sensor_id": sensor_id,
        "data": {"temperature": temperature, "humidity": humidity},
    }

    target_file_name = f"data/update-sensor-{sensor_id}-{now}.json"
    dump_to_file(data_obj, target_file_name)

    return data_obj
