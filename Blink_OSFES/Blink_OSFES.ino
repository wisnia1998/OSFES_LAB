#define LED_BUILTIN 2

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9800);
}

 unsigned long StopTime = 0;
 unsigned long StartTime = 0;
 volatile int loop_var = 0;
 
void loop() {
  loop_var = 0;
  digitalWrite(LED_BUILTIN, HIGH);
  
  StartTime = micros();
  for(int i = 0; i < 1000000; ++i)
  {
    loop_var++;
  }
  StopTime = micros();
  
  Serial.println("Elapsed time: ");
  Serial.print(StopTime - StartTime);
  Serial.println("us");
  
  digitalWrite(LED_BUILTIN, LOW);    
  delay(500);                       
}
