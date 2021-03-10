//Define pins
#define RED 4
#define YELLOW 3
#define GREEN 2

void setup() {
  pinMode(RED,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(GREEN,OUTPUT);
  
}

void loop() {
  digitalWrite(RED,HIGH);
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN,LOW);

  delay(1000);

  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN,HIGH);

  delay(1000);

  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,HIGH);
  digitalWrite(GREEN,LOW);

  delay(1000);
  
}
