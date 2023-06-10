#ifndef CATALOGO_HPP
#define CATALOGO_HPP

#include <iostream>
#include <string>
using namespace std;

class Catalogo
{ //: public PlataformaStreaming  {
private:
    string categoria;
    /*
    protected:
       std::string funcionActual {"Ninguna"};
       Catalogo();
    */
public:
    Catalogo();
    Catalogo(string);
    void setCategoria(string);
    string getCategoria();
};
#endif