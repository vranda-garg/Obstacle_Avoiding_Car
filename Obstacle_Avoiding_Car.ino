#include <SoftwareSerial.h>

// ---------- Bluetooth ----------
SoftwareSerial bluetooth(2, 3); // RX, TX

// ---------- Ultrasonic ----------
const int trigPin = 8;
const int echoPin = 9;

// ---------- Motor Driver Pins ----------
int ENA = 5;   // Left motor speed
int ENB = 6;   // Right motor speed

int IN1 = 10;  // Left motor
int IN2 = 11;
int IN3 = 12;  // Right motor
int IN4 = 13;

// ---------- Variables ----------
char command;
long duration;
int distance;

void setup() {
  bluetooth.begin(9600);
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  analogWrite(ENA, 150);
  analogWrite(ENB, 150);

  stopCar();
}

void loop() {

  // ---------- Bluetooth Control ----------
  if (bluetooth.available()) {
    command = bluetooth.read();
    Serial.println(command);

    if (command == 'F') moveForward();
    else if (command == 'B') moveBackward();
    else if (command == 'L') turnLeft();
    else if (command == 'R') turnRight();
    else if (command == 'S') stopCar();
  }

  // ---------- Obstacle Detection ----------
  distance = getDistance();

  if (distance > 0 && distance < 20) {
    stopCar();
    delay(200);
    moveBackward();
    delay(400);
    turnRight();
    delay(300);
    stopCar();
  }
}

// ---------- Functions ----------

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000);
  if (duration == 0) return 0;

  return duration * 0.034 / 2;
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
