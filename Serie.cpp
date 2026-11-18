//
// Created by Pei on 05/11/2026.
//

#include "Serie.h"

#include <iostream>


Serie::Serie(std::string& t, std::string& g, std::string& c, bool e, float p, int d)
    : ::Titulo(t, g, c, e, p), temporadas(d) {}

void Serie::mostrar() const {
    std::cout << "+--------------------------------------------------+\n";
    std::cout << "| [SERIE]\n";
    mostrarBase();
    std::cout << "| Temporadas: " << temporadas << "\n";
    std::cout << "+--------------------------------------------------+" << std::endl;
}