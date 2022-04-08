#include <iostream>
#include "meerkat.h"
using namespace std;

int main(){
    meerkat m1;
    m1.setAge(20);
    cout << m1.getAge() << endl;

    m1.setName("Mc Monkey Moo");
    cout << m1.getName();

    return 0;
}
