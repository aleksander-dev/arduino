int led = 2;
int led1 = 3;
int led2 = 5;
int led3 = 7;
int led4 = 9;
int led5 = 11;
int button = 1;
int state;
int number;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(button,INPUT);
  number = random(1,6);
}

void loop() {
  state = digitalRead(button);
  
    if(state == 1) {
      switch(number) { 
        
        case 1 : {
         digitalWrite(led,HIGH);
         break;
         }
        
        case 2 : {
          digitalWrite(led,HIGH);
          digitalWrite(led1,HIGH);
          break;
        }
         
        case 3 : {
         digitalWrite(led,HIGH);
         digitalWrite(led1,HIGH);
         digitalWrite(led2,HIGH);
         break;  
        }
         
         case 4 : {
          digitalWrite(led,HIGH);
          digitalWrite(led1,HIGH);
          digitalWrite(led2,HIGH);
          digitalWrite(led3,HIGH);
          break;
         }
         
         case 5 : {
          digitalWrite(led,HIGH);
          digitalWrite(led1,HIGH);
          digitalWrite(led2,HIGH);
          digitalWrite(led3,HIGH);
          digitalWrite(led4,HIGH);
          break;
         } 
        
         case 6 : {
          digitalWrite(led,HIGH);
          digitalWrite(led1,HIGH);
          digitalWrite(led2,HIGH);
          digitalWrite(led3,HIGH);
          digitalWrite(led4,HIGH);
          digitalWrite(led5,HIGH);
          break;
         } 
      }
    }
       else {
         random_number = random(1,6);
         digitalWrite(led,LOW);
         digitalWrite(led1,LOW);
         digitalWrite(led2,LOW);
         digitalWrite(led3,LOW);
         digitalWrite(led4,LOW);
         digitalWrite(led5,LOW);
       }
         
}

  
