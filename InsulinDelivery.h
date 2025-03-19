#include <ctime> 

#ifndef INSULINDELIVERY_H
#define INSULINDELIVERY_H

using namespace std;

class InsulinDelivery{

    private:
        time_t timestamp;
        float bolus;

    public:
        InsulinDelivery(time_t time, float bolus);
        ~InsulinDelivery();

};

#endif //INSULINDELIVERY_H