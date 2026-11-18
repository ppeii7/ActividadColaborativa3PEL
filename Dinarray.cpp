//
// Created by rodri on 26/10/2026. Corregido para el proyecto AC3.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_DINARRAY_CPP
#define ACTIVIDADCOLABORATIVA3PEL_DINARRAY_CPP

#include "Dinarray.h"

#include <iostream>
#include <ostream>

template <typename T>
Dinarray<T>::Dinarray(){
    this->data=nullptr; // inicializo el puntero como nulo
    this->size=0; // El indice actual es 0
    this->capacity=0; // El array tiene tamaño 0 de momento
}

template <typename T>
Dinarray<T>::Dinarray(std::size_t cap){
    this->data=new T[cap]; // declaro el puntero a un array de tamaño cap
    this->size=0; // El indice actual sera 0
    this->capacity=cap; // El tamaño inicial del array sera cap
}

template <typename T>
Dinarray<T>::~Dinarray(){
    delete[] this->data; // Libero la memoria del array
}

template <typename T>
std::size_t Dinarray<T>::array_size(){
    return this->size; // Devuelvo el indice actual / size
}

template <typename T>
bool Dinarray<T>::is_empty(){
    return this->size==0; // Devuelvo un booleano que comprueba si el indice actual es 0
}

template <typename T>
T Dinarray<T>::at(int index){
    if (index < 0 || static_cast<std::size_t>(index) >= this->size){ // Indice fuera de rango
        std::cout << "ERROR AT DINARRAY" << std::endl;
        return T(); // Devuelvo un valor por defecto (nullptr si T es un puntero)
    }
    return this->data[index]; // Devuelvo el valor guardado en esa posicion
}

template <typename T>
void Dinarray<T>::redimension(std::size_t newCapacity){
    if (newCapacity < this->size){ // No se puede perder elementos ya guardados
        std::cout << "ERROR REDIMENSION DINARRAY" << std::endl;
    }else{
        T* aux = new T[newCapacity]; // Creo un puntero temporal
        for (std::size_t i=0; i<this->size; i++){
            aux[i]=this->data[i]; // Copio los valores del array original al temporal
        }
        delete[] this->data; // Borro el array original
        this->data = aux; // Igualo el puntero data al temporal
        this->capacity = newCapacity;
    }
}

template <typename T>
void Dinarray<T>::insert(T elemento, int posicion) {
    if (posicion >= 0 && static_cast<std::size_t>(posicion) <= this->size) { // Posicion valida (se puede insertar al final)
        if (this->size == this->capacity) { // si el indice actual es igual al tamaño maximo
            redimension(this->capacity*2+1); // Redimensiono la capacidad al doble
        }
        for (std::size_t i = this->size; i > static_cast<std::size_t>(posicion); i--) {
            this->data[i] = this->data[i - 1]; // Muevo todos los valores una posicion
        }
        this->data[posicion] = elemento; // Guardo el elemento en la posicion dada
        ++this->size; // Sumo 1 al indice actual
    } else {
        std::cout << "ERROR INSERT DINARRAY" << std::endl;
    }
}

template <typename T>
T Dinarray<T>::eliminar(int index) {
    if (index < 0 || static_cast<std::size_t>(index) >= this->size) { // Indice fuera de rango
        std::cout << "ERROR ELIMINAR DINARRAY" << std::endl;
        return T();
    }
    T aux = this->data[index]; // Guardo el valor que voy a eliminar
    this->size--;
    for (std::size_t i = index; i < this->size; i++) {
        this->data[i] = this->data[i + 1]; // Muevo todos los valores despues del eliminado una posicion
    }
    return aux; // Devuelvo el valor eliminado
}

template<typename T>
void Dinarray<T>::printDinarray() {
    for (std::size_t i=0; i < this->size; i++) {
        std::cout << this->data[i] << "  "; // Imprimo todos los valores del dinarray
    }
    std::cout << std::endl; // Hago un salto de linea al final
}

#endif //ACTIVIDADCOLABORATIVA3PEL_DINARRAY_CPP
