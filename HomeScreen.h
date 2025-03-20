// Central hub showing battery level, insulin reservoir, IOB,
// (Insulin on Board), and key navigation buttons
#ifndef HOME_SCREEN_H
#define HOME_SCREEN_H

#include <QWidget>

class HomeScreen : public QWidget {
    Q_OBJECT

public:
    explicit HomeScreen(QWidget* parent = nullptr);
    ~HomeScreen();

signals:
    void navigateToSettings();
    void navigateToBolus();
    void navigateToHistory();

public slots:
    void updateBatteryLevel(int level);
    void updateInsulinReservoir(int units);
    void updateIOB(double insulinOnBoard);

    private:
    QLabel* batteryLabel;
    QProgressBar* batteryProgress;
    
    QLabel* insulinLabel;
    QProgressBar* insulinProgress;

    QLabel* iobLabel;

    QPushButton* settingsButton;
    QPushButton* bolusButton;
    QPushButton* historyButton;

};

#endif // HOME_SCREEN_H