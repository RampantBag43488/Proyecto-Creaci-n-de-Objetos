#include <iostream>
using namespace std;
#include "Kart.h"

//Menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "Menu:\n";
    cout << "1. Mostrar detalles del kart. \n";
    cout << "2. Cambiar aceleracion de la carcasa. \n";
    cout << "3. Cambiar peso de la carcasa. \n";
    cout << "4. Cambiar velocidad de la carcasas. \n";
    cout << "5. Cambiar estilo de la carcasa. \n";
    cout << "6. Cambiar aceleracion de las llantas. \n";
    cout << "7. Cambiar peso de las llantas. \n";
    cout << "8. Cambiar velocidad de las llantas. \n";
    cout << "9. Cambiar el tipo de llantas. \n";
    cout << "10. Cambiar aceleracion del personaje. \n";
    cout << "11. Cambiar peso del personaje. \n";
    cout << "12. Cambiar velocidad del personaje. \n";
    cout << "13. Cambiar nombre del personaje. \n";
    cout << "14. Mostrar detalles de las partes. \n";
    cout << "15. Salir \n";
}

int main() {
     Kart kart1(0, 1, "Luigi");
     int opcion = 0;
     float tem_acel = 0.0, tem_veloc = 0.0, tem_peso = 0.0;
     bool tem_estilo = 0, tem_tipo = 0;
     string tem_nombre;


     while(opcion < 15 && opcion > -1){

  		//Impresion de menu
  		menu();
  		//Leer indice que selecciona la opcion del menu
  		cin >> opcion;

  		//Switch donde dependiendo la eleccion efectua un diferente procedimiento
  		switch(opcion){

  			//Caso 1 que imprime las estadisticas del kart y sus detalles
  			case 1:
  				kart1.mostrarDetalles();
  			  break;

  			//Caso 2 cambia la aceleracion de la carcasa
  			case 2:
                    cout << "Dame la aceleracion de la carcasa: ";
                    cin >> tem_acel;
  				kart1.setCarcasaAceleracion(tem_acel);
  			  break;

  			//Caso 3 cambia el peso de la carcasa
  			case 3:
                    cout << "Dame el peso de la carcasa: ";
                    cin >> tem_peso;
  				kart1.setCarcasaPeso(tem_peso);
  			  break;

  			//Caso 4 cambiar la velocidad de la carcasa
  			case 4:
                    cout << "Dame la velocidad de la carcasa: ";
                    cin >> tem_veloc;
  				kart1.setCarcasaVelocidad(tem_veloc);
  			  break;

  			//Caso 5 cambiar el estilo de la carcasa
  			case 5:
                    cout << "Dame el estilo de la carcasa: \n(Ponga: 0 para coche/1 para moto)\n";
                    cin >> tem_estilo;
  				kart1.setCarcasaEstilo(tem_estilo);
   			  break;

  			//Caso 6 cambia la aceleracion de las llantas
  			case 6:
                    cout << "Dame la aceleracion de las llantas: ";
                    cin >> tem_acel;
  				kart1.setLlantasAceleracion(tem_acel);
  		  	break;

  			//Caso 7 cambia el peso de las llantas
  			case 7:
                    cout << "Dame el peso de las llantas: ";
                    cin >> tem_peso;
  				kart1.setLlantasPeso(tem_peso);
  			  break;

  			//Caso 8 cambia la velocidad de las llantas
  			case 8:
                    cout << "Dame la velocidad de las llantas: ";
                    cin >> tem_veloc;
  				kart1.setLlantasVelocidad(tem_veloc);
  			  break;

               //Caso 9 cambia el tipo de llantas
  			case 9:
  				cout<< "Dame el tipo de llantas: \n(Ponga: 0 para todoterreno/1 para pequeñas)\n" ;
  				cin >> tem_tipo;
  				kart1.setLlantasTipo(tem_tipo);
  			  break;

               //Caso 10 cambia la aceleracion del personaje
  			case 10:
  				cout<< "Dame la aceleracion del pesonaje: " ;
  				cin >> tem_acel;
  				kart1.setPersonajeAceleracion(tem_acel);
  			  break;

               //Caso 11 cambia el peso del personaje
               case 11:
  				cout<< "Dame el peso del pesonaje: " ;
  				cin >> tem_peso;
  				kart1.setPersonajePeso(tem_peso);
  			  break;

               //Caso 12 cambia la velocidad del personaje
               case 12:
  				cout<< "Dame la velocidad del pesonaje: " ;
  				cin >> tem_veloc;
  				kart1.setPersonajeVelocidad(tem_veloc);
  			  break;

               //Caso 13 cambia el nombre del personaje
               case 13:
  				cout<< "Dame el nombre del pesonaje: " ;
  				cin >> tem_nombre;
  				kart1.setPersonajeNombre(tem_nombre);
  			  break;

  			case 14:
  				kart1.mostrarDetallesPartes();
  			  break;
  		}
     }
     return 0;
}
     
