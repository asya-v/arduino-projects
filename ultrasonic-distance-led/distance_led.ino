const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 3;   // PWM pin

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  long duration;
  int distance;
  int brightness;

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time
  duration = pulseIn(echoPin, HIGH);

  // Convert time to distance in cm
  distance = duration * 0.034 / 2;

  // Convert distance to LED brightness
  distance = constrain(distance, 5, 50);
  brightness = map(distance, 5, 50, 255, 0);

  analogWrite(ledPin, brightness);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm | Brightness: ");
  Serial.println(brightness);

  delay(100);
}
