int led0 = 13;
int led1 = 12;
 

void setup() {                
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);      
}
 
void loop() {
  digitalWrite(led0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);               // wait for a second
  digitalWrite(led0, LOW);    // turn the LED off by making the voltage LOW
  delay(10);               // wait for a second
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);               // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(10);               // wait for a second
}
