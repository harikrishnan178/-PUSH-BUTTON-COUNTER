const int buttonPin = 2; 
int buttonState = 0; 
int count = 0;
int led = 7;
void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  Serial.println("Buttton Counter");
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) { 
    count++;
    Serial.print("Button pressed. Count = ");
    Serial.println(count); 
    delay(500);
  }
}


