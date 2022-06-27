#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  gpio_init(25);
    gpio_set_dir (25,true);
  while (true) {
    char i= gpio_get (25);
    gpio_put (25,true);
    sleep_ms(500);
    gpio_put (25,false);
    sleep_ms(500);
    
  }
}
