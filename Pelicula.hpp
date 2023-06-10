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
        string estudio;
        string nacionalidad;
        string director;
        //personajes reparto;

    public:
        Pelicula();
        int getAno();
        void setAno(int);
        string getEstudio();
        void setEstudio(string);
        string getNacionalidad();
        void setNacionalidad(string);
        string getDirector();
        void setDirector(string);
};

#endif