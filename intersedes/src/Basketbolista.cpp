#include "Basketbolista.h"

Basketbolista::Basketbolista(const std::string& nombre, int edad, const std::string& posicion, int numero) {
    setNombre(nombre);
    setEdad(edad);
    setPosicion(posicion);
    setCodigo(std::to_string(numero));
}
void Basketbolista::setPuntos(int puntos) {
    this->puntos = puntos;
}
int Basketbolista::getPuntos() {
    return puntos;
}
void Basketbolista::setAsistencias(int asistencias) {
    this->asistencias = asistencias;
}
int Basketbolista::getAsistencias() {
    return asistencias;
}
void Basketbolista::setRebotes(int rebotes) {
    this->rebotes = rebotes;
}
int Basketbolista::getRebotes() {
    return rebotes;
}
void Basketbolista::setFaltas(int faltas) {
    this->faltas = faltas;
}
int Basketbolista::getFaltas() {
    return faltas;
}
void Basketbolista::setPosicion(const std::string& posicion) {
    this->posicion = posicion;
}
std::string Basketbolista::getPosicion() {
    return posicion;
}
