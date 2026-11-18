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
    this->data=nullptr;
    this->size=0;
    this->capacity=0;
}

template <typename T>
Dinarray<T>::Dinarray(std::size_t cap){
    this->data=new T[cap];
    this->size=0;
    this->capacity=cap;
}

template <typename T>
Dinarray<T>::~Dinarray(){
    delete[] this->data;
}

template <typename T>
std::size_t Dinarray<T>::array_size(){
    return this->size;
}

template <typename T>
bool Dinarray<T>::is_empty(){
    return this->size==0;
}

template <typename T>
T& Dinarray<T>:: operator[](size_t indice) {
    return data[indice];
}

template <typename T>
void Dinarray<T>::redimension(std::size_t newCapacity){
    if (newCapacity < this->size){
        std::cout << "ERROR REDIMENSION DINARRAY" << std::endl;
    }else{
        T* aux = new T[newCapacity];
        for (std::size_t i=0; i<this->size; i++){
            aux[i]=this->data[i];
        }
        delete[] this->data;
        this->data = aux;
        this->capacity = newCapacity;
    }
}

template <typename T>
void Dinarray<T>::insert(T elemento, int posicion) {
    if (posicion >= 0 && static_cast<std::size_t>(posicion) <= this->size) {
        if (this->size == this->capacity) {
            redimension(this->capacity*2+1);
        }
        for (std::size_t i = this->size; i > static_cast<std::size_t>(posicion); i--) {
            this->data[i] = this->data[i - 1];
        }
        this->data[posicion] = elemento;
        ++this->size;
    } else {
        std::cout << "ERROR INSERT DINARRAY" << std::endl;
    }
}

template <typename T>
T Dinarray<T>::eliminar(int index) {
    T aux = T();
    if (index < 0 || static_cast<std::size_t>(index) >= this->size) {
        std::cout << "ERROR ELIMINAR DINARRAY" << std::endl;
    } else {
        aux = this->data[index];
        this->size--;
        for (std::size_t i = index; i < this->size; i++) {
            this->data[i] = this->data[i + 1];
        }
    }
    return aux;
}

template<typename T>
void Dinarray<T>::printDinarray() {
    for (std::size_t i=0; i < this->size; i++) {
        std::cout << this->data[i] << "  ";
    }
    std::cout << std::endl;
}

#endif //ACTIVIDADCOLABORATIVA3PEL_DINARRAY_CPP
