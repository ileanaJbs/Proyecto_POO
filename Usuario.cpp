// Andrea Doce Murillo
#include "Usuario.hpp"
#include <iostream>
#include <string>

using namespace std;
Usuario::Usuario() : PlataformaStreaming(), idU{"4839"}, nombreU{"30859"} {}
Usuario::Usuario(string iU, string nomU) : PlataformaStreaming(), idU{iU}, nombreU{nomU} {}
