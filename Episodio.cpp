/*
Jocelyn Ileana Balderas Sánchez
*/

#include "Episodio.hpp"

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

Episodio::Episodio(int id, string tit, string tip, int dur, string gen, double rat, string nomEp, int temp) : Video{id, tit, tip, dur, gen, rat}, nomEpisodio{nomEp}, temporada{temp} {}
{
}

vector<string> Episodio::obtenerGeneros()
{
    stringstream stream(getGenero());
    vector<string> genero;
    string primerGenero;
    while (stream.peek() != EOF)
    {
        getline(stream, primerGenero, ',');
        genero.push_back(primerGenero);
    }
    return genero;
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