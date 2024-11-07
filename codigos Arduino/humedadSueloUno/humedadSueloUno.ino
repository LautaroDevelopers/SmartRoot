

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int lectura = analogRead(A0);

  Serial.print("La lectura es: ");
  Serial.print(lectura);

  int lecturaPorcentaje = map(lectura, 1023,0,0,100);
  Serial.println("La humedad es del: ");
  Serial.println(lecturaPorcentaje);
  Serial.println("%");
  delay(1000);

  if (lecturaPorcentaje >80){
    digitalWrite(7,LOW);
  }else{
    digitalWrite(7,HIGH);
    }

}
