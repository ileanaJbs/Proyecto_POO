#include "PerfilUser.hpp"

#include <iostream>
#include <string>
using namespace std;

PerfilUser::PefilUser() : Usuario(), apodoU{"Chris"} cuentaU{3758} {}
PefilUser::PefilUser(string apodU, int cuenU) : Usuario(), apodoU{apodU}, cuentaU{cuenU} {}

string PefilUser::toString()
{
    return "PefilUser (" to_string(apodoU) + "," + cuentaU + " )";
}