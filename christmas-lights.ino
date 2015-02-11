int led = 3;
int led1 = 5;
int led2 = 7;
int led3 = 9;
int led4 = 11;
int led5 = 13;
int button = 2;
int state;
boolean pressed = false;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(button,INPUT);
}
  
void loop() { 
  state = digitalRead(button);
    if ( state == 1 ) {
      digitalWrite(led,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led4,HIGH);
      delay(300);
      digitalWrite(led,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led4,LOW);
      delay(100);
      digitalWrite(led1,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led5,HIGH);
      delay(300);
      digitalWrite(led1,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led5,LOW);
      pressed = true;
    }
   else {
         if ( pressed == true ) {    
           for( int i = 0 ; i <= 255 ; i = i + 15 ) {
             analogWrite(led, i);
             analogWrite(led2, i);
             analogWrite(led4, i);
             analogWrite(led1, 255 - i);
             analogWrite(led3, 255 - i);
             analogWrite(led5, 255 - i);
             delay(12);
           }               
          
            for ( int j = 0 ; j <= 255 ; j = j + 15 ) {
              analogWrite(led1, j);
              analogWrite(led3, j);
              analogWrite(led5, j);
              analogWrite(led, 255 - j);
              analogWrite(led2, 255 - j);
              analogWrite(led4, 255 - j);
              delay(12);
            }
       }
      
      else {
        digitalWrite(led,HIGH);
        delay(75);
        digitalWrite(led,LOW);
        digitalWrite(led1,HIGH);
        delay(75);
        digitalWrite(led1,LOW);
        digitalWrite(led2,HIGH);
        delay(75);
        digitalWrite(led2,LOW);
        digitalWrite(led3,HIGH);
        delay(75);
        digitalWrite(led3,LOW);
        digitalWrite(led4,HIGH);
        delay(75);
        digitalWrite(led4,LOW);
        digitalWrite(led5,HIGH);
        delay(75);
        digitalWrite(led5,LOW);
     }
   }
}
