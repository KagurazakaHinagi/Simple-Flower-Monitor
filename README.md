# Simple-Flower-Monitor
An Arduino Nano project for high school exam of General Technology.

## Requirements
[Arduino IDE](https://www.arduino.cc/)

Arduino Library: 
- [u8glib](https://github.com/olikraus/U8glib_Arduino)
- [BH1750](https://github.com/claws/BH1750)

## Usage

LM35 --> A0

Moisture Sensor --> A1

BH1750 SDA --> A4

BH1750 SCL --> A5


The Data Measurement:

Temperature: Celcius (˚C)

Brightness: Lux

Moisture: 

| Data | Meaning |

| ------------ | ------------ |

| 0-150 | Dry |

| 150-300 | Wet |

| 300-900 | In water |


## Important Info about Moisture Sensor
The Moisture Sensor is a consumable. 

Please replace it once a year. 

## License 
using MIT License.