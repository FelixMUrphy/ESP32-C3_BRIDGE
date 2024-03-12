//Value from global-variables branch

void setup()
{
  Serial.begin(115200);

  xTaskCreate(wifi_manager, "WiFiManager", 10000, NULL, 1, NULL);
}

void loop()
{
  //
}
