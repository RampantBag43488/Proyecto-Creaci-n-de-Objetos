/*
 * Proyecto Mario Kart
 * Inaki Mancera Llano
 * A01708827
 * 28/11/2024
 */

/*
 * La clase Personaje recibe las estadisticas basicas de la clase
 * ParametrosBase y define una variable mas para saber el nombre
 * del personaje del kart.
*/ 


#ifndef PERSONAJES_H
#define PERSONAJES_H

#include <iostream>
#include "ParametrosBase.h"
using namespace std;

//Clase personaje que define el nombre del personaje
class Personaje: public ParametrosBase {
    private:
    //Nombre del personaje
    string Nombre;

    public:
    //Constructores
    Personaje();
    Personaje(string);

    //Getter y setter
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
