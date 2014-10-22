/* USB Keyboard Refresh Test

   You must select Keyboard from the "Tools > USB Type" menu

   Select the the correct layout from "Tools > Keyboard Layout"
*/

const int ledPin = 6;   // Teensy 2.0 = Pin 11, Teensy++ 2.0 = Pin 6

void setup() {

  // Blink the LED for 5 seconds, to give time to open 
  // the appropriate website
  pinMode(ledPin, OUTPUT);
  for (int i=0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}

void loop() {
  Keyboard.press(KEY_F5);
  Keyboard.releaseAll();
  delay(30000);  // This will send a refresh every 30seconds (time in miliseconds => 30*1000)
  
}
