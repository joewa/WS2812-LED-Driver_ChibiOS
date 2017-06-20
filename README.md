WS2812-LED-Driver_ChibiOS
=========================

LED Driver for WS2812B for ChibiOS.

## Description
Implements the WS2812-protocol using one DMA-stream and one timer.

## Status and contribution
This driver has been tested with STM32F4. Further CPU's Please feel encouraged to fork the repo and finish this work. Any contributions, preferably [Pull Requests](https://github.com/joewa/WS2812-LED-Driver_ChibiOS/pulls) are welcome.
Or [![Join the chat at https://gitter.im/joewa/WS2812-LED-Driver_ChibiOS](https://badges.gitter.im/joewa/WS2812-LED-Driver_ChibiOS.svg)](https://gitter.im/joewa/WS2812-LED-Driver_ChibiOS?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

## Usage
An example project for the STM32F4-Discovery board is included. Connect the LEDs to pin PA1.

Put this directory in the same place as the ChibiOS source tree, so it can be found in ../ChibiOS.
Tested with ChibiOS 16.1.8.

- Make sure at least one peripheral that uses DMA is enabled in halconf.h.
