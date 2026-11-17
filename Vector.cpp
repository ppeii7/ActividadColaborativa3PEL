//
// Created by Pei on 05/11/2026.
//

#include "Vector.h"

template <typename T>
Vector<T>::Vector() {
    v = nullptr;
    space = nullptr;
    last = nullptr;
}

template <typename T>
Vector<T>::~Vector() {
    delete[] v;
}

template <typename T>
size_t Vector<T>::vector_size() {
    return space - v;
}

template <typename T>
std::size_t Vector<T>:: vector_capacity() {
    return last - v;
}

template <typename T>
T& Vector<T>:: begin() {
    return *v;
}

template <typename T>
T& Vector<T>::end() {
    return *(space-1);
}

template <typename T>
void Vector<T>:: push_back(T& nuevo) {

    if (space == last) {
        if (last != nullptr) {
            size_t newCapacity = (last - v)*2;
            T* new_v = new T[newCapacity];
            for (std::size_t i = 0; i < last - v; i++) {
                new_v[i] = v[i];
            }
            last = new_v+ newCapacity;
            space = new_v+(space-v);
            delete[] v;
            v = new_v;
        }else {
            v = new T[2];
            space = v;
            last = v+2;
        }
    }
    *space = nuevo;
    space++;
}

template <typename T>
T& Vector<T>:: operator[](size_t indice) {
    return v[indice];
}