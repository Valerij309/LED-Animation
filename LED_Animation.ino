int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
unsigned long timer1 = 0;
unsigned long timer2 = 0;
void setup() {
  for(int i = 2; i < 9; i++){
    pinMode(i,OUTPUT);
  }
  randomSeed(analogRead(A0) + analogRead(A1));
}
void clearLed(){
    for(int i = 0; i <= 9; i++){
    digitalWrite(i,0);
  }
}
void loop() {
    
    for(int i = 0; i < 9; i++){
    digitalWrite(i,1);
    digitalWrite(i-1,0);
    delay(150);
  }
  
  delay(400);
   for(int i = 9; i >= 0; i--){
    digitalWrite(i,1);
    digitalWrite(i+1,0);
    delay(150);
  }
clearLed();
  delay(500);
  for(int i = 0; i < 5; i++){
    digitalWrite(5 - i,1);
    digitalWrite(5 + i,1);
    delay(200);
    digitalWrite(5 - i,0);
    digitalWrite(5 + i,0);
  }
clearLed();
   for(int i = 0; i < 8; i++){
    digitalWrite(8 - i,1);
    digitalWrite(2 + i,1);
    delay(200);
    digitalWrite(8 - i,0);
    digitalWrite(2 + i,0);
  }
   for(int i = 0; i < 30; i++){
    int value = random(9);
    digitalWrite(value,1);
    delay(200);
    
   }
clearLed();
}
