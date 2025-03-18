#ifndef INSULINGAUGE_H
#define INSULINGAUGE_H

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