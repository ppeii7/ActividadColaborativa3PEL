#include "CatalogoMusica.h"
#include <iostream>

CatalogoMusica::CatalogoMusica() {
}

CatalogoMusica::~CatalogoMusica() {
    for (std::size_t i = 0; i < albumes.vector_size(); i++) {
        delete albumes[i];
    }
}

// cargarBiblioteca() queda igual
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

    // Álbum 3: Música Urbana
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
    albumes.push_back(album);
}

void CatalogoMusica::buscarPorCancion(std::string titulo) {
    int total = 0;
    for (std::size_t i = 0; i < albumes.vector_size(); i++) {
        if (albumes[i]->tieneCancion(titulo)) {
            std::cout << albumes[i]->toStringAlbum() << std::endl;
            total++;
        }
    }
    if (total == 0) {
        std::cout << "No se ha podido encontrar el album con la cancion: " << titulo << std::endl;
    } else {
        std::cout << "   >> " << total << " resultado(s) encontrado(s)" << std::endl;
    }
}

void CatalogoMusica::buscarPorAlbum(std::string titulo) {
    int total = 0;
    for (std::size_t i = 0; i < albumes.vector_size(); i++) {
        if (albumes[i]->esTitulo(titulo)) {
            std::cout << albumes[i]->toStringAlbum() << std::endl;
            total++;
        }
    }
    if (total == 0) {
        std::cout << "No se ha podido encontrar el album: " << titulo << std::endl;
    } else {
        std::cout << "   >> " << total << " resultado(s) encontrado(s)" << std::endl;
    }
}

void CatalogoMusica::buscarPorGenero(std::string genero) {
    int total = 0;
    for (std::size_t i = 0; i < albumes.vector_size(); i++) {
        if (albumes[i]->esDelGenero(genero)) {
            std::cout << albumes[i]->toStringAlbum() << std::endl;
            total++;
        }
    }
    if (total == 0) {
        std::cout << "No se ha podido encontrar ningun album del genero: " << genero << std::endl;
    } else {
        std::cout << "   >> " << total << " resultado(s) encontrado(s)" << std::endl;
    }
}

void CatalogoMusica::buscarPorGrupo(std::string grupo) {
    int total = 0;
    for (std::size_t i = 0; i < albumes.vector_size(); i++) {
        if (albumes[i]->esDelGrupo(grupo)) {
            std::cout << albumes[i]->toStringAlbum() << std::endl;
            total++;
        }
    }
    if (total == 0) {
        std::cout << "No se ha podido encontrar ningun album del grupo: " << grupo << std::endl;
    } else {
        std::cout << "   >> " << total << " resultado(s) encontrado(s)" << std::endl;
    }
}