/*
Jocelyn Ileana Balderas Sánchez
*/

#ifndef EPISODIO_HPP
#define EPISODIO_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Episodio: public Video
{
    private:
        int temporada;
        string nomEpisodio;

    public:
        Episodio();
        //Episodio(string nomEp, int temp, string id, string tip, string gen, double duracion, double rat)
        vector<string> obtenerGeneros();
        int getTemporada();
        void setTemporada(int);
        string getNomEpisodio();
        void setNomEpisodio(string);
        void display(int i);
        void calificarVideo(double nuevoRating);
};

#endif