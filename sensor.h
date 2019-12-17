#ifndef SENSOR_H
#define SENSOR_H


class Sensor
{
public:
    Sensor();
    ~Sensor();
    virtual float getTemperature();
};

#endif // SENSOR_H
