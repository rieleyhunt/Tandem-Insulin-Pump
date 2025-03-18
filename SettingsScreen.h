#ifndef SETTINGSSCREEN_H
#define SETTINGSSCREEN_H

#include <QWidget>

class SettingsScreen : public QWidget {
    Q_OBJECT
public:
    explicit SettingsScreen(QWidget *parent = nullptr);
    ~SettingsScreen();

private slots:
    void updateAlerts();
    void changePinLock();
    void calibrateDevice();
};

#endif // SETTINGSSCREEN_H