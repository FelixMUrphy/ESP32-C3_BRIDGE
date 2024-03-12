SemaphoreHandle_t sema_v = xSemaphoreCreateBinary();
SemaphoreHandle_t uart1_mutex = xSemaphoreCreateBinary();
SemaphoreHandle_t uart2_mutex = xSemaphoreCreateBinary();
SemaphoreHandle_t spi1_mutex = xSemaphoreCreateBinary();
SemaphoreHandle_t spi2_mutex = xSemphoreCreateBinary();
// xSemaphoreTake(interruptSemaphore, portMAX_DELAY) == pdPASS)
// xSemaphoreGive()
