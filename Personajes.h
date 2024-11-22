#ifndef PERSONAJES_Hq
#define PERSONAJES_H

#include <iostream>
#include "ParametrosBase.h"
using namespace std;


class Personaje: public ParametrosBase {
    private:
    string Nombre;

    public:
    Personaje();
    Personaje(string a) : Nombre(a){}
    string getNombre();
    void setNombre(string);
};

Personaje::Personaje(){
    Nombre = "";
}

string Personaje::getNombre(){
    return Nombre;
}

void Personaje::setNombre(string n){
    Nombre = n;
}

#endif