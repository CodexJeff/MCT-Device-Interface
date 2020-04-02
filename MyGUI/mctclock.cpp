#include "mctclock.h"

MCTClock::MCTClock()
{


}
void MCTClock::showTime(){





}
QString MCTClock::getTime(){
    QTime time = QTime::currentTime();

    return time.toString("hh:mm:ss");
}

