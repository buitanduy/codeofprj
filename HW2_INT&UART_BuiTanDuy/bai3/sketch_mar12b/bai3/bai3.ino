int led = 2;
int nutnhan = 0;
unsigned long ttime;
void daoled(){
  digitalWrite(led, !digitalRead(led));
}
void batled()
{
  digitalWrite(led, HIGH);
}
void tatled()
{
  digitalWrite(led, LOW);
}

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(nutnhan, INPUT);
  ttime = millis();
  attachInterrupt(nutnhan, daoled, RISING);
}
void loop()
{
  int state = digitalRead(2);
  if(state == 1)
  {
    Serial.println("dang bat led");
  }
  else
  {
    Serial.println("da tat led");
  }
  if(Serial.available()) { 
  String  text = Serial.readStringUntil('\n');  
    if(text == "ON"  ) {
        batled();
    }
    if(text == "OFF") {
        tatled();
    }
    if(text == "BLINK"){
        Serial.println("nhap nhay");
        while(text == "BLINK"){
          String text1 = Serial.readStringUntil('\n');         
          if(text1 == "ON" ){
            batled();
            break;
          }
          if(text1 == "OFF"){
            tatled();
            break;
          }
        if ( millis() - ttime > 2000)
        {
          ttime = millis();
          if(digitalRead(led) == HIGH)
          {
            digitalWrite(led, LOW);
          }
          else
          {
            digitalWrite(led, HIGH);
          }
        }
  }}
   }
   
}
