// Andrea Doce Murillo
#include "PefilAdmin.hpp"
#include <iostream>
#include <string>
using namespace std;

PefilAdmin::PefilAdmin() : Administrador(), apodoA{"Nat"} cuentaA{46294} {}
PefilAdmin::PefilAdmin(string apodA, int cuenA) : Administrador(), apodoA{apodA}, cuentaA{cuenA} {}

string PefilAdmin::toString()
{
    return "PefilAdmin (" to_string(apodoA) + "," + cuentaA + " ) ";
}