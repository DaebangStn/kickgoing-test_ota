/*
 * Project kickgoing-test_ota
 * Description:
 * Author:
 * Date:
 */
SYSTEM_MODE(MANUAL);

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  RGB.control(true);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  RGB.color(0xff, 0x00, 0x00);
  delay(1000);
  RGB.color(0x00, 0xff, 0x00);
  delay(1000);
  RGB.color(0x00, 0x00, 0xff);
  delay(1000);
}
