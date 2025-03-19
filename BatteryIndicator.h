//Displays real-time battery percentage.
#ifndef BATTERYINDICATOR_H
#define BATTERYINDICATOR_H

#include <QWidget>

class BatteryIndicator : public QWidget {
    Q_OBJECT
public:
    explicit BatteryIndicator(QWidget *parent = nullptr);
    ~BatteryIndicator();

    void setBatteryLevel(int level);

signals:
    void batteryLow();

private:
    int batteryLevel;
    void updateDisplay();
};

#endif // BATTERYINDICATOR_H