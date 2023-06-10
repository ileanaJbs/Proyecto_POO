/*
Jocelyn Ileana Balderas Sánchez 
*/

#ifndef SERIE_HPP
#define SERIE_HPP

#include <iostream>
#include <string>

using namespace std;

class Serie 
{
    private:
        string title;
        int numTemporadas;
        //episodio capitulo;
    
    public:
        Serie();
        string getTitle();
        void setTitle(string);
        int getNumTemporadas();
        void setNumTemporadas(int);

};

#endif