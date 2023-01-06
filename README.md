
[![Arduino CI](https://github.com/RobTillaart/MHZCO2/workflows/Arduino%20CI/badge.svg)](https://github.com/marketplace/actions/arduino_ci)
[![Arduino-lint](https://github.com/RobTillaart/MHZCO2/actions/workflows/arduino-lint.yml/badge.svg)](https://github.com/RobTillaart/MHZCO2/actions/workflows/arduino-lint.yml)
[![JSON check](https://github.com/RobTillaart/MHZCO2/actions/workflows/jsoncheck.yml/badge.svg)](https://github.com/RobTillaart/MHZCO2/actions/workflows/jsoncheck.yml)
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/RobTillaart/MHZCO2/blob/master/LICENSE)
[![GitHub release](https://img.shields.io/github/release/RobTillaart/MHZCO2.svg?maxAge=3600)](https://github.com/RobTillaart/MHZCO2/releases)


# MHZCO2

Arduino Library for MHZ series CO2 sensors.


## Description

The MHZCO2 is a library for the MHZ19B CO2 sensor with a Serial (RS232-TTL) interface and compatibles.

The library offers a base class and some derived classes that may have specific functionality.
The base class is based upon the MHZ19B specification. This might change in the future as compatibles might differ on detail.

Reference: user manual MHZ129B 2019-04-25 version 1.4 


## Connection

- check datasheet of your sensor.


## Interface

#### Constructor

- **MHZCO2()** base class constructor.
- **MHZ19B()** constructor.
- **MTP40F()** constructor.

#### Range

- **void setPPM(uint16_t PPM)**
- **uint16_t getPPM()**

#### Measure

- **int measure()**
- **uint32_t lastMeasurement()**
- **int getCO2()**
- **int getTemperature()**
- **int getAccuracy()**
- **int getMinCO2()**

#### Calibration

- **void calibrateZero()**
- **void calibrateSpan(uint16_t span)**
- **void calibrateAuto(bool mode = true)**


## Future

#### Must
- improve documentation
- buy hardware MHZ19B / ...
- test with hardware
- verify checksum
- verify timeout
- investigate parameters range (span & PPM)


#### Should 
- plotter example
- define list of compatibles.


#### Could
- extend unit tests
- add type info for derived classes?


#### Won't

