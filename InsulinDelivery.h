#include <ctime> 

#ifndef INSULINDELIVERY_H
#define INSULINDELIVERY_H

class InsulinDelivery{

    private:
        t_time timestamp;
        float bolus;

    public:
        InsulinDelivery(t_time time, float bolus);
        ~InsulinDelivery();

};

#endif //INSULINDELIVERY_H