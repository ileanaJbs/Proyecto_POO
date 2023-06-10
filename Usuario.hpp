#ifndef USUARIO_HPP
#define USUARIO_HPP

#include "PlataformaStreaming.hpp"
#include <string>
using namespace std;

class Usuario /*: public PlataformaStreaming*/
{
private:
    // string id {""};
    string nombre{""};

public:
    Usuario();
    Usuario(string, string);
    // void setId(string);
    // string getId();
    void setNombre(string);
    string getNombre();
    // string toString();
};
#endif