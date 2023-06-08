#ifndef PERFIL_HPP
#define PERFIL_HPP

#include "Usuario.hpp"
#include <string>
using namespace std;

class Perfil : public Usuario
{
private:
    string apodo{""};
    int cuenta{4};

public:
    Perfil();
    Perfil(string, int);
    void setApodo(string);
    string getApodo();
    void setCuenta(int);
    int getCuenta();
    // string toString();
};
#endif