#include "Deportista.h"

void Deportista::setNombre(std::string nombre) {
    this->nombre = nombre;
}
std::string Deportista::getNombre() {
    return nombre;
}
void Deportista::setEdad(int edad) {
    this->edad = edad;
}
int Deportista::getEdad() {
    return edad;
}
void Deportista::setCedula(std::string cedula) {
    this->cedula = cedula;
}
std::string Deportista::getCedula() {
    return cedula;
}
void Deportista::setCodigo(std::string codigo) {
    this->codigo = codigo;
}
std::string Deportista::getCodigo() {
    return codigo;
}
void Deportista::setPrograma(int programa) {
    this->programa = programa;
}
int Deportista::getPrograma() {
    return programa;
}
void Deportista::setSexo(std::string sexo) {
    this->sexo = sexo;
}
std::string Deportista::getSexo() {
    return sexo;
}