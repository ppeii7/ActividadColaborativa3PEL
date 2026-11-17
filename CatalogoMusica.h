//
// Created by Pei on 05/11/2026.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_CATALOGOMUSICA_H
#define ACTIVIDADCOLABORATIVA3PEL_CATALOGOMUSICA_H
#include "Album.h"
#include "Vector.h"


class CatalogoMusica {

private:
    Vector<Album*>* albumes ;

public:
    CatalogoMusica();
    ~CatalogoMusica();
    void cargarBiblioteca();
    void agregarAlbum(Album* album);
    void buscarPorCancion(std::string titulo);
    void buscarPorAlbum(std::string titulo);
    void buscarPorGenero(std::string genero);
    void buscarPorGrupo(std::string grupo);

};


#endif //ACTIVIDADCOLABORATIVA3PEL_CATALOGOMUSICA_H
