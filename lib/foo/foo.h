#include "Arduino.h"
#ifndef foo_h
#define foo_h


class Math
{
    public:
        Math(int num);
        void multiply(int num);
        void devide(int num);
    private:
        int _num;
};

#endif