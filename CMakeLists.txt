cmake_minimum_required(VERSION 4.3)
project(ActividadColaborativa3PEL)

set(CMAKE_CXX_STANDARD 23)

add_executable(ActividadColaborativa3PEL main.cpp
        Vector.cpp
        Vector.h
        Dinarray.cpp
        Dinarray.h
        CatalogoMusica.cpp
        CatalogoMusica.h
        CatalogoStreaming.cpp
        CatalogoStreaming.h
        Album.cpp
        Album.h
        Pelicula.cpp
        Pelicula.h
        Serie.cpp
        Serie.h
        Titulo.cpp
        Titulo.h
)
