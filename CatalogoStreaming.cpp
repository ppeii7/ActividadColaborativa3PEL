//
// Created by Pei on 05/11/2026.
//

#include "CatalogoStreaming.h"
#include "Pelicula.h"
#include "Serie.h"
#include <iostream>

using namespace std;

CatalogoStreaming::CatalogoStreaming() {
}

// El catalogo es dueño de los Titulo* (Dinarray solo libera su array).
CatalogoStreaming::~CatalogoStreaming() {
    for (std::size_t i = 0; i < titulos.array_size(); i++) {
        delete titulos.at(i);
    }
}

void CatalogoStreaming::agregarTitulo(Titulo* t) {
    titulos.insert(t, titulos.array_size());
}

// Orden: titulo, genero, calidad, tarifaEstandar, precioAlquiler, duracion | temporadas
void CatalogoStreaming::cargarBiblioteca() {
    agregarTitulo(new Pelicula("Matrix", "Ciencia ficcion", "UHD", true, 0.0f, 136));
    agregarTitulo(new Pelicula("Inception", "Ciencia ficcion", "FHD", false, 3.99f, 148));
    agregarTitulo(new Pelicula("El Padrino", "Drama", "FHD", true, 0.0f, 175));
    agregarTitulo(new Pelicula("Interstellar", "Ciencia ficcion", "UHD", false, 4.50f, 169));
    agregarTitulo(new Serie("Breaking Bad", "Drama", "UHD", true, 0.0f, 5));
    agregarTitulo(new Serie("Dark", "Ciencia ficcion", "FHD", false, 2.99f, 3));
    agregarTitulo(new Serie("La Casa de Papel", "Accion", "FHD", true, 0.0f, 5));
}

void CatalogoStreaming::buscarPorTitulo(const string& titulo) {
    bool encontrado = false;
    for (std::size_t i = 0; i < titulos.array_size(); i++) {
        if (titulos.at(i)->coincideTitulo(titulo)) {
            titulos.at(i)->mostrar();
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se ha podido encontrar el titulo: " << titulo << endl;
    }
}

void CatalogoStreaming::buscarPorGenero(const string& genero) {
    bool encontrado = false;
    for (std::size_t i = 0; i < titulos.array_size(); i++) {
        if (titulos.at(i)->coincideGenero(genero)) {
            titulos.at(i)->mostrar();
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se ha podido encontrar ningun titulo del genero: " << genero << endl;
    }
}

void CatalogoStreaming::buscarPorCalidad(const string& calidad) {
    bool encontrado = false;
    for (std::size_t i = 0; i < titulos.array_size(); i++) {
        if (titulos.at(i)->coincideCalidad(calidad)) {
            titulos.at(i)->mostrar();
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se ha podido encontrar ningun titulo con calidad: " << calidad << endl;
    }
}

void CatalogoStreaming::alquilar(const string& titulo) {
    for (std::size_t i = 0; i < titulos.array_size(); i++) {
        if (titulos.at(i)->coincideTitulo(titulo)) {
            if (titulos.at(i)->alquilar()) {
                cout << "\"" << titulo << "\" alquilado. Ahora esta disponible." << endl;
            } else {
                cout << "\"" << titulo << "\" ya estaba disponible." << endl;
            }
            return;
        }
    }
    cout << "No se ha podido encontrar el titulo: " << titulo << endl;
}
