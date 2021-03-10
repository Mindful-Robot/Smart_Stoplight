#define RED 4
#define YELLOW 3
#define GREEN 2
#define TRIG 5
#define ECHO 6

float duration;
float distance;


void setup() {

  pinMode(RED,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(GREEN,OUTPUT);
  
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  duration = pulseIn(ECHO,HIGH);
  distance = (duration*.0343)/2;

  if (distance < 20)
  {
      digitalWrite(RED,LOW);
      digitalWrite(YELLOW,LOW);
      digitalWrite(GREEN,HIGH);
  }
  else if(digitalRead(RED) == LOW){
      digitalWrite(RED,LOW);
      digitalWrite(YELLOW,HIGH);
      digitalWrite(GREEN,LOW);

      delay(2000);

      digitalWrite(RED,HIGH);
      digitalWrite(YELLOW,LOW);
      digitalWrite(GREEN,LOW);
  }
  else{
      digitalWrite(RED,HIGH);
      digitalWrite(YELLOW,LOW);
      digitalWrite(GREEN,LOW);
  }

  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
  
}
