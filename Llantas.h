/*
 * Proyecto Mario Kart
 * Inaki Mancera Llano
 * A01708827
 * 28/11/2024
 */

/*
 * La clase Llantas recibe las estadisticas basicas de la clase
 * ParametrosBase y define una variable mas para saber el tipo
 * de llantas del kart.
*/ 


#ifndef LLANTAS_H
#define LLANTAS_H

#include <iostream>
#include "ParametrosBase.h"
using namespace std;

//Clase llantas que define si lleva llantas Todoterreno o pequeñas
class Llantas: public ParametrosBase {
    private:
    //Tipo de llantas
    bool Tipo;

    public:
    //Constructores
    Llantas();
    Llantas(bool a) : Tipo(a){}

    //Getter y setter del tipo
    string getTipo();
    void setTipo(bool);
};

Llantas::Llantas(){
    Tipo = 0;
}

//Se usa booleano para eviar errores de escritura
string Llantas::getTipo(){
    if (Tipo == 0){
        return "Todoterreno";
    }else{
        return "Pequeñas";
    }
}

void Llantas::setTipo(bool n){
    Tipo = n;
}

#endif
