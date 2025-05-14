#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

#include "Deportista.h"
#include <string>

class Futbolista : public Deportista {
private:
    int goles;
    int assistencias;
    int faltas;
    std::string posicion;

public:
    Futbolista(const std::string& nombre, int edad, const std::string& posicion, int numero);

    void setGoles(int goles);
    int getGoles();
    void setAssistencias(int assistencias);
    int getAssistencias();
    void setFaltas(int faltas);
    int getFaltas();
    void setPosicion(const std::string& posicion);
    std::string getPosicion();

};

#endif // 