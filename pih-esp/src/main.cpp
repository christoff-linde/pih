#include "WiFi.h"

const char *ssid = "";
const char *password = "";

void initWifi()
{
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi ..");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(1000);
  }
  Serial.println(WiFi.localIP());
}

void networkScan()
{
  Serial.println("Scan start");

  // WiFi.scanNetworks will return the number of networks found
  int numberOfNetworks = WiFi.scanNetworks();

  if (numberOfNetworks == 0)
  {
    Serial.println("No networks found");
  }
  else
  {
    Serial.print(numberOfNetworks);
    Serial.println(" networks found");
    for (int index = 0; index < numberOfNetworks; ++index)
    {
      // Print SSID and RSSI for each network found
      Serial.print(index + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(index));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(index));
      Serial.print(")");
      Serial.println(WiFi.encryptionType(index) == WIFI_AUTH_OPEN ? " " : "*");
      delay(10);
    }
  }
  Serial.println("Scan done");
  Serial.println("");
}

void setup()
{
  delay(100);
  Serial.begin(115200);
  Serial.println("Starting setup");

  // Set WiFi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  networkScan();
  initWifi();
  Serial.println("Setup done");
}

void loop()
{
}