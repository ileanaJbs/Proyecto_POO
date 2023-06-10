#ifndef PLATAFORMA_HPP
#define PLATAFORMA_HPP

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