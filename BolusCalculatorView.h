#ifndef BATTERYINDICATOR_H
#define BATTERYINDICATOR_H


class BatteryIndicator {
public:
    BatteryIndicator();
    ~BatteryIndicator();

    void setLevel(float level);
    float getLevel() const;

private:
    float level;
};

#endif // BATTERYINDICATOR_H