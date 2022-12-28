#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

class Pokemon {
    protected :
        std::string nom;
        double masse;
        
    public :
        Pokemon(const std::string & n, double m);
        
        // TOUJOURS AVOIR UN DESTRUCTEUR VIRTUEL
        // EN RAISON DU POLYMORPHISME 
        // ET DE LA PRESENCE EVENTUELLE DE POINTEURS dans la classe mère et/ou les classes filles
        virtual ~Pokemon();
        
        virtual double calculerVitesse() const = 0;
        
    friend std::ostream & operator<<(std::ostream & out, const Pokemon & p);
};

#endif
