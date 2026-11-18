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

CatalogoStreaming::~CatalogoStreaming() {
    for (std::size_t i = 0; i < titulos.array_size(); i++) {
        delete titulos[i];
    }
}

void CatalogoStreaming::agregarTitulo(Titulo* t) {
    titulos.insert(t, titulos.array_size());
}

void CatalogoStreaming::cargarBiblioteca() {
    string titulo, genero, calidad;

    titulo = "Matrix"; genero = "Ciencia ficcion"; calidad = "UHD";
    agregarTitulo(new Pelicula(titulo, genero, calidad, true, 0.0f, 136));

    titulo = "Inception"; genero = "Ciencia ficcion"; calidad = "FHD";
    agregarTitulo(new Pelicula(titulo, genero, calidad, false, 3.99f, 148));

    titulo = "El Padrino"; genero = "Drama"; calidad = "FHD";
    agregarTitulo(new Pelicula(titulo, genero, calidad, true, 0.0f, 175));

    titulo = "Interstellar"; genero = "Ciencia ficcion"; calidad = "UHD";
    agregarTitulo(new Pelicula(titulo, genero, calidad, false, 4.50f, 169));

    titulo = "Breaking Bad"; genero = "Drama"; calidad = "UHD";
    agregarTitulo(new Serie(titulo, genero, calidad, true, 0.0f, 5));

    titulo = "Dark"; genero = "Ciencia ficcion"; calidad = "FHD";
    agregarTitulo(new Serie(titulo, genero, calidad, false, 2.99f, 3));

    titulo = "La Casa de Papel"; genero = "Accion"; calidad = "FHD";
    agregarTitulo(new Serie(titulo, genero, calidad, true, 0.0f, 5));
}

void CatalogoStreaming::buscarPorTitulo(string titulo) {
    bool encontrado = false;
    for (std::size_t i = 0; i < titulos.array_size(); i++) {
        if (titulos[i]->coincideTitulo(titulo)) {
            titulos[i]->mostrar();
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se ha podido encontrar el titulo: " << titulo << endl;
    }
}

void CatalogoStreaming::buscarPorGenero(string genero) {
    bool encontrado = false;
    for (std::size_t i = 0; i < titulos.array_size(); i++) {
        if (titulos[i]->coincideGenero(genero)) {
            titulos[i]->mostrar();
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se ha podido encontrar ningun titulo del genero: " << genero << endl;
    }
}

void CatalogoStreaming::buscarPorCalidad(string calidad) {
    bool encontrado = false;
    for (std::size_t i = 0; i < titulos.array_size(); i++) {
        if (titulos[i]->coincideCalidad(calidad)) {
            titulos[i]->mostrar();
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se ha podido encontrar ningun titulo con calidad: " << calidad << endl;
    }
}

void CatalogoStreaming::alquilar(string titulo) {
    bool encontrado = false;
    for (std::size_t i = 0; i < titulos.array_size() && !encontrado; i++) {
        if (titulos[i]->coincideTitulo(titulo)) {
            encontrado = true;
            if (titulos[i]->alquilar()) {
                cout << "\"" << titulo << "\" alquilado. Ahora esta disponible." << endl;
            } else {
                cout << "\"" << titulo << "\" ya estaba disponible." << endl;
            }
        }
    }
    if (!encontrado) {
        cout << "No se ha podido encontrar el titulo: " << titulo << endl;
    }
}