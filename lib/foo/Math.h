#ifndef Math_h
#define Math_h

#include "Arduino.h"


class Math
{
    public:
        Math(int num);
        int multiply(int num);
        int devide(int num);
    private:
        int _num;
};
#endif