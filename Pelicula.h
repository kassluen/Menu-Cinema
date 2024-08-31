#pragma once
#include <iostream>
using namespace std;
class Pelicula {
private: 
	string nombre = " ";
	int a�o = 0;
	float duracion = 0.0;
	string pais = " ";
	int reviews = 0;
public:
	Pelicula(string, int, float, string, int);
	~Pelicula();
	Pelicula();
	
	void setnombre(string _nombre);
	string getnombre();

	void seta�o(int _a�o);
	int geta�o();
	void setduracion(float);
	float getduracion();

	void setpais(string);
	string getpais();

	void setreviews(int);
	int getreviews();
};



Pelicula::Pelicula(string _nombre, int _a�o, float _duracion, string _pais, int _reviews) {
	nombre = _nombre;
	a�o = _a�o;
	duracion = _duracion;
	pais = _pais; 
	reviews = _reviews;
}
Pelicula::~Pelicula() {}
Pelicula::Pelicula() {}

void Pelicula::setnombre(string _nombre) {
	nombre = _nombre;
}
string  Pelicula::getnombre() {
	return nombre;
}
void Pelicula::seta�o(int _a�o) {
	a�o = _a�o;
}
int Pelicula::geta�o() {
	return a�o;
}

void Pelicula::setduracion(float _duracion) {
	duracion = _duracion;
}
float Pelicula::getduracion(){
	return duracion;
}
void Pelicula::setpais(string _pais) {
	pais = _pais;
}
string Pelicula::getpais() {
	return pais;
}
void Pelicula::setreviews(int _reviews) {
	reviews = _reviews;
}
int Pelicula::getreviews() {
	return reviews;
}