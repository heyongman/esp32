#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "my.h"

#define LED_IO (18)

void app_main(void) {
    printf("starting...\n");
    while (1){
        gpio_pad_select_gpio(LED_IO);
        gpio_set_direction(LED_IO,GPIO_MODE_OUTPUT);
        gpio_set_level(LED_IO,0);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(LED_IO,1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    
}
