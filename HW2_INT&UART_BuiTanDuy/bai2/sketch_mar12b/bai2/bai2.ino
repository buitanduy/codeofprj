
int led = 2;
unsigned long ttime;
void batled()
{
  digitalWrite(led, HIGH);
  Serial.println("bat den");
}
void tatled()
{
  digitalWrite(led, LOW);
  Serial.println("tat den");
}
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  ttime = millis();
}
void loop()
{
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
