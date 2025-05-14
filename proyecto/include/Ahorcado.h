#ifndef AHORCADO_H
#define AHORCADO_H

#include "Juego.h"
#include <string>
#include <vector>

class Ahorcado :
    public Juego {
        private:
            std::string palabraSecreta;
            std::string palabraAdivinada;
            int intentosMaximos;
            int intentosUsados; 
        
        public:
            Ahorcado(); // este es el constructor por defecto

            void jugar() override; 
            // este es el método que se va a ejecutar al jugar
            void guardarHistorial(const std::string& jugador, bool gano, int puntuacion) override;
            // este es el método que se va a ejecutar al guardar el historial

            void cargarPalabraDesdeArchivo(const std::string& rutaArchivo);
            // este es el método que se va a ejecutar al cargar la palabra desde un archivo
            void inicializarPalabra(const std::string& palabra);
            // este es el método que se va a ejecutar al inicializar la palabra

            
            // este es el destructor, se encarga de liberar la memoria

    };

/* esta es la declaración del juego ahorcado*/

#endif