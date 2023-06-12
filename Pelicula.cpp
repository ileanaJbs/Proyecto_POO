// Andrea Doce Murillo

#include "Pelicula.hpp"
#include <iostream>
#include <string>

using namespace std;

Pelicula::Pelicula(int an, string dir, /*reparto per*/ string id, string tip, string gen, double duracion, double rat) : Video(id, tit, tip, gen, duracion, rat)
{
    ano = an;
    director = dir;
    // personajes;
}

int Pelicula::getAno()
{
    return ano;
}


string Pelicula::getDirector()
{
    return director;
}

void Pelicula::Pelicula()
{
    cout << "Datos de la Pelicula" << endl;
    cout << "Anio: " << an << endl;
    cout << "Director: " << dir << endl;
    cout << endl;
}
