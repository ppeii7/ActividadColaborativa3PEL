//
// Created by Pei on 05/11/2026.
//

#include "Serie.h"

#include <iostream>


Serie::Serie(std::string& t, std::string& g, std::string& c, bool e, float p, int d)
    : ::Titulo(t, g, c, e, p), temporadas(d) {}

void Serie::mostrar() const {
    std::cout << "[Pelicula] ";
    mostrarBase();
    std::cout << " | " << temporadas << " min" << std::endl;
}