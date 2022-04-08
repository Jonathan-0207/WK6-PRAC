#include "cart.h"


cart::cart(){
    meerkat_count = 0;
}

bool cart::addMeerkat(meerkat cat){
    if(meerkat_count >= 4){
        return 0;
    }
    else{
        meerkat_array[meerkat_count] = cat;
        meerkat_count++;
        return 1;
    }
}

void cart::emptyCart(){
    meerkat_count = 0;
}

void cart::printMeerkats(){
    for(int j=0; j<meerkat_count; j++){
        std::cout << meerkat_array[meerkat_count].getName();
    }


}         // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added
