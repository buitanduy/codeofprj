

int nutnhan = 0;
int led = 2;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
 Serial.begin(9600);
  pinMode(led , OUTPUT);
  pinMode(nutnhan, INPUT);

}

void dkled(int a)
{ static int dem = 1;
  if(a==0)
  { while(a);
   delay(500);
    dem = dem+1;
    Serial.println(dem);
    if(dem%2 == 0)
    {
      digitalWrite(led, HIGH);
    }
    else
    {
      digitalWrite(led, LOW);
    }
}
}

// the loop function runs over and over again forever
void loop() {
  int state = digitalRead(nutnhan);
  dkled(state);
 




}
