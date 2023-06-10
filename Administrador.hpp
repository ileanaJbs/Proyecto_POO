/*
Jocelyn Ileana Balderas Sánchez
*/

#ifndef ADMINISTRADOR_HPP
#define ADMINISTRADOR_HPP

#include <iostream>
#include <string>

using namespace std;

class Administrador 
{
    private:
        string idA;
        string nombreA;
        //perfil perfilAdmin;

    public:
        Administrador();
        string getIdA();
        void setIdA(string);
        string getNombreA();
        void setNombreA(string);
};

#endif 