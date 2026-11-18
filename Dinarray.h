//
// Dinarray<T>: array dinamico con puntero, tamaño y capacidad explicitos.
// Basado en la clase hecha en clase (Created by rodri on 26/10/2026).
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_DINARRAY_H
#define ACTIVIDADCOLABORATIVA3PEL_DINARRAY_H
#include <cstddef>

template <typename T>
class Dinarray
{
private:
    T* data; // Puntero donde guardare los datos
    std::size_t size; // indice actual del array (numero de elementos)
    std::size_t capacity; // tamaño total del array

    Dinarray(const Dinarray&) = delete; // evita copias (doble delete[])
    Dinarray& operator=(const Dinarray&) = delete;

public:
    Dinarray(); // Constructor vacio
    Dinarray(std::size_t capacity); // Constructor indicando el tamano inicial
    ~Dinarray(); // Destructor: libera el array
    std::size_t array_size(); // Funcion que devuelve el indice actual
    bool is_empty(); // Funcion que comprueba si el array esta vacio
    T at(int index); // Funcion que devuelve el valor que haya en el indice escrito
    void redimension(std::size_t newSize); // Funcion para redimensionar el array
    void insert(T e, int index); // Funcion para insertar un dato en cierta posicion
    T eliminar (int index); // Funcion para eliminar un valor en cierta posicion
    void printDinarray(); // Funcion para imprimir el dinarray
};

// Al ser plantilla, el codigo debe ser visible para quien use la clase.
#include "Dinarray.cpp"

#endif //ACTIVIDADCOLABORATIVA3PEL_DINARRAY_H
