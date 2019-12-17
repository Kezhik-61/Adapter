#ifndef FAHRENHEITSENSOR_H
#define FAHRENHEITSENSOR_H

#include <iostream>
using namespace std;

class FahrenheitSensor
{
private:
    FahrenheitSensor* t;
public:
    FahrenheitSensor();
    float getFahrenheitTemp();

};

#endif // FAHRENHEITSENSOR_H
