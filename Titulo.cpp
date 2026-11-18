//
// Created by Pei on 05/11/2026.
//

#include "Titulo.h"
#include <iostream>

Titulo::Titulo(std::string& titulo,std::string& genero,std::string& calidad, bool estandar, float precio)
    : titulo(titulo), genero(genero), calidad(calidad),tarifaEstandar(estandar), precioAlquiler(precio),disponible(estandar) {
}   // con tarifa estandar ya esta disponible

Titulo::~Titulo() {}

bool Titulo::coincideTitulo(const std::string& t){
    return titulo == t;
}

bool Titulo::coincideGenero(const std::string& g){
    return genero == g;
}

bool Titulo::coincideCalidad(const std::string& c){
    return calidad == c;
}

bool Titulo::alquilar() {
    bool alquilado = false;
    if (!disponible) {
        disponible = true;
        alquilado = true;
    }
    return alquilado;
}

void Titulo::mostrarBase() const {
    std::cout << "| Titulo:   " << titulo << "\n";
    std::cout << "| Genero:   " << genero << "\n";
    std::cout << "| Calidad:  " << calidad << "\n";
    if (tarifaEstandar) {
        std::cout << "| Tarifa:   Estandar (incluido en tu suscripcion)\n";
    } else {
        std::cout << "| Tarifa:   Alquiler adicional - " << precioAlquiler << " EUR\n";
    }
    if (disponible) {
        std::cout << "| Estado:   DISPONIBLE\n";
    } else {
        std::cout << "| Estado:   NO DISPONIBLE (alquilalo para verlo)\n";
    }
}