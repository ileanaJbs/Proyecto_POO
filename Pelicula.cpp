// Andrea Doce Murillo

#include "Pelicula.hpp"
#include <iostream>
#include <string>

using namespace std;

Pelicula::Pelicula(int an, string studio, string nacion, string dir, /*reparto per*/ string id, string tip, string gen, double duracion, double rat) : Video(id, tit, tip, gen, duracion, rat)
{
    ano = an;
    estudio = studio;
    nacionalidad = nacion;
    director = dir;
    // personajes;
}

int Pelicula::getAno()
{
    return ano;
}

string Pelicula::getEstudio()
{
    return estudio;
}

string Pelicula::getNacionalidad()
{
    return nacionalidad;
}

string Pelicula::getDirector()
{
    return director;
}

void Pelicula::Pelicula()
{
    cout << "Datos de la Pelicula" << endl;
    cout << "Ano: " << an << endl;
    cout << "Estudio: " << studio << endl;
    cout << "Nacionalidad: " << nacion << endl;
    cout << "Director: " << dir << endl;
    cout << endl;
}
