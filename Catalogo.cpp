// Andrea Doce Murillo
#include "Catalogo.hpp"
#include <iostream>
#include <string>

using namespace std;
Catalogo::Catalogo() : PlataformaStreaming(), categoria{""} {}
Catalogo::Catalogo(string cat) : PlataformaStreaming(), categoria{cat} {}

string Catalogo::toString()
{
    return "Cataogo (" to_string(cat) + " )";
}