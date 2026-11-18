//
// Created by Pei on 05/11/2026.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_VECTOR_H
#define ACTIVIDADCOLABORATIVA3PEL_VECTOR_H
#include <cstddef>
#include <string>


template <typename T>
class Vector{

private:
    T* v;
    T* space;
    T* last;
public:


    Vector();
    ~Vector();
    Vector(const Vector&) = delete;
    Vector& operator=(const Vector&) = delete;
    std::size_t vector_size();
    std::size_t vector_capacity();
    T& begin();
    T& end();
    void push_back(const T& nuevo);
    T& operator[](std::size_t indice);
    std::string toStringVector();
};

#include "Vector.cpp"
#endif //ACTIVIDADCOLABORATIVA3PEL_VECTOR_H
