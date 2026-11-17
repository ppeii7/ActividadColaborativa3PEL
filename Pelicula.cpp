//
// Created by Pei on 05/11/2026.
//

#include "Pelicula.h"

// Pelicula.cpp
#include "Pelicula.h"
#include <iostream>

Pelicula::Pelicula(std::string& t, std::string& g, std::string& c, bool e, float p, int d)
    : Titulo(t, g, c, e, p), duracion(d) {}

void Pelicula::mostrar() const {
    std::cout << "[Pelicula] ";
    mostrarBase();
    std::cout << " | " << duracion << " min" << std::endl;
}