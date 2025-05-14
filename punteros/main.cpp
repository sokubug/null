#include <iostream>
#include <vector>
#include <fstream>
#include "Cuenta.h"
#include "Persona.h"

void leerArchivo(std::string ruta, vector <string> *contenido);

int main() {
    Cuenta *punteroCuenta = NULL;

    Cuenta cuenta = Cuenta("111", 400);

    punteroCuenta = &cuenta;

    Persona el = Persona("123", "Alvaro", punteroCuenta);
    Persona ella = Persona("234", "Alicia", punteroCuenta);

    el.consignar(100);
    ella.consignar(300);
    el.retirar(700);
    
    /* 
    esto accede al puntero desde la clase que lo contiene! (ᵔᗜᵔ)
    es decir, desde la clase Persona.
    siempre que haya un puntero, se puede acceder a la clase que lo contiene.
    por ejemplo, si la clase Persona tiene un puntero a la clase Cuenta,
    se puede acceder a la clase Cuenta desde la clase Persona.
    esto es lo que se conoce como "composición" en programación orientada a objetos.
    */

    // punteroCuenta->consignar(100);
    // punteroCuenta->retirar(200);

    cout<<"nombre:\tnull\nsaldo:\t"<<cuenta.verSaldo()<<endl;

    vector <string> lineas;
    leerArchivo("transacciones.txt", &lineas);

    // std::cout << lineas.at(1) << "\n";
}

void leerArchivo(std::string ruta, vector<string> *contenido){
    ifstream fichero(ruta);

    // mientras no sea el final del archivo
    while(!fichero.eof()) {
        std::string linea;
        getline(fichero, linea);
        contenido->push_back(linea);

    }

    std::cout << contenido->size() << "\n";
    std::cout << contenido->at(0);
}