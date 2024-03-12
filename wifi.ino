#include "WiFi.h"

const char* ssid 	= "A1-AF96D2";
const char* passwd 	= "bukifu3987";

void wifi_manager(void * parameter)
{
	WiFi.begin(ssid, passwd);

	while (true)
	{
		vTaskDelay(100);
	}

	//vTaskDelete(NULL);
}