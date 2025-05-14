
#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <iostream>
#include <string>

class Deportista {
    private:

    public:
        void setNombre(std::string nombre);
        std::string getNombre();
        void setEdad(int edad);
        int getEdad();
        void setCedula(std::string cedula);
        std::string getCedula();
        void setCodigo(std::string codigo);
        std::string getCodigo();
        void setPrograma(int programa);
        int getPrograma();
        void setSexo(std::string sexo);
        std::string getSexo();

    protected:
        std::string nombre;
        int edad;
        std::string cedula;
        std::string codigo;
        int programa;
        std::string sexo;
};

#endif