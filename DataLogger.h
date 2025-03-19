#include <vector>
#include "InsulinDelivery.h"

#ifndef DATALOGGER_H
#define DATALOGGER_H

using namespace std;

class DataLogger{

    private:
        vector<InsulinDelivery> insulin_delivery_history;

    public:
        DataLogger();
        ~DataLogger();

};

#endif //DATALOGGER_H