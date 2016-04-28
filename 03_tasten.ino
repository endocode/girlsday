// Sprechende Namen vergeben
int LED = 1;
int LED_L = 3;
int LED_R = 4;
int TASTE_L = 0;
int TASTE_R = 2;
int GEDRUECKT = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(TASTE_L, INPUT_PULLUP); 
  pinMode(TASTE_R, INPUT_PULLUP); 
  pinMode(LED, OUTPUT); 
  pinMode(LED_R, OUTPUT);
  pinMode(LED_L, OUTPUT);
}


void loop() {

  // Variablen fuer die eingelesenen Werte
  int tastenwert_L;  
  int tastenwert_R;  


  // Einlesen der Tasten  
  tastenwert_L = digitalRead(TASTE_L);
  tastenwert_R = digitalRead(TASTE_R);

  if (tastenwert_L == GEDRUECKT) {
    digitalWrite(LED, HIGH);
    digitalWrite(LED_L, HIGH);
    digitalWrite(LED_R, HIGH);
  } else if (tastenwert_R == GEDRUECKT) {
    digitalWrite(LED, HIGH);
    digitalWrite(LED_L, HIGH);
    digitalWrite(LED_R, HIGH);
  }
   
}
