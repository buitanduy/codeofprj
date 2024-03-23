
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

https://github.com/buitanduy/codeofprj/assets/101345457/a9293b47-aafa-429e-9603-9f844f510974
