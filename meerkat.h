#ifndef MEERKAT_H
#define MEERKAT_H


#include <iostream>
using namespace std;

class meerkat{
    private:
        string name;
        int age;

    public:
        void setName(string meerName);
        int setAge(int meerAge);
        string getName();
        int getAge();
};

#endif // MEERKAT_H

