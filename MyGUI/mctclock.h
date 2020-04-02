#ifndef CLOCK_H
#define CLOCK_H
#include <QTime>
#include <QString>
#include <string>
using namespace std;
class MCTClock
{
public:
    MCTClock();
     QString getTime();
private:
    QString text;

};

#endif // CLOCK_H
