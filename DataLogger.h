// Stores history of insulin delivery time and boluses, CGM history, errors
#include <vector>
#include <utility>
#include "InsulinDelivery.h"
#include "ErrorHandler.h"

#ifndef DATALOGGER_H
#define DATALOGGER_H

using namespace std;

class DataLogger{

    private:
        vector<InsulinDelivery> insulin_delivery_history;
        vector<pair<time_t, float>> CGM_history;
        vector<pair<time_t, Error_Type>> error_history;

    public:
        DataLogger();
        ~DataLogger();
        
        void record_insulin_delivery(float bolus);
        void print_insulin_delivery_history();
        InsulinDelivery remove_insulin_delivery(time_t date);

        void record_CGM_history(float measurment);
        float remove_CGM_history(time_t date);
        void print_CGM_history();
        
        void record_error_history(Error_Type error);
        Error_Type remove_error_history(time_t date);
};

#endif //DATALOGGER_H