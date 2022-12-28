#include <vector>
#include "pokemon.h"
#include "pokemonSportif.h"
#include "pokemonCasanier.h"
#include "pokemonMer.h"

int main(int argc, char * argv[]) {

    std::vector<const Pokemon *> mesPokemons;
    
    PokemonSportif Pikachu("Pikachu",1,2,4);
    std::cout << Pikachu;

    Pokemon * pHerbizarre = new PokemonSportif("Herbizarre",1,5,4.5);
    Pokemon * pRondoudou = new PokemonMer("Rondoudou",1,2);
    Pokemon * pBulbizarre = new PokemonSportif("Bulbizarre",1,75,9);
    Pokemon * pRattata = new PokemonCasanier("Rattata",1,2,4,5);

    // POLITIQUE UNIFORME D'ALLOCATION DYNAMIQUE DES INSTANCES
    // ===> POLITIQUE UNIFORME DE LIBERATION DES INSTANCES DYNAMIQUES
    // on ajoute que des instances dynamiques
    mesPokemons.push_back(pHerbizarre);
    mesPokemons.push_back(pRondoudou);
    mesPokemons.push_back(pBulbizarre);
    mesPokemons.push_back(pRattata);

    double sommeVitesse = 0; 

	// NE COMPILE PAS
	// for (Pokemon * p : mesPokemons) {
	/********************************************************************************************
	main.cpp:27:20: error: invalid conversion from ‘const Pokemon*’ to ‘Pokemon*’ [-fpermissive]
	********************************************************************************************/
	
	
	// OK en écrivant tout ...
	// for (const Pokemon * p : mesPokemons) {
	
	// auto pour la déduction Pokemon *
    // for (const auto p : mesPokemons) {
    
	// auto pour la déduction const Pokemon *
	for (auto p : mesPokemons) {
	    sommeVitesse += p->calculerVitesse();
    }

    std::cout << "Vitesse moyenne des pokemons " << sommeVitesse/mesPokemons.size() << std::endl;

    double sommeVitessePokemonsSportifs = 0; 
    int nombrePokemonsSportifs = 0; 
    
	// vitesse moyenne des Pokémons sportifs de la collection mesPokemons.
	// TRES IMPORTANT dynamic_cast<const PokemonSportif *>(p) permet de ne considérer que les pokemons sportifs
    for (auto p : mesPokemons) {
        if (dynamic_cast<const PokemonSportif *>(p)) {
	        sommeVitessePokemonsSportifs += p->calculerVitesse();
            nombrePokemonsSportifs++;
        }
    }

    std::cout << "Vitesse moyenne des Pokemons sportifs " << sommeVitessePokemonsSportifs/nombrePokemonsSportifs << std::endl;

	/* LIBERATION EXPLICITE DES INSTANCES
    delete pHerbizarre;
    delete pRondoudou;
    delete pBulbizarre;
    delete pRattata;
    */
    
    // BEAUCOUP MIEUX EN PARCOURANT LE CONTAINER
    // il n'y a que des instances dynamiques dans le container
     for (auto p : mesPokemons) {
		 delete p;
	 }

	return 0;
}

/************************************************
Pikachu 1kg 2 pattes 4 metres
Vitesse moyenne des pokemons 529.145
Vitesse moyenne des Pokemons sportifs 1046.25
************************************************/
