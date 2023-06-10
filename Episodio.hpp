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
        int getTemporada();
        void setTemporada(int);
        string getNomEpisodio();
        void setNomEpisodio(string);
};

#endif