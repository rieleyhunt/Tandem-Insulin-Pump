//Displays recommended bolus dose and allows adjustments.
#ifndef BATTERYINDICATOR_H
#define BATTERYINDICATOR_H

#include "BolusCalculator.h"

class BolusCalculatorView {
    public:
        BolusCalculatorView(BolusCalculator& calculator);
        
        void displayRecommendedDose(double bloodGlucose, double carbs);
        double getUserAdjustedDose() const;
        
    private:
        BolusCalculator& calculator;
        double recommendedDose;
        double adjustedDose;

    slot:
        void slotBolusCalaculated(double bolusDose);
    };

#endif // BATTERYINDICATOR_H