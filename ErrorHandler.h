//Error handler class that handles malfunctions, generates alerts, and logs errors.
#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

//Enum data type to differentiate different error types
enum Error_Type{
    PUMP_FAILURE,
    POWER_FAILURE,
    INCORRRECT_PIN
};

class ErrorHandler{

    private:

    public:
        ErrorHandler();
        ~ErrorHandler();

        void handle_pump_failure();
        void handle_power_failure();
        void handle_incorrect_pin();

};

#endif //ERRORHANDLER_H