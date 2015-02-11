int led = 3;

void setup() {
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Simple Led Controller");
  Serial.print("By: Aleksander Tsvetkov");
  Serial.print("Avaiable Commands:");
  Serial.print("ON/OFF - Turns the led on and off");
  Serial.print("0-255 -  The Light level of the led");
  
    char input = Serial.read();
    
       if(input == 'ON' || input == 'On') {
          digitalWrite(led,HIGH);
          Serial.print("The led is now on");
          input = 0;
        }
     
       if(input == 'OFF' || input == 'Off') {
         digitalWrite(led,LOW);
         Serial.print("The led is now off");
         input = 0;
       }
       
        for(int i = 0; i = input; i++) {
          analogWrite(led,i + 5);
        }
}
       
       
    
    
