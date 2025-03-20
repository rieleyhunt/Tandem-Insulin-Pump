// Provides access to device settings, including PIN lock, alerts, and calibration
#ifndef SETTINGS_SCREEN_H
#define SETTINGS_SCREEN_H

#include <QWidget>
#include <QPushButton>
#include <QComboBox>
#include <QCheckBox>
#include <QSlider>
#include <QVBoxLayout>
#include <QLabel>

class SettingsScreen : public QWidget {
    Q_OBJECT

public:
    explicit SettingsScreen(QWidget *parent = nullptr);
    ~SettingsScreen();

signals:
    void pinLockChanged(bool enabled);
    void alertToneChanged(const QString& newTone);
    void calibrationCompleted();
    void brightnessChanged(int level);

private slots:
    void onPinLockToggled(bool checked);
    void onAlertToneSelected(QString& tone);
    void onBrightnessAdjusted(int level);
    void onCalibrateButtonClicked();

private:
    QCheckBox* pinLockCheckBox;
    QComboBox* alertToneComboBox;
    QPushButton* calibrateButton;
    QSlider* brightnessSlider;
    QLabel* brightnessLabel;
};

#endif // SETTINGS_SCREEN_H