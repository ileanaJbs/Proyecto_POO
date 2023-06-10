// Andrea Doce Murillo
#include "Actor.hpp"
#include <iostream>
using namespace std;

Actor::Actor() : Reparto(), nombreReal{""}, nombrePersonaje{""} {}
Actor::Actor(string nomR, string nomP) : Reparto(), nombreReal{nomR}, NombrePersonaje{nomP} {}

string Actor::toString()
{
    return "Actor(" + to_string(nombreReal) + "," +
           to_string(nombrePersonaje) + ")";
}