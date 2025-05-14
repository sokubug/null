#include "Ahorcado.h"
#include <iostream>
#include <fstream>
#include <ctime>

Ahorcado::Ahorcado() {
    // este es el constructor por defecto
    intentosMaximos = 6;
    intentosUsados = 0;
}

void Ahorcado::inicializarPalabra(const std::string& palabra) {
    palabraSecreta = palabra;
    palabraAdivinada = std::string(palabra.length(), '_');
}

void Ahorcado::cargarPalabraDesdeArchivo(const std::string& rutaArchivo) {
    std::ifstream archivo(rutaArchivo);
    std::vector<std::string > palabras;

    if (archivo.is_open()) {
        std::string linea;
        while (getline(archivo, linea)) {
            palabras.push_back(linea);
        }
        archivo.close();

        if (!palabras.empty()) {
            srand(time(0));
            int indice = rand() % palabras.size();
            inicializarPalabra(palabras[indice]);
        }
    } else {
        std::cout << "No se pudo abrir el archivo.\n";
    }
}

void Ahorcado::jugar() {
    std::string jugador;
    std::cout << "Ingresa tu nombre: ";
    std::getline(std::cin, jugador);

    cargarPalabraDesdeArchivo("palabras.txt");

    char letra;
    bool gano = false;

    while (intentosUsados < intentosMaximos && palabraAdivinada != palabraSecreta) {
        std::cout << "\nPalabra:" << palabraAdivinada << "\n";
        std::cout << "Intentos restantes: " << (intentosMaximos - intentosUsados) << "\n";
        std::cout << "Ingresa una letra: ";
        std::cin >> letra;

        bool acierto = false;
        for (size_t i = 0; i < palabraSecreta.length(); i++) {
            if (palabraSecreta[i] == letra && palabraAdivinada[i] == '_') {
                palabraAdivinada[i] = letra;
                acierto = true;
            }
        }

        if (!acierto) {
            intentosUsados++;
        }
    }

    if (palabraAdivinada == palabraSecreta) {
        std::cout << "¡Ganaste! La palabra era: " << palabraSecreta << "\n";
        gano = true;
    } else {
        std::cout << "\nPerdiste. La palabra era: " << palabraSecreta << "\n";
    }

    guardarHistorial(jugador, gano, intentosMaximos - intentosUsados);
}

void Ahorcado::guardarHistorial(const std::string& jugador, bool gano, int puntuacion) {
    std::ofstream archivo("historial.txt", std::ios::app);
    if (archivo.is_open()) {
        time_t now = time(0);
        tm* localtm = localtime (&now);

        archivo << (1900 + localtm->tm_year) << "-"
                << (1 + localtm->tm_mon) << "-"
                << localtm->tm_mday << " "
                << jugador << " AH "
                << (gano ? "G" : "P") << " "
                << puntuacion << "\n";

        archivo.close();
    }
}

/* esta es la implementacion del juego ahorcado */