//
// Created by Pei on 05/11/2026.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_ALBUM_H
#define ACTIVIDADCOLABORATIVA3PEL_ALBUM_H
#include <string>

#include "Vector.h"

class Album {
private:
    std::string titulo;
    std::string grupo;
    std::string genero;
    Vector<std::string> canciones;
    int numCanciones;

public:
    Album(std::string titulo, std::string grupo, std::string genero);
    void agregarCancion(std::string cancion);
    bool tieneCancion(std::string cancion);
    bool esTitulo(const std::string t);
    bool esDelGrupo(const std::string g);
    bool esDelGenero(const std::string g);
    std::string getCancion(std::size_t index);
    std::string toStringAlbum();
};


#endif //ACTIVIDADCOLABORATIVA3PEL_ALBUM_H
