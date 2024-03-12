#include "WiFi.h"

const char* ssid 	= "A1-AF96D2";
const char* passwd 	= "bukifu3987";

enum WiFi_Modes
{
  WiFi_AP,
  WiFi_STA
};

bool wifi_mode = WiFi_STA;

void wifi_manager(void * parameter)
{
	WiFi.begin(ssid, passwd);

	while (true)
	{
		vTaskDelay(100);
	}

	//vTaskDelete(NULL);
}