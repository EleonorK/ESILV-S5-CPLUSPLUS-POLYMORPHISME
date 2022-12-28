#include "pokemonCasanier.h"

PokemonCasanier::PokemonCasanier(const std::string & n, double m, int np, double t, int nTV) 
	: Pokemon(n,m), nombrePattes {np}, taille {t}, nombreHeuresTV {nTV} {

}

PokemonCasanier::~PokemonCasanier() {
	
}

double PokemonCasanier::calculerVitesse() const {
	return 3 * nombrePattes * taille;
} 

std::ostream & operator<<(std::ostream & out, const PokemonCasanier & p) {
    out << static_cast<const Pokemon &>(p) << " " 
    << p.nombrePattes << " pattes " << p.taille <<  " metres " 
    << p.nombreHeuresTV << " heures TV" << std::endl;
    
    return out;
}
