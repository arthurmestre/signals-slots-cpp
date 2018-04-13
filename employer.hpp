#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <list>
#include "employee.hpp"

class Employer
{
public:
    Employer();
    void commandWork();
    void mySlot(int id);
    void addEmployee(Employee *employee);
private:
    std::list<Employee*> employees;
};

#endif
