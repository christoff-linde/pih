"""Client router module for all client API routes."""

from fastapi import APIRouter


router = APIRouter(prefix="/api/client/v1", tags=["client"])
