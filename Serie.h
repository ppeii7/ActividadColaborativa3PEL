//
// Created by Pei on 05/11/2026.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_SERIE_H
#define ACTIVIDADCOLABORATIVA3PEL_SERIE_H
#include <iostream>

#include "Titulo.h"

class Serie : public Titulo {
private:
    int temporadas;
public:
    Serie(std::string& titulo, std::string& genero, std::string& calidad, bool estandar, float precio, int temporadas);
    void mostrar() const override;
};
#endif //ACTIVIDADCOLABORATIVA3PEL_SERIA_H
