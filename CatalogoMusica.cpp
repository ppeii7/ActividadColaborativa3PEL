//
// Created by Pei on 05/11/2026.
//

#include "CatalogoMusica.h"

CatalogoMusica::CatalogoMusica() {
    albumes = new Vector <Album*>();
}

CatalogoMusica::~CatalogoMusica() {
    albumes->~Vector();
    albumes = nullptr;
}

void CatalogoMusica::cargarBiblioteca() {
    // Álbum 1: Rock Clásico
    Album* album1 = new Album("Abbey Road", "The Beatles", "Rock");
    album1->agregarCancion("Come Together");
    album1->agregarCancion("Something");
    album1->agregarCancion("Here Comes The Sun");
    this->agregarAlbum(album1);

    // Álbum 2: Pop
    Album* album2 = new Album("Thriller", "Michael Jackson", "Pop");
    album2->agregarCancion("Wanna Be Startin' Somethin'");
    album2->agregarCancion("Thriller");
    album2->agregarCancion("Beat It");
    album2->agregarCancion("Billie Jean");
    this->agregarAlbum(album2);

    // Álbum 3: Música Urbana / Pop
    Album* album3 = new Album("El Madrileño", "C. Tangana", "Urbano");
    album3->agregarCancion("Demasiadas Mujeres");
    album3->agregarCancion("Tú Me Dejaste De Querer");
    album3->agregarCancion("Ingobernable");
    this->agregarAlbum(album3);

    // Álbum 4: Rock Alternativo
    Album* album4 = new Album("Nevermind", "Nirvana", "Grunge");
    album4->agregarCancion("Smells Like Teen Spirit");
    album4->agregarCancion("In Bloom");
    album4->agregarCancion("Come As You Are");
    this->agregarAlbum(album4);
}

void CatalogoMusica::agregarAlbum(Album* album) {
    albumes->push_back(album);
}

void CatalogoMusica::buscarPorCancion(std::string titulo) {
    int numAlbum;
    bool found = false;
    for (int i = 0; i < albumes->vector_size(); i++) {
        if (albumes->at(i)->tieneCancion(titulo)) {
            found = true;
            numAlbum = i;
        }
    }
}

void CatalogoMusica::buscarPorAlbum(std::string titulo) {
    int numAlbum;
    bool found = false;
    for (int i = 0; i < albumes->vector_size(); i++) {
        if (albumes->at(i)->getTitulo() == titulo) {
            found = true;
            numAlbum = i;
        }
    }
}

void CatalogoMusica::buscarPorGenero(std::string genero) {
    int numAlbum;
    bool found = false;
    for (int i = 0; i < albumes->vector_size(); i++) {
        if (albumes->at(i)->getGenero() == genero) {
            found = true;
            numAlbum = i;
        }
    }
}

void CatalogoMusica::buscarPorGrupo(std::string grupo) {
    int numAlbum;
    bool found = false;
    for (int i = 0; i < albumes->vector_size(); i++) {
        if (albumes->at(i)->getGrupo() == grupo) {
            found = true;
            numAlbum = i;
        }
    }
}