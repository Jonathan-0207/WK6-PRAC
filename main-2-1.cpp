#include "cart.h"
#include "meerkat.h"

#include <iostream>

int main(){
    string names[5] = {"Hudson", "John", "Sam", "Henry", "Liam"};

    meerkat hudson;
    meerkat john;
    meerkat sam;
    meerkat henry;
    meerkat liam;

    cart cart_first;

    meerkat meer_enclosure[5] = {hudson, john, sam, henry, liam};

    for(int i=0; i<5; i++){
        cart_first.addMeerkat(meer_enclosure[i]);
    }
    for(int l=0; l<5; l++){
        meer_enclosure[l].setName(names[l]);
    }

    cart_first.printMeerkats();
}
