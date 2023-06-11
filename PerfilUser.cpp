// Andrea Doce Murillo
#include "PerfilUser.hpp"
#include <iostream>
#include <string>
using namespace std;

PerfilUser::PerfilUser() : Usuario(), apodoU{"Chris"} cuentaU{3758} {}
PerfilUser::PerfilUser(string apodU, int cuenU) : Usuario(), apodoU{apodU}, cuentaU{cuenU} {}

/*
string PerfilUser::toString()
{
    return "PerfilUser (" to_string(apodoU) + "," + cuentaU + " ) ";
}
*/