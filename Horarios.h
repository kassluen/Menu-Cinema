#pragma once
#include <iostream>
#include <string>
using namespace std;

class Horarios {
private:
    int dia;
    int mes;
    int a�o;
    int horaIni;
    int horafinal;
public:
    Horarios(int dia = 0, int mes = 0, int a�o = 0, int horaIni = 0, int horafinal = 0);
    ~Horarios();

    void setfecha(int _dia, int _mes, int _a�o);
    string getfecha() const;

    void sethoraIni(int _horaIni);
    int gethoraIni() const;

    void sethorafinal(int _horafinal);
    int gethorafinal() const;
};

Horarios::Horarios(int _dia, int _mes, int _a�o, int _horaIni, int _horafinal)
    : dia(_dia), mes(_mes), a�o(_a�o), horaIni(_horaIni), horafinal(_horafinal) {}

Horarios::~Horarios() {}

void Horarios::setfecha(int _dia, int _mes, int _a�o) {
    dia = _dia;
    mes = _mes;
    a�o = _a�o;
}

string Horarios::getfecha() const {
    return to_string(dia) + "/" + to_string(mes) + "/" + to_string(a�o);
}

void Horarios::sethoraIni(int _horaIni) {
    horaIni = _horaIni;
}

int Horarios::gethoraIni() const {
    return horaIni;
}

void Horarios::sethorafinal(int _horafinal) {
    horafinal = _horafinal;
}

int Horarios::gethorafinal() const {
    return horafinal;
}
