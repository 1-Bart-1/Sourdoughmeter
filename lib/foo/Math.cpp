#include "Arduino.h"
#include "Math.h"

Math::Math(int num)
{
    _num = num; 
}
int Math::multiply(int num1)
{
    return _num * num1;
}
int Math::devide(int num2)
{
    return _num / num2; 
}
