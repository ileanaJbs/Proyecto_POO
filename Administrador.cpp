// Andrea Doce Murillo
#include "Administrador.hpp"
#include <iostream>
#include <string>

using namespace std;
Administrador::Administrador() : PlataformaStreaming(), idA{"4628"} nombreA{"46294"} {}                 /*perfilAdmin{perfil} {}*/
Administrador::Administrador(string iA, string nomA) : PlataformaStreaming(), idA{iA}, nombreA{nomA} {} /*,perfilAdmin{per}*/

string Administrador::toString()
{
    return "Administrador (" to_string(iA) + "," + to_string(nomA) + " )"; /* + "," + perfilAdmin */
}