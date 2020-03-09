WS2812-LED-Driver_ChibiOS
=========================

LED Driver for WS2812B, SK6812, NeoPixel etc. for ChibiOS.

## Description
Implements the WS2812-protocol using one DMA-stream and one timer. This requires very little cpu, but has a quite high memory usage of 96 bytes per LED.

Supports both RGB and RGBW LEDs.

## Status and contribution
This driver has been tested with STM32F4. Further CPU's Please feel encouraged to fork the repo and finish this work. Any contributions, preferably [Pull Requests](https://github.com/joewa/WS2812-LED-Driver_ChibiOS/pulls) are welcome.
Or [![Join the chat at https://gitter.im/joewa/WS2812-LED-Driver_ChibiOS](https://badges.gitter.im/joewa/WS2812-LED-Driver_ChibiOS.svg)](https://gitter.im/joewa/WS2812-LED-Driver_ChibiOS?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

## Usage
An example project for the STM32F4-Discovery board is included. Connect the LEDs to pin PA1.

Put this directory in the same place as the ChibiOS source tree, so it can be found in ../ChibiOS.
Works with ChibiOS 19.1.x. (Use older version for 16.1.x)

- Make sure at least one peripheral that uses DMA is enabled in halconf.h.
