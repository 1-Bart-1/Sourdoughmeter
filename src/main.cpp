#include "Arduino.h"
#include <Math.h>

Math math(10);
int devider;
int multiplyer;

void setup(){
    Serial.begin(115200);

    multiplyer = math.multiply(10);
    devider = math.devide(5);

    Serial.print("Multiplyer is: ");
    Serial.println(multiplyer);
    Serial.print("Devider is: ");
    Serial.println(devider);
}
void loop(){}