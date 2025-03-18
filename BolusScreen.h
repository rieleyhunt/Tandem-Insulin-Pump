#ifndef BOLUSSCREEN_H
#define BOLUSSCREEN_H

#include <QWidget>

class BolusScreen : public QWidget {
    Q_OBJECT
public:
    explicit BolusScreen(QWidget *parent = nullptr);
    ~BolusScreen();

private slots:
    void enterBolusAmount();
    void calculateBolus();
};

#endif // BOLUSSCREEN_H