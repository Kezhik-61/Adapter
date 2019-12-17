#ifndef ADAPTER_H
#define ADAPTER_H

#include "sensor.h"
#include "fahrenheitsensor.h"

class Adapter : public Sensor
{
private:
    FahrenheitSensor* p_fsensor;
public:
    ~Adapter();
    float getTemperature();
    Adapter(FahrenheitSensor* p);
};

#endif // ADAPTER_H
