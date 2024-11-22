#include <iostream>
using namespace std;

#ifndef PARAMETROSBASE_H
#define PARAMETROSBASE_H


// Clase Personaje
class ParametrosBase {
private:
    float velocidad;
    float aceleracion;
    float peso;

public:
    // Constructor
    ParametrosBase();
    ParametrosBase(float v, float a, float p) : velocidad(v), aceleracion(a), peso(p) {}

    // Getters
    float getVelocidad();
    float getAceleracion();
    float getPeso();

    // Setters
    void setVelocidad(float);
    void setAceleracion(float);
    void setPeso(float);
};

ParametrosBase::ParametrosBase(){
    velocidad = 0.0;
    aceleracion = 0.0;
    peso = 0.0;
}

float ParametrosBase::getVelocidad(){
    return velocidad;
}

float ParametrosBase::getAceleracion(){
    return aceleracion;
}

float ParametrosBase::getPeso(){
    return peso;
}

// Setters
void ParametrosBase::setVelocidad(float v) {
    velocidad = v;
}

void ParametrosBase::setAceleracion(float a) {
    aceleracion = a;
}

void ParametrosBase::setPeso(float p) {
    peso = p;
}

#endif
