#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include "person.h"
#include <iostream>

class aircraft{
    private:
        string priv_callsign;
        person pilot;
        person copilot;

    public:
        aircraft(string callsign,person thePilot,person theCoPilot);
        void setPilot(person thePilot);
        void setCoPilot(person theCoPilot);
        person getPilot();
        person getCoPilot();
        void printDetails();
};

#endif // AIRCRAFT_H




