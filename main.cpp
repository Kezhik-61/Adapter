#include <QCoreApplication>
#include "sensor.h"
#include "adapter.h"
#include "fahrenheitsensor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Sensor* p = new Adapter( new FahrenheitSensor);
    cout << "Celsius temperature = " << p->getTemperature() << endl;
    delete p;
    return a.exec();
}
