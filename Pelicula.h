//
// Created by Pei on 05/11/2026.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_PELICULA_H
#define ACTIVIDADCOLABORATIVA3PEL_PELICULA_H



#include "Titulo.h"

class Pelicula : public Titulo {
private:
    int duracion;
public:
    Pelicula(std::string& titulo, std::string& genero, std::string& calidad, bool estandar, float precio, int duracion);
    void mostrar() const override;
};

#endif //ACTIVIDADCOLABORATIVA3PEL_PELICULA_H
