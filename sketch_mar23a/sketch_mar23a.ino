
const int sensorPin = 9;
long contador = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);

}

void loop() {
  int value = 0;
  value = digitalRead(sensorPin );
  if (value==LOW){
    Serial.print("contador activado");
    contador=contador+1;
    Serial.println(contador);
    
  }
  delay(10);

}
