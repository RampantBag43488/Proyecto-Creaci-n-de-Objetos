#ifndef CARCASA_H
#define CARCASA_H

#include <iostream>
#include "ParametrosBase.h"
using namespace std;


class Carcasa: public ParametrosBase {
    private:
    bool Estilo;

    public:
    Carcasa();
    Carcasa(bool a) : Estilo(a){}
    string getEstilo();
    void setEstilo(bool);
};

Carcasa::Carcasa(){
    Estilo = 0;
}

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
