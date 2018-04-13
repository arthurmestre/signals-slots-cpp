#include "employer.hpp"
#include <iostream>

Employer::Employer()
{

}

void Employer::commandWork()
{
    for(auto emp : employees)
    {
        std::cout<<"Employee: "<<emp->getId()<<" go to work!"<<std::endl;
        emp->doWork();
    }
}

void Employer::addEmployee(Employee *employee)
{
    employees.push_back(employee);
    std::function<void(int)> f = std::bind(&Employer::mySlot, this, std::placeholders::_1);
    employee->getFinishedWorkSignal()->connect(f);
}

void Employer::mySlot(int id)
{
    std::cout<<"Employee: "<<id<<" has finished his task"<<std::endl;
}
