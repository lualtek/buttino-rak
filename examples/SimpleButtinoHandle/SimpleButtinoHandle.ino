#include "ButtinoHandler.h"

ButtinoHandler buttinoHandler;

void setup()
{
  Serial.begin(115200, RAK_AT_MODE);
  delay(2000);
  buttinoHandler.begin(WB_IO5);
}

void loop()
{
  buttinoHandler.handle();
}
