int button;
int led;
int counter;
int state;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
}

void loop() {
  state = digitalRead(button);
    if(state == 1) {
      counter++;
      Serial.print("button pressed");
      state = 0;
  }
  
  Serial.print("The button was pressed");
  Serial.print(counter);
  Serial.print("times");
}
