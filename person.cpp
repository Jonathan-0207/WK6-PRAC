#include "person.h"

person::person(string parameter_name, int parameter_salary){
    name = parameter_name;
    salary = parameter_salary;
}

person::person(){
    name = "";
    salary = 0;
}

void person::setName(string myName){name = myName;}
void person::setSalary(int mySalary){salary = mySalary;}
int person::getSalary(){return salary;}
string person::getName(){return name;}
