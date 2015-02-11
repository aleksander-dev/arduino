int led1 = 6;
int led2 = 5;
int led3 = 4;
int led4 = 3;
int led5 = 2;
int button = 1;
int state;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  state = digitalRead(button);
    if(state == 1) {
      digitalWrite(led1,HIGH);
      digitalWrite(led4,HIGH);
      delay(2000);
      digitalWrite(led1,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led2,HIGH);
      delay(1000);
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
      digitalWrite(led5,HIGH);
      delay(2000);
    }
    else {
    digitalWrite(led2,HIGH);
    delay(1000);
    }
}
