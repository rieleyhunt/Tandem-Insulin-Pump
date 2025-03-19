#ifndef BATTERY_INDICATOR_H
#define BATTERY_INDICATOR_H

//Displays real-time battery percentage.
class BatteryIndicator {
public:
    BatteryIndicator();
    ~BatteryIndicator();

    int getBatteryPercentage() const;
    void updateBatteryPercentage();

private:
    int batteryPercentage;

};

#endif // BATTERY_INDICATOR_H