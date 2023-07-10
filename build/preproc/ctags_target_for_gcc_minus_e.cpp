# 1 "C:\\Users\\iclee\\Programming\\Arduino\\trashcan\\trashcan.ino"
# 2 "C:\\Users\\iclee\\Programming\\Arduino\\trashcan\\trashcan.ino" 2

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
        delay(1500);
    } else if (light < 50) {
        servo.write(0);
        delay(1500);
    }
 /* servo.write(50); */
}
