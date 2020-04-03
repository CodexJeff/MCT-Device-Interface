#include "battery.h"

Battery::Battery()
{
    level = 100;
    drainAmount = 0.125;
    eco = false;
}

int Battery::batteryStatus(){return (int)level;}

void Battery::addDrain(float x){drainAmount += x;}

void Battery::remDrain(float x){if(drainAmount - x >= 0.125) drainAmount -= x;}

bool Battery::getEcoState(){return eco;}

void Battery::setEcoState(bool state){eco = state;}

int Battery::drain(){
    level -= drainAmount;
    if(level < 0){
        level = 0;
        return 0;
    }
    return 1;
}
