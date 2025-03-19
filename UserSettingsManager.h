// Manages and stores application settings like PIN security,
// display brightness, and alert tones
#ifndef USER_SETTINGS_MANAGER_H
#define USER_SETTINGS_MANAGER_H

#include <QWidget>

class UserSettingsManager{

    public:
        UserSettingsManager();
        ~UserSettingsManager();

        // PIN Security Methods
        void setPin();
        bool verifyPin(const std::string& enteredPin) const;

        // Display Settings Methods
        void setBrightness(int level);
        int getBrightness() const;

        // Alert Tone Methods
        void setAlertTone(int alertTone);

        // Getters
        bool getPinSecurity();
        int getDisplayBrightness();
        int getAlertTone();

    private:

};

#endif // USER_SETTINGS_MANAGER_H