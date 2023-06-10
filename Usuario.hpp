#ifndef USUARIO_HPP
#define USUARIO_HPP

#include "PlataformaStreaming.hpp"
#include <string>
using namespace std;

class Usuario /*: public PlataformaStreaming*/
{
private:
    string idU {""};
    string nombreU{""};

public:
    Usuario();
    Usuario(string, string);
    void setIdU(string);
    string getIdU();
    void setNombreU(string);
    string getNombreU();
    // string toString();
};
#endif