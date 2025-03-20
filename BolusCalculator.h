//Computes bolus doses based on user input and CGM data.
#ifndef BOLUSCALCULATOR_H
#define BOLUSCALCULATOR_H

class BolusCalculator{

signals:
    void bolusCalculated(double bolusDose);//emits to BolusScreen to show user

slots:
    double slotCalculateBolus(double carbIntake, double currentBG);
};

#endif //BOLUSCALCULATOR_H