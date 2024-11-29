/*
 * Proyecto Mario Kart
 * Inaki Mancera Llano
 * A01708827
 * 28/11/2024
 */

/*
 * La clase Carcasa recibe las estadisticas basicas de la clase
 * ParametrosBase y define una variable mas para saber el estilo
 * de la carcasa del kart.
*/


#ifndef CARCASA_H
#define CARCASA_H

#include <iostream>
#include "ParametrosBase.h"
using namespace std;

//Clase carcasa que define si el kart es una moto o un coche
class Carcasa: public ParametrosBase {
    private:
    //Estilo de carcasa
    bool Estilo;

    public:
    //Constructores
    Carcasa();
    Carcasa(bool a) : Estilo(a){}

    //Getter y setter
    string getEstilo();
    void setEstilo(bool);
};

Carcasa::Carcasa(){
    Estilo = 0;
}

//Se usa booleano para eviar errores de escritura
string Carcasa::getEstilo(){
    if (Estilo == 0){
        return "Coche";
    }else{
        return "Moto";
    }
}

void Carcasa::setEstilo(bool n){
    Estilo = n;
}

#endif
