#include <iostream>
using namespace std;
#include "Personajes.h"
#include "Carcasa.h"
#include "Llantas.h"

int main() {
    // Creación de objetos
    Personaje personaje();
    Carcasa carcasa();
    Llantas llantas();


    personaje.setVelocidad(12.5f);
    personaje.setAceleracion(6.0f);
    personaje.setPeso(72.0f);
    carcasa.setVelocidad_(160.0f);
    carcasa.setAceleracion_(35.0f);
    carcasa.setPeso(520.0f);
    carcasa.setEstilo(0)
    llantas.setVelocidad(45.0f);
    llantas.setAceleracion(25.0f);
    llantas.setPeso(55.0f);
    llantas.setTipo(1);



    cout <<"Personaje Mario: Velocidad = " << personaje.getVelocidad() 
         << ", Aceleracion = " << personaje.getAceleracion() 
         << ", Peso = " << personaje.getPeso()
         << ", Nombre = " << personaje.getNombre() << endl;

    cout << "Carcasa: Velocidad = " << carcasa.getVelocidad() 
         << ", Aceleracion = " << carcasa.getAceleracion() 
         << ", Peso = " << carcasa.getPeso()
         << ", Estilo = " << carcasa.getEstilo() << endl;

    cout << "Llantitas de hule: Velocidad = " << llantas.getVelocidad() 
         << ", Aceleracion = " << llantas.getAceleracion() 
         << ", Peso = " << llantas.getPeso()
         << ", Tipo = " << llantas.getTipo() << endl;
}
