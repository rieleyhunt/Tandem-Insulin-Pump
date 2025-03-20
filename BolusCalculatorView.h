//Displays recommended bolus dose and allows adjustments.
#ifndef BOLUS_CALCULATOR_VIEW_H
#define BOLUS_CALCULATOR_VIEW_H

#include <QObject>
#include "BolusCalculator.h"

class BolusCalculatorView : public QObject {
    Q_OBJECT

public:
    explicit BolusCalculatorView(BolusCalculator& calculator, QObject* parent = nullptr);
    int

slots:
    void displayRecommendedDose(double dose);

signals:
    void signalCalculateBolus(double carbIntake, double currentBG);//emits to BolusCalculator
    void confirmedDose(double dose);  //emits to BolusScreen and pump when user confirms dose

private:
    BolusCalculator& calculator;
    double recommendedDose;
};

#endif // BOLUS_CALCULATOR_VIEW_H
