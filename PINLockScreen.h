// Security screen requriing PIN entry to access the pump
#ifndef PIN_LOCK_SCREEN_H
#define PIN_LOCK_SCREEN_H

#include <QObject>
#include <string>

using namespace std;

class PINLockScreen : public QWidget {
    Q_OBJECT

public:
    explicit PINLockScreen(QWidget *parent = nullptr);
    ~PINLockScreen();

    // Verify PIN
    bool verifyPin(string& enteredPin) const;

    // Lock and Unlock Functions
    void lock();
    bool unlock(string& enteredPin);

    // Status Check
    bool isLocked() const;

signals:
    void lockedStatusChanged(bool locked);
    void pinVerified(bool success);

private:
    string pin;
    bool locked;
};

#endif // PIN_LOCK_SCREEN_H