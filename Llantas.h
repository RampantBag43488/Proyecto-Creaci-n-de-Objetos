#ifndef LLANTAS_H
#define LLANTAS_H

#include <iostream>
#include "ParametrosBase.h"
using namespace std;


class Llantas: public ParametrosBase {
    private:
    bool Tipo;

    public:
    Llantas();
    Llantas(bool a) : Tipo(a){}
    string getTipo();
    void setTipo(bool);
};

Llantas::Llantas(){
    Tipo = 0;
}

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