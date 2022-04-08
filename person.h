#ifndef PERSON_H
#define PERSON_H


#include <iostream>
using namespace std;


class person{
    private:
        string name;
        int salary;
    public:
        person(string parameter_name, int parameter_salary);
        person();
        void setName(string myName);
        void setSalary(int mySalary);
        int getSalary();
        string getName();
};

#endif // PERSON_H

