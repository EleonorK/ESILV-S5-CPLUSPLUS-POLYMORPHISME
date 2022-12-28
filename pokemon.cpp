#include "pokemon.h"

Pokemon::Pokemon(const std::string & n, double m) 
	: nom {n}, masse {m} { }

Pokemon::~Pokemon() {
	
}
        
std::ostream & operator<<(std::ostream & out, const Pokemon & p) {
    out << p.nom << " " << p.masse << "kg";
	return out;
}
