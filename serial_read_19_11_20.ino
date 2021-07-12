#define X A0
#define Y A1
#define Z A2

int Xaxis;
int Yaxis;
int Zaxis;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {  
  Xaxis = analogRead(X); 
  Yaxis = analogRead(Y);
  Zaxis = analogRead(Z);
  float Xa = ( Xaxis)*1; 
  float Ya = ( Yaxis)*1;
  float Za = ( Zaxis)*1;
  Serial.print("X acceleration = "); 
  Serial.print(Xa,DEC);
  Serial.print(",");
  Serial.print("Y acceleration = "); 
  Serial.print(Ya,DEC);
  Serial.print(",");
  Serial.print("Z acceleration = "); 
  Serial.print(Za,DEC);
  Serial.println();
  delay(1000);
}

  
