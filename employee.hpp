#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "signal.hpp"

class Employee
{
public:
    Employee(int id);
    void doWork();
    Signal<void, int> * getFinishedWorkSignal();
    int getId();
private:
    Signal <void, int>finishedWorkSignal;
    int id;
};

#endif //EMPLOYEE_H
