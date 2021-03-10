#define TRIG 5
#define ECHO 6

float duration;
float distance;


void setup() {
  
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

  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
  
}
