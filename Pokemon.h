//Eric Washington
//CPSC 121 8:00am-11:50am
//ericwashington@csu.fullerton.edu
//Homework 6 Pokemon

#ifndef pokemon_h
#define pokemon_h

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

enum class element
{
    
    fire,
    water,
    grass
    
};

class Pokemon {
    //   friend Pokemon *make_pokemon(enum element, string name);
public:
    
    Pokemon(int =0, string ="", int=0, int=0, int=0, int=0 ,int=0, int=0, int=0, int=0);
    ~Pokemon();
    string get_name (){return name;}
    int get_level_(){return level;}
    int get_hpMax();
    int get_hp();
    static Pokemon *make_pokemon(enum element, string name);
    
    
protected:
    string name;
    int level;
    int hp, hpMax;
    int attack, defense,
    specialAttack, specialDefense, speed;
    int index;
};


class Fire :public Pokemon {
public:
    
    Fire(int =0, string ="", int =0, int =0,
         int=0, int=0, int=0, int=0, int=0, int=0);
};


class Water :public Pokemon {
    
public:
    Water(int =0, string ="", int =0, int =0,
          int=0, int=0, int=0, int=0, int=0, int=0);
};

class Grass :public Pokemon {
    
public:
    Grass(int =0, string ="", int =0,int =0,
          int=0, int=0, int=0, int=0, int=0, int=0);
    
};

#endif 
