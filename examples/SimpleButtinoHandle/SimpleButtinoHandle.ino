#include "ButtinoRAK.h"

ButtinoRAK buttino;

void setup()
{
  Serial.begin(115200, RAK_AT_MODE);
  delay(2000);
  buttino.begin();
}

void loop()
{
}
