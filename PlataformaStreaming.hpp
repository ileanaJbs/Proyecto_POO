/*
Jocelyn Ileana Balderas Sánchez
*/

#ifndef PLATAFORMASTREAMING_HPP
#define PLATAFORMASTREAMING_HPP

#include <iostream>
#include <string>

using namespace std;

class PlataformaStreaming
{
private:
    string Compania{""};

public:
    string getCompania();
    void setCompania(string);
};
#endif