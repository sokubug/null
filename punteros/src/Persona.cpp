#include "Persona.h"

Persona::Persona(string cedula, string nombre, Cuenta* cuenta){
    this->cedula = cedula;
    this->nombre = nombre;
    this->cuenta = cuenta;
}

#include <fstream>

void Persona::retirar(double valor) {
    // ofstream archivo("transacciones.txt"); // ifstream para leer, ofstream para escribir.
    fstream archivo("transacciones.txt", ios::app); // ios::app para agregar al final del archivo, ios::out para sobrescribir.
    double valorInicial = cuenta->verSaldo(); // para llamar un puntero se usa la flecha! (^ω^)
    cuenta->setSaldo(valorInicial - valor);

    // para operar sobre el archivo
    archivo << nombre << "-" << valorInicial << "-" << valorInicial - valor << "-" << "Retiro\n";
    // cerrar el archivo
    archivo.close();
}

void Persona::consignar(double valor) {
    // ofstream archivo("transacciones.txt");
    fstream archivo("transacciones.txt", ios::app);
    double valorInicial = cuenta->verSaldo();
    cuenta->setSaldo(valorInicial + valor);

    archivo << nombre << "-" << valorInicial << "-" << valorInicial + valor << "-" << "Consignacion\n";
    archivo.close();
}

