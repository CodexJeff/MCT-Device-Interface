#ifndef BATTERY_H
#define BATTERY_H


class Battery
{
public:
    Battery();
    int batteryStatus();
    void addDrain(float);
    void remDrain(float);
    int drain();

private:
    float level;
    float drainAmount;
};

#endif // BATTERY_H
