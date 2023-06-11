// Andrea Doce Murillo
#include "PerfilAdmin.hpp"
#include <iostream>
#include <string>
using namespace std;

PerfilAdmin::PerfilAdmin() : Administrador(), apodoA{"Nat"} cuentaA{46294} {}
PerfilAdmin::PerfilAdmin(string apodA, int cuenA) : Administrador(), apodoA{apodA}, cuentaA{cuenA} {}

/*
string PerfilAdmin::toString()
{
    return "PerfilAdmin (" to_string(apodoA) + "," + cuentaA + " )";
}
*/