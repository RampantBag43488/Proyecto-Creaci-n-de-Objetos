#include <iostream>
using namespace std;
#include "Mario_kart.h"

int main() {
    // Creación de objetos
    Personaje mario(10.0f, 5.0f, 70.0f);
    Coche kart(150.0f, 30.0f, 500.0f);
    Llantas llantas1(40.0f, 20.0f, 50.0f);

    // Mostrar valores iniciales
    cout << "Personaje Mario: Velocidad = " << mario.getVelocidad_p() 
         << ", Aceleracion = " << mario.getAceleracion_p() 
         << ", Peso = " << mario.getPeso_p() << endl;

    cout << "Coche Kart: Velocidad = " << kart.getVelocidad_co() 
         << ", Aceleracion = " << kart.getAceleracion_co() 
         << ", Peso = " << kart.getPeso_co() << endl;

    cout << "Llantas1: Velocidad = " << llantas1.getVelocidadll() 
         << ", Aceleracion = " << llantas1.getAceleracionll() 
         << ", Peso = " << llantas1.getPesoll() << endl;

    // Modificar valores con setters
    mario.setVelocidad_p(12.5f);
    mario.setAceleracion_p(6.0f);
    mario.setPeso_p(72.0f);
    kart.setVelocidad_co(160.0f);
    kart.setAceleracion_co(35.0f);
    kart.setPeso_co(520.0f);
    llantas1.setVelocidadll(45.0f);
    llantas1.setAceleracionll(25.0f);
    llantas1.setPesoll(55.0f);

    cout << "Personaje Mario: Velocidad = " << mario.getVelocidad_p() 
         << ", Aceleracion = " << mario.getAceleracion_p() 
         << ", Peso = " << mario.getPeso_p() << endl;

    cout << "Coche Kart: Velocidad = " << kart.getVelocidad_co() 
         << ", Aceleracion = " << kart.getAceleracion_co() 
         << ", Peso = " << kart.getPeso_co() << endl;

    cout << "Llantas1: Velocidad = " << llantas1.getVelocidadll() 
         << ", Aceleracion = " << llantas1.getAceleracionll() 
         << ", Peso = " << llantas1.getPesoll() << endl;

    return 0;
}
