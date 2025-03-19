// Security screen requriing PIN entry to access the pump
#ifndef PINLOCKSCREEN_H
#define PINLOCKSCREEN_H

#include <QWidget>

class PINLockScreen : public QWidget {
    Q_OBJECT
public:
    explicit PINLockScreen(QWidget *parent = nullptr);
    ~PINLockScreen();

private slots:
    void onPinEntered(const QString &pin);

signals:
    void accessGranted();
    void accessDenied();
};

#endif // PINLOCKSCREEN_H