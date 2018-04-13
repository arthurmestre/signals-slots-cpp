#include "employee.hpp"

Employee::Employee(int id) : id(id)
{

}

void Employee::doWork()
{
    this->finishedWorkSignal(this->id);
}

Signal<void, int> *Employee::getFinishedWorkSignal()
{
    return &this->finishedWorkSignal;
}

int Employee::getId()
{
    return this->id;
}
