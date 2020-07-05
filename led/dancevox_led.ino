int incomingByte = 0; // for incoming serial data
int led1 = 13;
int led2 = 12;

void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT); 
}

void loop() {

  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.println(incomingByte);
    
    // led 1
    if(incomingByte == 1) {
      analogWrite(led1, 255);
    }
    
    if(incomingByte == 0) {
      analogWrite(led1, 0);
    }
    
    // led 2
    if(incomingByte == 3) {
      analogWrite(led2, 255);
    }
    
    if(incomingByte == 2) {
      analogWrite(led2, 0);
    }
  }
  
}
