#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    // Initialize UART with a 115200 baud rate
    stdio_init_all();
    while (true) {
        printf("Hola Mundo\n");
        sleep_ms(2000); // Wait for 2 seconds
    }
}