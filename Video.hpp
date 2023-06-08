#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
using namespace std;

class Video { //: public Catalogo  {
private:
  string id;
  string titulo;
  string tipo;
  double duracion;
  string genero;
  double ratitng;
  //string funcionActual;
/*
protected: 
   std::string funcionActual {"Ninguna"};
   Video();
*/
public:
  Video();
  Video(string, string, string, double, string, double //,string 
);
  void setId(string);
  string getId();
  void setTitulo(string);
  string getTitulo();
  void setTipo(string);
  string getTipo();
  void setDuracion(double);
  double getDuracion();
  void setGenero(string);
  string getGenero();
  void setRating(double);
  double getRating();

  virtual std::string toString();
  virtual std::string dimeFuncionActual();
  virtual void cambiaFuncionActual(std::string);
};
#endif 