#define echoPin 6
#define trigPin 8
#define Led 13
int distance;
long int duration;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop ()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delay(1);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.034 / 2);

  if (distance < 150)
  {
  digitalWrite(Led, HIGH);
    delay(500);
    digitalWrite(Led, LOW);
    delay(500);
  }
  else
  {
    digitalWrite(Led, LOW);
  }
}