#include "Employer.h"

int main() 
{
    Employer* employees[3];

    employees[0] = new President("John Smith");
    employees[1] = new Manager("Sales");
    employees[2] = new Worker("Software Engineer");

    for (int i = 0; i < 3; ++i) 
    {
        employees[i]->Print();
    }

    for (int i = 0; i < 3; ++i) 
    {
        delete employees[i];
    }

    return 0;
}