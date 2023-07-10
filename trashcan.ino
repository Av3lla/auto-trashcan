#include <Servo.h>

Servo servo;

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
        delay(2500);
    } else if (light < 50) {
        servo.write(0);
        delay(2500);
    }
	/* servo.write(50); */
}
