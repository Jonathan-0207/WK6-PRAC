#ifndef CART_H
#define CART_H

#include "meerkat.h"
#include <iostream>

class cart{
    private:
        meerkat meerkat_array[4];
        int meerkat_count = 0;

    public:
        cart();                         // create an empty cart object
        bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
        void emptyCart();               // remove all meerkats from the cart
        void printMeerkats();           // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added
};



#endif // CART_H
