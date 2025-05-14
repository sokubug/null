#ifndef JUEGO_H
#define JUEGO_H

#include <string>

class Juego {
    public:
        virtual void jugar() = 0; 
        virtual void guardarHistorial(const std::string& jugador, bool gano, int puntuacion) = 0;
        virtual ~Juego() {}
};

/* este "juego.h" es una clase abstracta, 
tiene métodos virtuales puros "=0". de aquí,
los juegos "ahorcado" y "concentrece" van a heredar
la clase y definir versionas propias (^ω^)*/

#endif

