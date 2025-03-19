// Manages and stores application settings like PIN security,
// display brightness, and alert tones
#ifndef USER_SETTINGS_MANAGER_H
#define USER_SETTINGS_MANAGER_H

#include <QObject>
#include <string>

using namespace std;

class UserSettingsManager : public QObject {
    Q_OBJECT

public:
    explicit UserSettingsManager(QObject* parent = nullptr);
    ~UserSettingsManager();

    // PIN Security Methods
    void setPin(string& newPin);
    bool verifyPin(string& enteredPin) const;

    // Display Settings Methods
    void setBrightness(int level);
    int getBrightness() const;

    // Alert Tone Methods
    void setAlertTone(string& tone);
    string getAlertTone() const;

    // General Settings Methods
    void setSetting();
    string getSetting() const;

signals:
    void pinChanged();
    void brightnessChanged(int newBrightness);
    void alertToneChanged(string& newTone);
    void settingUpdated(string& key, string& value);

private:
    string pin;
    int brightness;
    string alertTone;

};

#endif // USER_SETTINGS_MANAGER_H