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

void Pelicula::Pelicula()
{
    cout << "Datos de la Pelicula" << endl;
    cout << "ID: " << _id << endl;
    cout << "Nombre: " << _nombre << endl;
    cout << "Duracion: " << _duracion << endl;
    cout << "Genero: " << _genero << endl;
    cout << "Calificacion: " << _calificacion << endl;
    cout << "Fecha: " << _fecha << endl;
    cout << endl;
}

bool Pelicula::operator==(string &p)
{
    if (_genero == p)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string Pelicula::getnombre()
{
    return _nombre;
}

string Pelicula::getcalificacion()
{
    return _calificacion;
}

//

vector<string> Episodio::obtenerGeneros()
{
    stringstream stream(getGenero());
    vector<string> generos;
    string primerGenero;
    while (stream.peek() != EOF)
    {
        getline(stream, primerGenero, ',');
        generos.push_back(primerGenero);
    }
    return generos;
}

string Episodio::getNomEpisodio()
{
    return nomEpisodio;
}

int Episodio::getTemporada()
{
    return temporada;
}

void Episodio::display(int i)
{
    cout << "\n- - - - Episodio " << i + 1 << " - - - -\n"
         << endl;
    cout << "Nombre del Episodio: " << tituloEpisodio << endl;
    cout << "Temporada:  " << temporada << endl;
    Video::display();
}

void Episodio::calificarVideo(double nuevoRating)
{
    Video::calificarVideo(nuevoRating);
    cout << "\nEl episodio: " << nomEpisodio << " de la serie " << Video::getTitle() << " cambio de calificacion a: " << Video::getRating() << "\n"
         << endl;
}
