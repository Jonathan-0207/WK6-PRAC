#include "meerkat.h"

void meerkat::setName(string meerName){name = meerName;}
int meerkat::setAge(int meerAge){age = meerAge; return 0;}
string meerkat::getName(){return name;}
int meerkat::getAge(){return age;}

