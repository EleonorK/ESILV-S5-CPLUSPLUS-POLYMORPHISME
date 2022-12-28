#include "pokemonMer.h"

PokemonMer::PokemonMer(const std::string & n, double m, int nn) 
	: Pokemon(n,m), nombreNageoires {nn} {

} 

PokemonMer::~PokemonMer() {

}

double PokemonMer::calculerVitesse() const {
	return masse * nombreNageoires / 25; 
} 
        
std::ostream & operator<<(std::ostream & out, const PokemonMer & p) {
    out << static_cast<const Pokemon &>(p) << " " 
    << p.nombreNageoires << " nageoires" << std::endl;
    
    return out;
}
