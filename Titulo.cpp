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
    std::cout << titulo << " | " << genero << " | " << calidad << " | ";
    if (tarifaEstandar) {
        std::cout << "Tarifa estandar";
    } else {
        std::cout << "Alquiler: " << precioAlquiler << " EUR";
    }
    std::cout << " | " << (disponible ? "Disponible" : "No disponible");
}