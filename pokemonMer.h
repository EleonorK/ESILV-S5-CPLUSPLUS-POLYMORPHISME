#ifndef POKEMON_MER_H
#define POKEMON_MER_H

#include <iostream>
#include <string>
#include "pokemon.h"

class PokemonMer : public Pokemon {
    private : 
        int nombreNageoires;

    public : 
        PokemonMer(const std::string & n, double m, int nn);
        
        virtual ~PokemonMer();
        
        double calculerVitesse() const override;
        
    friend std::ostream & operator<<(std::ostream & out, const PokemonMer & p);
};
#endif
