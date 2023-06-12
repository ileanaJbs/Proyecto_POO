/*
Andrea Doce Murillo
Jocelyn Ileana Balderas Sánchez
*/

#include "Pelicula.hpp"
#include <iostream>
#include <string>

using namespace std;

Pelicula::Pelicula(int id, string tit, string tip, int dur, string gen, double rat, int an, string dir): Video(id, tit, tip, dur, rat){
    ano = an;
    director = dir;
}

int Pelicula::getAno(){
    return ano;
}

string Pelicula::getDirector(){
    return director;
}

double Pelicula::getRating(){
	int rat;
	cout << "Ingrese una calificacion para el video:"; cin >> rat;
	rating = rat;
}

//virtuales
void Pelicula::calificarVideo(double nuevoRating){
    double anterior;
    anterior = rating;
    rating = (nuevoRating + anterior)/2 ;
}

void Pelicula::display(){
	cout << "INFORMACION PELICULA" << endl;
    cout << "Anio: " << ano << endl;
    cout << "Director" << director << endl;
}