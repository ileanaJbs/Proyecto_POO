/*
Jocelyn Ileana Balderas Sánchez
*/

#include "Video.hpp"

Video::Video(): id{0}, titulo{""}, tipo{""}, duracion{0}, genero{""}, rating{0}{}

Video::Video(int id, string tit, string tip, int dur, string gen, double rat){
	id = 0;
	titulo = "";
    tipo = "";
	duracion = 0;
	genero = "";
	rating = 0;
}

void Video::calificarVideo(double nuevoRating){
    double anterior;
    anterior = rating;
    rating = (nuevoRating + anterior)/2 ;
}

bool Video::operator>=(double rat){
    bool resultado;
    resultado = rating >= rat;
    return resultado;
}

void Video::reproducir(){
	cout << "El video se esta reproduciendo con calidad estandar" << endl;
}

void Video::pausar(){
	cout << "El video se ha pausado" << endl;
}

void Video::adelantar(){
	cout << "El video se ha adelantado" << endl;
}

double Video::getRating(){
	int rat;
	cout << "Ingrese una calificacion para el video:"; cin >> rat;
	rating = rat;
}

string Video::display(){
	cout << "INFORMACION VIDEO" << endl;
	cout << "ID: " << id;
	cout << "Titulo: " << titulo << endl;
    cout << "Tipo: " << tipo << endl;
	cout << "Duracion " << duracion << " minutos" << endl;
	cout << "Genero: " << genero << endl;
}