/*
  01_blink.ino

  Lasse die eingebaute LED blinken.

*/

// Gebe dem Pin mit der LED einen sprechenden Namen
int LED = 1;


// Konfiguriere den Pin mit der LED als Ausgang.
void setup() {
  //
  pinMode(LED, OUTPUT); // Die LED im rechten Auge
}


void loop() {

  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
