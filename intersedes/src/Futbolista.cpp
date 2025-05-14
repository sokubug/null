#include "Futbolista.h"

Futbolista::Futbolista(const std::string& nombre, int edad, const std::string& posicion, int numero) {
    setNombre(nombre);
    setEdad(edad);
    setPosicion(posicion);
    setCodigo(std::to_string(numero));
}
void Futbolista::setGoles(int goles) {
    this->goles = goles;
}
int Futbolista::getGoles() {
    return goles;
}
void Futbolista::setAssistencias(int assistencias) {
    this->assistencias = assistencias;
}
int Futbolista::getAssistencias() {
    return assistencias;
}
void Futbolista::setFaltas(int faltas) {
    this->faltas = faltas;
}
int Futbolista::getFaltas() {
    return faltas;
}
void Futbolista::setPosicion(const std::string& posicion) {
    this->posicion = posicion;
}
std::string Futbolista::getPosicion() {
    return posicion;
}
//