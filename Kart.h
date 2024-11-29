/*
 * Proyecto Mario Kart
 * Inaki Mancera Llano
 * A01708827
 * 28/11/2024
 */

/*
 * La clase Kart crea un objeto de carcasa, llantas y personaje
 * para recibir los datos que el usuario quiera cambiar y que 
 * pueda ver el total de estos y los detalles del kart y sus partes.
*/ 


#ifndef KART_H
#define KART_H

//Bibliotecas
#include <iostream>
#include "Llantas.h"
#include "Carcasa.h"
#include "Personajes.h"

using namespace std;

//Clase Kart que calcula el total de las estadisticas y muestra detalles
class Kart {
private:
    // Los objetos son creados directamente dentro de Kart
    Llantas llantas;
    Carcasa carcasa;
    Personaje personaje;

    // Propiedades totales del Kart
    float velocidadTotal;
    float aceleracionTotal;
    float pesoTotal;
    float manejoTotal;
    float controlTotal;

public:
    // Constructor
    Kart(bool, bool, string);

    // Método para calcular las propiedades totales
    void calcularTotales();

    // Métodos para modificar las partes internas
    void setLlantasVelocidad(float);
    void setLlantasAceleracion(float);
    void setLlantasPeso(float);
    void setLlantasTipo(bool);

    void setCarcasaVelocidad(float);
    void setCarcasaAceleracion(float);
    void setCarcasaPeso(float);
    void setCarcasaEstilo(bool);

    void setPersonajeVelocidad(float);
    void setPersonajeAceleracion(float);
    void setPersonajePeso(float);
    void setPersonajeNombre(string);

    // Método para mostrar información del Kart y sus partes
    void mostrarDetalles();
    void mostrarDetallesPartes();
};

Kart::Kart(bool tipoLlantas, bool estiloCarcasa, string nombrePersonaje){
    llantas = Llantas(tipoLlantas);
    carcasa = Carcasa(estiloCarcasa);
    personaje =  Personaje(nombrePersonaje);
    velocidadTotal = 0.0;
    aceleracionTotal = 0.0;
    pesoTotal = 0.0;
    manejoTotal = 0.0;
    controlTotal = 0.0;
    calcularTotales();
    }

void Kart::calcularTotales() {
    velocidadTotal = llantas.getVelocidad() + carcasa.getVelocidad() + personaje.getVelocidad();
    aceleracionTotal = llantas.getAceleracion() + carcasa.getAceleracion() + personaje.getAceleracion();
    pesoTotal = llantas.getPeso() + carcasa.getPeso() + personaje.getPeso();

    manejoTotal = 0.0;
    controlTotal = 0.0;

    if (carcasa.getEstilo() == "Moto") {
        manejoTotal += 2.5;
    } else {
        controlTotal += 2.5;
    }

    if (llantas.getTipo() == "Pequeñas") {
        manejoTotal += 2.5;
    } else {
        controlTotal += 2.5;
    }
}


void Kart::setLlantasVelocidad(float velocidad) { 
    llantas.setVelocidad(velocidad); 
    calcularTotales(); 
}
void Kart::setLlantasAceleracion(float aceleracion) { 
    llantas.setAceleracion(aceleracion); 
    calcularTotales(); 
}
void Kart::setLlantasPeso(float peso) { 
    llantas.setPeso(peso); 
    calcularTotales(); 
}
void Kart::setLlantasTipo(bool tipo) { 
    llantas.setTipo(tipo); 
    calcularTotales(); 
}

void Kart::setCarcasaVelocidad(float velocidad) { 
    carcasa.setVelocidad(velocidad); 
    calcularTotales(); 
}
void Kart::setCarcasaAceleracion(float aceleracion) { 
    carcasa.setAceleracion(aceleracion); 
    calcularTotales(); 
}
void Kart::setCarcasaPeso(float peso) { 
    carcasa.setPeso(peso); 
    calcularTotales(); 
}
void Kart::setCarcasaEstilo(bool estilo) { 
    carcasa.setEstilo(estilo); 
    calcularTotales(); 
}

void Kart::setPersonajeVelocidad(float velocidad) { 
    personaje.setVelocidad(velocidad); 
    calcularTotales(); 
}
void Kart::setPersonajeAceleracion(float aceleracion) { 
    personaje.setAceleracion(aceleracion); 
    calcularTotales(); 
}
void Kart::setPersonajePeso(float peso) { 
    personaje.setPeso(peso); 
    calcularTotales(); 
}
void Kart::setPersonajeNombre(string nombre) { 
    personaje.setNombre(nombre); 
}

void Kart::mostrarDetalles() {
    cout << "\nEstadisticas del Kart:" << endl;
    cout << "Velocidad Total: " << velocidadTotal << " m/s" << endl;
    cout << "Aceleracion Total: " << aceleracionTotal << " m/s^2" << endl;
    cout << "Peso Total: " << pesoTotal << " kg" << endl;
    cout << "Manejo Total: " << manejoTotal << " (maximo 5.0)" << endl;
    cout << "Control Total: " << controlTotal << " (maximo 5.0)" << endl;
    cout << endl;

    cout << "Detalles del Kart:" << endl;
    cout << "Llantas: " << llantas.getTipo() << endl;
    cout << "Carcasa: " << carcasa.getEstilo() << endl;
    cout << "Personaje: " << personaje.getNombre() << endl;
}

void Kart::mostrarDetallesPartes(){
    cout << "\nDetalles de las partes del Kart:" << endl;
    cout << "Llantas: " << llantas.getTipo() << endl;
    cout << "Velocidad llantas: " << llantas.getVelocidad() << " m/s" << endl;
    cout << "Aceleracion llantas: " << llantas.getAceleracion() << " m/s^2" << endl;
    cout << "Peso llantas: " << llantas.getPeso() << " kg" << endl;
    cout << "Carcasa: " << carcasa.getEstilo() << endl;
    cout << "Velocidad carcasa: " << carcasa.getVelocidad() << " m/s" << endl;
    cout << "Aceleracion carcasa: " << carcasa.getAceleracion() << " m/s^2" << endl;
    cout << "Peso carcasa: " << carcasa.getPeso() << " kg" << endl;
    cout << "Personaje: " << personaje.getNombre() << endl;
    cout << "Velocidad personaje: " << personaje.getVelocidad() << " m/s" << endl;
    cout << "Aceleracion personaje: " << personaje.getAceleracion() << " m/s^2" << endl;
    cout << "Peso personaje: " << personaje.getPeso() << " kg" << endl;
    
}

#endif
