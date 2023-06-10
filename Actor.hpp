/*
Jocelyn Ileana Balderas Sánchez
*/

#ifndef ACTOR_HPP
#define ACTOR_HPP

#include <iostream>
#include <string>

using namespace std;

class Actor
{
    private:
        string nombreReal;
        string nombrePersonaje;

    public:
        Actor();
        string getNombreReal();
        void setNombreReal(string);
        string getNombrePersonaje();
        void setNombrePersonaje(string);
};

#endif