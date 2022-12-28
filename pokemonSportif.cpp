#include "pokemonSportif.h"

PokemonSportif::PokemonSportif(const std::string & n, double m, int np, double t) 
	: Pokemon(n,m), nombrePattes {np}, taille {t} {

}

 PokemonSportif::~PokemonSportif() {

}
 
double PokemonSportif::calculerVitesse() const  {
	return 3 * nombrePattes * taille;
} 

std::ostream & operator<<(std::ostream & out, const PokemonSportif & p) {
    out << static_cast<const Pokemon &>(p) << " " 
    << p.nombrePattes << " pattes " << p.taille <<  " metres" << std::endl;
	
	return out;
}
