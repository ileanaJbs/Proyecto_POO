/*
Jocelyn Ileana Balderas Sánchez
*/

#ifndef EPISODIO_HPP
#define EPISODIO_HPP

#include <iostream>
#include <string>

using namespace std;

class Episodio 
{
    private:
        int temporada;
        string nomEpisodio;

    public:
        Episodio();
        //Episodio(string nomEp, int temp, string id, string tip, string gen, double duracion, double rat)
        int getTemporada();
        void setTemporada(int);
        string getNomEpisodio();
        void setNomEpisodio(string);
        void display(int i);
        void calificarVideo(double nuevoRating);
};

#endif