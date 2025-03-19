//Computes bolus doses based on user input and CGM data.
#ifndef BOLUSCALCULATOR_H
#define BOLUSCALCULATOR_H

class BolusCalculator{

    public:
    double calculateBolus(double carbIntake, double currentBG);

signals:
    void bolusCalculated(double bolusDose);
};

#endif //BOLUSCALCULATOR_H