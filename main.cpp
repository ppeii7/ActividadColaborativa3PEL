#include <iostream>
#include "Album.h"
#include "CatalogoMusica.h"
#include "CatalogoStreaming.h"


int main() {
    CatalogoMusica musica;
    CatalogoStreaming streaming;
    musica.cargarBiblioteca();
    streaming.cargarBiblioteca();

    int opcion = -1;
    while (opcion != 0) {
        std::cout << "\n===== MENU PRINCIPAL =====" << std::endl;
        std::cout << "1. Musica" << std::endl;
        std::cout << "2. Peliculas y series (streaming)" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Opcion: ";

        if (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            opcion = -1;
        } else {
            std::cin.ignore(10000, '\n');
        }

        if (opcion == 1) {
            int opMusica = -1;
            while (opMusica != 0) {
                std::cout << "\n--- MUSICA ---" << std::endl;
                std::cout << "1. Buscar por cancion" << std::endl;
                std::cout << "2. Buscar por album" << std::endl;
                std::cout << "3. Buscar por genero" << std::endl;
                std::cout << "4. Buscar por grupo" << std::endl;
                std::cout << "0. Volver" << std::endl;
                std::cout << "Opcion: ";

                if (!(std::cin >> opMusica)) {
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                    opMusica = -1;
                } else {
                    std::cin.ignore(10000, '\n');
                }

                std::string texto;
                if (opMusica == 1) {
                    std::cout << "Cancion: ";
                    std::getline(std::cin, texto);
                    musica.buscarPorCancion(texto);
                } else if (opMusica == 2) {
                    std::cout << "Album: ";
                    std::getline(std::cin, texto);
                    musica.buscarPorAlbum(texto);
                } else if (opMusica == 3) {
                    std::cout << "Genero: ";
                    std::getline(std::cin, texto);
                    musica.buscarPorGenero(texto);
                } else if (opMusica == 4) {
                    std::cout << "Grupo: ";
                    std::getline(std::cin, texto);
                    musica.buscarPorGrupo(texto);
                } else if (opMusica != 0) {
                    std::cout << "Opcion no valida." << std::endl;
                }
            }
        } else if (opcion == 2) {
            int opStreaming = -1;
            while (opStreaming != 0) {
                std::cout << "\n--- STREAMING ---" << std::endl;
                std::cout << "1. Buscar por titulo" << std::endl;
                std::cout << "2. Buscar por genero" << std::endl;
                std::cout << "3. Buscar por calidad (FHD / UHD)" << std::endl;
                std::cout << "4. Alquilar un titulo" << std::endl;
                std::cout << "0. Volver" << std::endl;
                std::cout << "Opcion: ";

                if (!(std::cin >> opStreaming)) {
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                    opStreaming = -1;
                } else {
                    std::cin.ignore(10000, '\n');
                }

                std::string texto;
                if (opStreaming == 1) {
                    std::cout << "Titulo: ";
                    std::getline(std::cin, texto);
                    streaming.buscarPorTitulo(texto);
                } else if (opStreaming == 2) {
                    std::cout << "Genero: ";
                    std::getline(std::cin, texto);
                    streaming.buscarPorGenero(texto);
                } else if (opStreaming == 3) {
                    std::cout << "Calidad: ";
                    std::getline(std::cin, texto);
                    streaming.buscarPorCalidad(texto);
                } else if (opStreaming == 4) {
                    std::cout << "Titulo a alquilar: ";
                    std::getline(std::cin, texto);
                    streaming.alquilar(texto);
                } else if (opStreaming != 0) {
                    std::cout << "Opcion no valida." << std::endl;
                }
            }
        } else if (opcion != 0) {
            std::cout << "Opcion no valida." << std::endl;
        }
    }

    std::cout << "Hasta pronto." << std::endl;
    return 0;
}