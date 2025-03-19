//Data type that stores insulin delivery hisotry. Used in DataLogger.h

#include <ctime>

#ifndef INSULINDELIVERY_H
#define INSULINDELIVERY_H

class InsulinDelivery{

    private:
        time_t timestamp;
        float bolus;

    public:
        InsulinDelivery(time_t time, float bolus);
        ~InsulinDelivery();
        float get_bolus();
        time_t get_timestamp();
        void print_timestamp();
};

#endif //INSULINDELIVERY_H