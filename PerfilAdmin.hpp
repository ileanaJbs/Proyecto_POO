/*
Jocelyn Ileana Balderas Sánchez
*/

#ifndef PERFILADMIN_HPP
#define PERFILADMIN_HPP

#include "Administrador.hpp"
#include <string>
using namespace std;

class PerfilAdmin : public Administrador
{
private:
    string apodoA{""};
    int cuentaA{4};

public:
    PerfilAdmin();
    PerfilAdmin(string, int);
    void setApodoA(string);
    string getApodoA();
    void setCuentaA(int);
    int getCuentaA();
    // string toString();
};
#endif