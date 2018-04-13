#include <iostream>
#include "employee.hpp"
#include "employer.hpp"

int main()
{
    Employee employee1(1);
    Employee employee2(2);
    Employer employer;
    employer.addEmployee(&employee1);
    employer.addEmployee(&employee2);
    employer.commandWork();
    return 0;
}
