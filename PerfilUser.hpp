/*
Jocelyn Ileana Balderas Sánchez
*/

#ifndef PERFIL_HPP
#define PERFIL_HPP

#include "Usuario.hpp"
#include <string>
using namespace std;

class PerfilUser : public Usuario
{
private:
    string apodoU;
    int cuentaU;

public:
    PerfilUser();
    PerfilUser(string, int);
    void setApodoU(string);
    string getApodoU();
    void cuentaU(int);
    int cuentaU();
};
#endif