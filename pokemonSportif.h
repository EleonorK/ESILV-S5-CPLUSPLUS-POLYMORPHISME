#ifndef POKEMON_SPORTIF_H
#define POKEMON_SPORTIF_H

#include <iostream>
#include <string>
#include "pokemon.h"

class PokemonSportif : public Pokemon {
    private : 
        int nombrePattes;
        double taille;

    public : 
        PokemonSportif(const std::string & n, double m, int np, double t);
        
        virtual ~PokemonSportif();
        
        double calculerVitesse() const override; 

    friend std::ostream & operator<<(std::ostream & out, const PokemonSportif & p);
};

#endif
