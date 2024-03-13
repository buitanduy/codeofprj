
int led = 2;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
 Serial.begin(9600);
  pinMode(led , OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //nhap nhay blink
 digitalWrite(led, HIGH);
 delay(2000);
 digitalWrite(led, LOW);
 delay(2000);



}
