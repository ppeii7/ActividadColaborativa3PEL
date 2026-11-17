//
// Created by Pei on 05/11/2026.
//

#include "Album.h"

Album::Album(std::string titulo, std::string grupo, std::string genero) {
    this->titulo = titulo;
    this->grupo = grupo;
    this->genero = genero;
    numCanciones = 0;
}

void Album::agregarCancion(std::string cancion) {
    canciones.push_back(cancion);
}

bool Album::tieneCancion(std::string cancion) {
    bool tiene = false;
    for (int i = 0; i < canciones.vector_size(); i++) {
        if (canciones.at(i) == cancion) {
            tiene = true;
        }
    }
    return tiene;
}

std::string Album::getTitulo() {
    return this->titulo;
}

std::string Album::getGrupo() {
    return this->grupo;
}

std::string Album::getGenero() {
    return this->genero;
}

std::string Album::getCancion(std::size_t index) {
    return canciones.at(index-1);
}

std::string Album::toStringAlbum() {
    return "Titulo: " + this->getTitulo() + "\n Grupo: " + this->getGrupo() + " Genero: " + this->getGenero() + "\n Canciones: " + canciones.toStringVector();
}
