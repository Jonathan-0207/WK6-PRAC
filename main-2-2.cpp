#include <iostream>
#include "person.h"
#include "aircraft.h"

int main(){
    person thePilot("John", 100000);
    person theCoPilot("Henry", 85000);
    person newPilot ("Liam", 110000);
    aircraft deltaJet("Delta",thePilot, theCoPilot);
    deltaJet.setPilot(newPilot);
    deltaJet.getPilot();
    deltaJet.printDetails();

}
