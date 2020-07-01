#define sensor1 0
#define sensor2 1

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor1,INPUT);
  pinMode(sensor2,INPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Valor do sensor 1: ");
  Serial.println(analogRead(sensor1));
  Serial.print("Valor do sensor 2: ");
  Serial.println(analogRead(sensor2));
  delay(1000);
}
