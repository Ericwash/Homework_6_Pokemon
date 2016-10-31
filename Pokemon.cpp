//Eric Washington
//CPSC 121 8:00am-11:50am
//ericwashington@csu.fullerton.edu
//Homework 6 Pokemon

#include "pokemon.h"
#include <iostream>
using namespace std;


Pokemon::Pokemon(int dex, string n, int lvl, int h, int hMax, int attk, int df,
                 int spattk, int spdf, int spd)
{
    level = 1;
    hp = 20;
    hpMax = 10;
    attack = 10;
    defense = 10;
    specialAttack = 10;
    specialDefense = 10;
    speed = 10;
    index = dex;
}

Pokemon::~Pokemon(){cout <<"Running deconstructor..." << endl;}

Water::Water(int dex, string n, int lvl, int h, int hMax, int attk, int df,
             int spattk, int spdf, int spd): Pokemon(dex)
{
    hp += 2;
    attack -=2;
    defense += 2;
    specialAttack -=1;
    specialDefense +=4;
    speed -=1;
    
    
}

Grass::Grass(int dex, string n, int lvl, int h, int hMax, int attk, int df,
             int spattk, int spdf, int spd): Pokemon(dex)
{
    hp -= 3;
    attack -=2;
    defense += 0;
    specialAttack -=3;
    specialDefense +=0;
    
}

Fire::Fire(int dex, string n, int lvl, int h, int hMax, int attk, int df,
           int spattk, int spdf, int spd): Pokemon(dex)
{
    hp += 1;
    attack +=2;
    defense -= 2;
    specialAttack +=4;
    specialDefense -=2;
    speed +=2;
}

Pokemon *Pokemon::make_pokemon(element element, string name)
{
    Pokemon *Pokemon;
    Pokemon->name = name;
    switch(element){
        case element::fire:
            Pokemon = new Fire;
            return Pokemon;
        case element::water:
            Pokemon = new Water;
            return Pokemon;
        case element::grass:
            Pokemon = new Grass;
            return Pokemon;
    }
    
    
}

