#include "battery.h"

Battery::Battery()
{
    level = 100;
    drainAmount = 0.125;
}

int Battery::batteryStatus(){return (int)level;}

void Battery::addDrain(float x){drainAmount += x;}

void Battery::remDrain(float x){if(drainAmount - x >= 0.05) drainAmount -= x;}

int Battery::drain(){
    level -= drainAmount;
    if(level < 0){
        level = 0;
        return 0;
    }
    return 1;
}
