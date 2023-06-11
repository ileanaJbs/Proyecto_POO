#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
using namespace std;

class Video { //: public Catalogo  {
private:
  int id;
  string titulo;
  string tipo;
  double duracion;
  string genero;
  double rating;
  //string funcionActual;
/*
protected: 
   std::string funcionActual {"Ninguna"};
   Video();
*/
public:
  Video();
  Video(int, string, string, double, string, double //,string 
);
  void setId(int);
  int getId();
  void setTitulo(string);
  string getTitulo();
  void setTipo(string);
  string getTipo();
  void setDuracion(double);
  double getDuracion();
  void setGenero(string);
  string getGenero();
  //void setRating(double);
  double getRating();
  void pausar();
  void reproducir();
  void adelantar();

  //virtuales
  virtual void display();
  virtual void calificarVideo(double nuevoRating);
  //virtual std::string toString();
  //virtual std::string dimeFuncionActual();
  //virtual void cambiaFuncionActual(std::string);
};
#endif 