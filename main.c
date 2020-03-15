/*
    ChibiOS - Copyright (C) 2006..2015 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#include "ch.h"
#include "hal.h"

#include "ws2812.h"

/*
 * Application entry point.
 */
int main(void) {

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();

  ws2812_init();

  /*
   * Normal main() thread activity, LED animation example.
   */
#define WS2812_LED_N  60
  int s = 0;
  uint8_t r, b, g;
  while (true) {
    if (palReadPad(GPIOA, GPIOA_BUTTON)) {
    }
    for (int n = 0; n < WS2812_LED_N; n++) {
      // colorwheel function
      int position = (s + 5*n) % 100;
      switch (position >> 5) {
      case 0:
        r = 31 - position % 32; // Red down
        g = position % 32;      // Green up
        b = 0;                  // blue off
        break;
      case 1:
        g = 31 - position % 32; // green down
        b = position % 32;      // blue up
        r = 0;                  // red off
        break;
      case 2:
        b = 31 - position % 32; // blue down
        r = position % 32;      // red up
        g = 0;                  // green off
        break;
      }
      ws2812_write_led(n, r, g, b);
    }
    s += 3;
    chThdSleepMilliseconds(50);
    palTogglePad(GPIOD, GPIOD_LED3);
  }
}
