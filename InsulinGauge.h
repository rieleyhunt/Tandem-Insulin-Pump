#ifndef INSULINGAUGE_H
#define INSULINGAUGE_H

#include <QTWidget>
// QT UI for the reservoir shows the remaining insulin in the reservoir
class InsulinGauge {
private:
    float level;
public:
    InsulinGauge();
    ~InsulinGauge();

    void setLevel(float level);
    float getLevel() const;
};

#endif // INSULINGAUGE_H