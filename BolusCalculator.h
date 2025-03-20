//Computes bolus doses based on user input and CGM data.
#ifndef BOLUSCALCULATOR_H
#define BOLUSCALCULATOR_H

class BolusCalculator{

signals:
    void bolusCalculated(double bolusDose);//signal to send bolus dose to pump and display

slots:
    double calculateBolus(double carbIntake, double currentBG);
};

#endif //BOLUSCALCULATOR_H