//
// Created by Pei on 05/11/2026.
//

#include "Album.h"

Album::Album(std::string titulo, std::string grupo, std::string genero) {
    this->titulo = titulo;
    this->grupo = grupo;
    this->genero = genero;
}

void Album::agregarCancion(std::string cancion) {
    canciones.push_back(cancion);
}

bool Album::tieneCancion(std::string cancion) {
    bool tiene = false;
    for (std::size_t i = 0; i < canciones.vector_size(); i++) {
        if (canciones[i] == cancion) {
            tiene = true;
        }
    }
    return tiene;
}

bool Album::esTitulo(const std::string t) {
    return this->titulo == t;
}

bool Album::esDelGrupo(const std::string g) {
    return this->grupo == g;
}

bool Album::esDelGenero(const std::string g) {
    return this->genero == g;
}


std::string Album::toStringAlbum() {
    std::string s = "+--------------------------------------------------+\n";
    s += "| [ALBUM] " + titulo + "\n";
    s += "| Grupo:   " + grupo + "\n";
    s += "| Genero:  " + genero + "\n";
    s += "| Canciones:\n";
    for (std::size_t i = 0; i < canciones.vector_size(); i++) {
        s += "|   - " + canciones[i] + "\n";
    }
    s += "+--------------------------------------------------+";
    return s;
}