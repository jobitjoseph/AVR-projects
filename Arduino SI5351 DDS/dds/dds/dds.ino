#include "si5351.h"
#include "Wire.h"

Si5351 si5351;

void setup() {
  si5351.init(SI5351_CRYSTAL_LOAD_8PF, 0, 0);
  si5351.set_freq(1014000000ULL, SI5351_CLK0);
  pinMode(LED_BUILTIN, OUTPUT);
}

void wait(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(5000);
}

void loop() {
  
  si5351.set_freq(1000000000ULL, SI5351_CLK0);

  /*
  si5351.set_freq(100000000ULL, SI5351_CLK0);
  wait();
  si5351.set_freq(1000000000ULL, SI5351_CLK0);
  wait();
  si5351.set_freq(5000000000ULL, SI5351_CLK0);
  wait();
  si5351.set_freq(10000000000ULL, SI5351_CLK0);
  wait();
  si5351.set_freq(15000000000ULL, SI5351_CLK0);
  wait();
  */
}