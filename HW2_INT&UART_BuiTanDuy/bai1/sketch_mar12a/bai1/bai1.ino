

int led = 2;
int nutnhan = 0;
void daoled(){
  digitalWrite(led, !digitalRead(led));
}
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(nutnhan, INPUT);
  // put your setup code here, to run once:
  attachInterrupt(nutnhan, daoled, RISING);
}


void loop(){
  int state = digitalRead(2);
  if(state == 1)
  {
    Serial.println("dang bat led");
  }
  else
  {
    Serial.println("da tat led");
  }
}/haha
