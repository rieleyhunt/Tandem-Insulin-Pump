//Provides interface for manual bolus entry and calculation.
#ifndef BOLUSSCREEN_H
#define BOLUSSCREEN_H


#include <QObject>
#include "BolusCalculatorView.h"

class BolusScreen : public QObject {
    Q_OBJECT

public:
    explicit BolusScreen(BolusCalculatorView& view, QObject* parent = nullptr);

signals:
    void bolusConfirmed(double dose); //Final confirmation signal

private slots:
    void enterBolusAmount();
    void calculateBolus();
    void confirmAndDeliverBolus();

private:
    BolusCalculatorView& view;
};

#endif // BOLUS_SCREEN_H