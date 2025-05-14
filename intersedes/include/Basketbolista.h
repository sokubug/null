#ifndef BASKETBOLISTA_H
#define BASKETBOLISTA_H

#include "Deportista.h"
#include <string>

class Basketbolista : public Deportista {
private:
    int puntos;
    int asistencias;
    int rebotes;
    int faltas;
    std::string posicion;

public:
    Basketbolista(const std::string& nombre, int edad, const std::string& posicion, int numero);

    void setPuntos(int puntos);
    int getPuntos();
    void setAsistencias(int asistencias);
    int getAsistencias();
    void setRebotes(int rebotes);
    int getRebotes();
    void setFaltas(int faltas);
    int getFaltas();
    void setPosicion(const std::string& posicion);
    std::string getPosicion();
};
#endif