#ifndef POKEMON_CASANIER_H
#define POKEMON_CASANIER_H

#include <iostream>
#include <string>
#include "pokemon.h"

class PokemonCasanier : public Pokemon {
    private : 
        int nombrePattes;
        double taille;
        int nombreHeuresTV;
        
    public : 
        PokemonCasanier(const std::string & n, double m, int np, double t, int nTV);
        
        virtual ~PokemonCasanier();
        
        double calculerVitesse() const override;
        
    friend std::ostream & operator<<(std::ostream & out, const PokemonCasanier & p);
};

#endif
