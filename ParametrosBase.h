/*
 * Proyecto Mario Kart
 * Inaki Mancera Llano
 * A01708827
 * 28/11/2024
 */

/*
 * La clase ParametrosBase contiene los datos basicos que todas las
 * partes del kart contienen, las cuales son la velocidad, la 
 * aceleracion y el peso, al igual que sus getters y setters.
*/


#include <iostream>
using namespace std;

#ifndef PARAMETROSBASE_H
#define PARAMETROSBASE_H


// Clase de Parametro base abstracta
class ParametrosBase {
private:
    //Variables privadas para las estadisticas
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

//Getters
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
