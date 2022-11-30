/*
USAGE:
Send a byte through serial (XXXXXXXX):
  * Bit 0 (rightmost): lift elevator
  * Bit 1: lower elevator
  * Bit 2: push shoe
  * Bit 3: pull shoe
  * Bit 4: connect peg
  * Bit 5: release peg
  * Bit 6: lower actuator
  * Bit 7: lift actuator
*/

#include <Servo.h>

// Rollers
#define ROLLER_1_IN 1
#define ROLLER_1_OUT 2
#define ROLLER_1_SPD 3
#define ROLLER_2_IN 4
#define ROLLER_2_OUT 5
#define ROLLER_2_SPD 6

// Elevator
#define ELEVATOR_1_UP 7
#define ELEVATOR_1_DOWN 8
#define ELEVATOR_1_SPD 9
#define ELEVATOR_2_UP 10
#define ELEVATOR_2_DOWN 11
#define ELEVATOR_2_SPD 12
#define PEG_CONNECTOR 14

// Limit switches
#define TOP_LIMIT 15
#define BOTTOM_LIMIT 16

// Linear actuator
#define ACTUATOR_DOWN 17
#define ACTUATOR_UP 18

// Peg connector
Servo pegConnector;

void setup() {
  // Inputs
  pinMode(TOP_LIMIT, INPUT);
  pinMode(BOTTOM_LIMIT, INPUT);
  
  // Outputs
  pinMode(ROLLER_1_IN, OUTPUT);
  pinMode(ROLLER_1_OUT, OUTPUT);
  pinMode(ROLLER_1_SPD, OUTPUT);
  pinMode(ROLLER_2_IN, OUTPUT);
  pinMode(ROLLER_2_OUT, OUTPUT);
  pinMode(ROLLER_2_SPD, OUTPUT);
  pinMode(ELEVATOR_1_UP, OUTPUT);
  pinMode(ELEVATOR_1_DOWN, OUTPUT);
  pinMode(ELEVATOR_1_SPD, OUTPUT);
  pinMode(ELEVATOR_2_UP, OUTPUT);
  pinMode(ELEVATOR_2_DOWN, OUTPUT);
  pinMode(ELEVATOR_2_SPD, OUTPUT);
  pinMode(ACTUATOR_DOWN, OUTPUT);
  pinMode(ACTUATOR_UP, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, 0);

  // Servo
  pegConnector.attach(PEG_CONNECTOR);

  Serial.begin(115200);
}

void loop() {
  if (Serial.available()) handleMessage(Serial.read());
}

void handleMessage(byte message) {
    if (bitRead(message, 0)) lift(true);
    if (bitRead(message, 1)) lift(false);
    if (bitRead(message, 2)) intake(true);
    if (bitRead(message, 3)) intake(false);
    if (bitRead(message, 4)) peg(true);
    if (bitRead(message, 5)) peg(false);
    if (bitRead(message, 6)) actuate(true);
    if (bitRead(message, 7)) actuate(false);
}

void lift(bool up) {
    if (!digitalRead(up ? TOP_LIMIT : BOTTOM_LIMIT)) {
        digitalWrite(ELEVATOR_1_UP, up);
        digitalWrite(ELEVATOR_1_DOWN, !up);
        digitalWrite(ELEVATOR_1_SPD, 255);

        digitalWrite(ELEVATOR_2_UP, up);
        digitalWrite(ELEVATOR_2_DOWN, !up);
        digitalWrite(ELEVATOR_2_SPD, 255);
    }
}

void intake(bool pull) {
    digitalWrite(ROLLER_1_IN, pull);
    digitalWrite(ROLLER_1_OUT, !pull);
    analogWrite(ROLLER_1_SPD, 255);

    digitalWrite(ROLLER_2_IN, pull);
    digitalWrite(ROLLER_2_OUT, !pull);
    analogWrite(ROLLER_2_SPD, 255);
}

void peg(bool conn) {
    pegConnector.write(conn ? 180 : 90);
}

void actuate(bool down) {
  digitalWrite(ACTUATOR_DOWN, down);
  digitalWrite(ACTUATOR_UP, !down);
}
