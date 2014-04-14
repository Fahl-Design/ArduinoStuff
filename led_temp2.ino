




int TMP36 = A0;
int temperatur = 0;
int temp[10];
int time= 20;


void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);

  pinMode(2, OUTPUT);

}
 



void loop() {
    
  temp[1] = map(analogRead(TMP36), 0, 410, -50, 150);
  delay(time);
  temp[2] = map(analogRead(TMP36), 0, 410, -50, 150);
  delay(time);
  temp[3] = map(analogRead(TMP36), 0, 410, -50, 150);
  delay(time);
  temp[4] = map(analogRead(TMP36), 0, 410, -50, 150);
  delay(time);
  temp[5] = map(analogRead(TMP36), 0, 410, -50, 150);
  delay(time);
  temp[6] = map(analogRead(TMP36), 0, 410, -50, 150);
  delay(time);
  temp[7] = map(analogRead(TMP36), 0, 410, -50, 150);
  delay(time);
  temp[8] = map(analogRead(TMP36), 0, 410, -50, 150);
  delay(time);
  temp[9] = map(analogRead(TMP36), 0, 410, -50, 150);
  delay(time);
  temp[10] = map(analogRead(TMP36), 0, 410, -50, 150);
   
   
  temperatur=(temp[1]+temp[2]+temp[3]+temp[4]+temp[5]+temp[6]+temp[7]+temp[8]+temp[9]+temp[10])/10; // Alles in eine Zeile!
   
  Serial.print(temperatur);
  Serial.println(" Grad Celsius");



  if (temperatur<=-15) 
  {
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(500);
  }
    else if (temperatur<=-10) 
  {
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(500);
  }
      else if (temperatur<=0) 
  {
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(500);
  }
        else if (temperatur<=10) 
  {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(500);
  }
  else if (temperatur<=15) 
  {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(500);
  }
  else if (temperatur<=20)
  {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(500);
  }
  else if (temperatur<=23)
  {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(500);
  }  
    else if (temperatur<=25)
  {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(500);
  }  
      else if (temperatur<=30)
  {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    delay(500);
  }  
}
