#ifndef PERSONAJES_H
#define PERSONAJES_H

#include <iostream>
#include "ParametrosBase.h"
using namespace std;


class Personaje: public ParametrosBase {
    private:
    string Nombre;

    public:
    Personaje();
    Personaje(string);
    string getNombre();
    void setNombre(string);
};

Personaje::Personaje(){
    Nombre = "";
}

Personaje::Personaje(string nom){
    Nombre = nom;
}

string Personaje::getNombre(){
    return Nombre;
}

void Personaje::setNombre(string n){
    Nombre = n;
}

#endif
