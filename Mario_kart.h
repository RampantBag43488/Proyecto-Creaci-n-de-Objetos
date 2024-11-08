#include <iostream>
using namespace std;

// Clase Personaje
class Personaje {
private:
    float velocidad_p;
    float aceleracion_p;
    float peso_p;

public:
    // Constructor
    Personaje(float v, float a, float p) : velocidad_p(v), aceleracion_p(a), peso_p(p) {}

    // Getters
    float getVelocidad_p();
    float getAceleracion_p();
    float getPeso_p();

    // Setters
    void setVelocidad_p(float);
    void setAceleracion_p(float);
    void setPeso_p(float);
};

float Personaje::getVelocidad_p(){
    return velocidad_p;
}

float Personaje::getAceleracion_p(){
    return aceleracion_p;
}

float Personaje::getPeso_p(){
    return peso_p;
}


void Personaje::setVelocidad_p(float v) {
    velocidad_p = v;
}

void Personaje::setAceleracion_p(float a) {
    aceleracion_p = a;
}

void Personaje::setPeso_p(float p) {
    peso_p = p;
}


// Clase Coche
class Coche {
private:
    float velocidad_co;
    float aceleracion_co;
    float peso_co;

public:
    // Constructor
    Coche(float v, float a, float p) : velocidad_co(v), aceleracion_co(a), peso_co(p) {}

    // Getters
    float getVelocidad_co();
    float getAceleracion_co();
    float getPeso_co();

    // Setters
    void setVelocidad_co(float);
    void setAceleracion_co(float);
    void setPeso_co(float);
};


float Coche::getVelocidad_co(){
    return velocidad_co;
}

float Coche::getAceleracion_co(){
    return aceleracion_co;
}

float Coche::getPeso_co(){
    return peso_co;
}


void Coche::setVelocidad_co(float v) {
    velocidad_co = v;
}

void Coche::setAceleracion_co(float a) {
    aceleracion_co = a;
}

void Coche::setPeso_co(float p) {
    peso_co = p;
}

// Clase Llantas
class Llantas {
private:
    float velocidadll;
    float aceleracionll;
    float pesoll;

public:
    // Constructor
    Llantas(float v, float a, float p) : velocidadll(v), aceleracionll(a), pesoll(p) {}

    // Getters
    float getVelocidadll();
    float getAceleracionll();
    float getPesoll();

    // Setters
    void setVelocidadll(float);
    void setAceleracionll(float);
    void setPesoll(float);
};


float Llantas::getVelocidadll(){
    return velocidadll;
}

float Llantas::getAceleracionll(){
    return aceleracionll;
}

float Llantas::getPesoll(){
    return pesoll;
}


void Llantas::setVelocidadll(float v) {
    velocidadll = v;
}

void Llantas::setAceleracionll(float a) {
    aceleracionll = a;
}

void Llantas::setPesoll(float p) {
    pesoll = p;
}
