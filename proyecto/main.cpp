#include <iostream>
#include <memory>
#include "Ahorcado.h"
// #include "Concentrece.h"

int main() {
    int opcion;
    bool salir = false;

    while (!salir) {
        std::cout << "\t::: MINIJUEGOS :::\n";
        std::cout << "1. Ahorcado\n";
        std::cout << "2. Concentrece\n";
        std::cout << "3. Salir\n";
        std::cout << "(^ω^) Selecciona una opcion: ";
        std::cin >> opcion;
        std::cin.ignore();

        std::unique_ptr<Juego> juego;

        switch (opcion) {
            case 1:
                juego = std::make_unique<Ahorcado>();
                juego->jugar();
                break;
            case 2:
                std::cout << "Concentrece no está implementado aún.\n";
                break;
            case 3:
                salir = true;
                std::cout << "Gracias por jugar! (*・ω・)ﾉ\n";
                break;
            default:
                std::cout << "Opcion no valida. Intenta de nuevo!\n";
                break;
        }
    }

    return 0;
}

/* este es el menu principal, y por ende, el selector de juegos.
ahora bien, el archivo "palabras.txt" es la lista de palabras para el ahorcado.
y el archivo "historial.txt" se va a generar al jugar, y es el registro de partidas.*/