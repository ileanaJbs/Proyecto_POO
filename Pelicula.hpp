/*
Jocelyn Ileana Balderas Sánchez
*/

#ifndef PELICULA_HPP
#define PELICULA_HPP

#include <iostream>
#include <string>

using namespace std;

class Pelicula 
{
    private:
        int ano;
        string director;

    public:
        Pelicula();
        int getAno();
        void setAno(int);
        string getDirector();
        void setDirector(string);
};

#endif