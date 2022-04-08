#include "aircraft.h"

aircraft::aircraft(string callsign,person thePilot,person theCoPilot){
    priv_callsign = callsign;
    pilot = thePilot;
    copilot = theCoPilot;
}
void aircraft::setPilot(person thePilot){pilot = thePilot;}

void aircraft::setCoPilot(person theCoPilot){copilot = theCoPilot;}

person aircraft::getPilot(){return pilot;}

person aircraft::getCoPilot(){return copilot;}

void aircraft::printDetails(){
    cout << priv_callsign << endl;
    cout << pilot.getName() << endl;
    cout << copilot.getName() << endl;
}
