# Personal Information Hub (PIH)

A collection of all code & related resources for the PIH system (in development).

## Components & Systems

### V2

_A complete rework of the whole system architecture, including but not limited to adding RabbitMQ, Iceberg, and other data visualisation/processing frameworks and tools._

| Project                                                           | Description                                                                    | Status         |
| ----------------------------------------------------------------- | ------------------------------------------------------------------------------ | -------------- |
| [pih-esp](https://github.com/christoff-linde/pih-esp)             | The firmware/code running on each ESP32 board                                  | In Development |
| [pih-fastapi](https://github.com/christoff-linde/pih-fastapi)     | A basic FastAPI API for local testing (to be replaced by `pih-rs`)             | Archived       |
| [pih-mqtt-rs](https://github.com/christoff-linde/pih-mqtt-rs)     | A consumer service that reads from RabbitMQ and writes to the DB               | In Development |
| [pih-core-rs](https://github.com/christoff-linde/pih-core-rs)     | A webapi service written in Axum for communication from the frontend to the DB | In Development |
| [pih-rs](https://github.com/christoff-linde/pih-rs)               | A Rust Axum API Client for local testing                                       | Archived       |
| [pih-terraform](https://github.com/christoff-linde/pih-terraform) | The code to manage/provision AWS resources.                                    | In Development |
| pih-ue                                                            | The Unreal Engine project for the digital twin component                       | Planned        |
| [pih-web](https://github.com/christoff-linde/pih-nextjs-web)      | A NextJS web frontend                                                          | Planned        |

### V1 (Archived)

| Project                                                           | Description                                                        | Status         |
| ----------------------------------------------------------------- | ------------------------------------------------------------------ | -------------- |
| [pih-esp](https://github.com/christoff-linde/pih-esp)             | The firmware/code running on each ESP32 board                      | In Development |
| [pih-fastapi](https://github.com/christoff-linde/pih-fastapi)     | A basic FastAPI API for local testing (to be replaced by `pih-rs`) | Archived       |
| [pih-rs](https://github.com/christoff-linde/pih-rs)               | A Rust Axum API Client for local testing                           | Archived       |
| [pih-terraform](https://github.com/christoff-linde/pih-terraform) | The code to manage/provision AWS resources.                        | In Development |
| pih-ue                                                            | The Unreal Engine project for the digital twin component           | Planned        |
| [pih-web](https://github.com/christoff-linde/pih-nextjs-web)      | A NextJS web frontend                                              | Planned        |
