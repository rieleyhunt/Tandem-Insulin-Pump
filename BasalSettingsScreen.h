#ifndef BASALSETTINGSSCREEN_H
#define BASALSETTINGSSCREEN_H

#include <QWidget>

class BasalSettingsScreen : public QWidget {
    Q_OBJECT
public:
    explicit BasalSettingsScreen(QWidget *parent = nullptr);
    ~BasalSettingsScreen();

private slots:
    void configureBasalRates();
};

#endif // BASALSETTINGSSCREEN_H