//
// Created by Pei on 05/11/2026.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_CATALOGOSTREAMING_H
#define ACTIVIDADCOLABORATIVA3PEL_CATALOGOSTREAMING_H

#include <string>
#include "Dinarray.h"
#include "Titulo.h"

class CatalogoStreaming {
private:
    Dinarray<Titulo*> titulos;

public:
    CatalogoStreaming();
    ~CatalogoStreaming();

    void cargarBiblioteca();
    void agregarTitulo(Titulo* t);
    void buscarPorTitulo(std::string titulo);
    void buscarPorGenero(std::string genero);
    void buscarPorCalidad(std::string calidad);
    void alquilar(std::string titulo);
};

#endif //ACTIVIDADCOLABORATIVA3PEL_CATALOGOSTREAMING_H