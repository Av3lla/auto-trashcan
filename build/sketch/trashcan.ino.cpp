#include <Arduino.h>
#line 1 "C:\\Users\\iclee\\Programming\\Arduino\\trashcan\\trashcan.ino"
#include <Servo.h>

Servo servo;

#line 5 "C:\\Users\\iclee\\Programming\\Arduino\\trashcan\\trashcan.ino"
void setup();
#line 11 "C:\\Users\\iclee\\Programming\\Arduino\\trashcan\\trashcan.ino"
void loop();
#line 5 "C:\\Users\\iclee\\Programming\\Arduino\\trashcan\\trashcan.ino"
void setup()
{
    Serial.begin(9600);
	servo.attach(2);
}

void loop()
{
    int light = analogRead(A0);
    Serial.println(light);
    if (light >= 50) {
        servo.write(90);
        delay(1500);
    } else if (light < 50) {
        servo.write(0);
        delay(1500);
    }
	/* servo.write(50); */
}

