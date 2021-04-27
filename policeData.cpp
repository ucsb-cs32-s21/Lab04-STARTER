#include <sstream>
#include "policeData.h"

/* print police data - fill in*/
std::ostream& operator<<(std::ostream &out, const policeData &PD) {
    out << "Police Shotting Info: " << PD.state;
    out << "\nPerson name: " ;
    out << "\nAge: " ;
    out << "\nGender: " ;
    out << "\nRace:" ;
    out << "\nMental Illness:" ;
    out << "\nFleeing:" ;
    return out;
}
