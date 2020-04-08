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
    bool getEcoState();
    void setEcoState(bool);
    float drainAmount;

private:
    float level;

    bool eco;
};

#endif // BATTERY_H
