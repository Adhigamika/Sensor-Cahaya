int sensor=A0;
const int relay=14;

void setup(){ 
  Serial.begin(9600);
  pinMode(relay,OUTPUT);  
}

void loop(){
  int intensitasCahaya;
  intensitasCahaya=analogRead(sensor);
  Serial.print("Nilai Sensor = ");
  Serial.println(intensitasCahaya);

  
  if (intensitasCahaya>=100){
    digitalWrite(relay, LOW);
    Serial.println("RUANGAN TERANG, LAMPU MATI!");
    Serial.println("==================");
  }
  
  else {
  digitalWrite(relay, HIGH);
  Serial.println("RUANGAN GELAP, LAMPU NYALA!");
  Serial.println("==================");
  }
  delay(1000);
}
