//
// Created by Pei on 05/11/2026.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_VECTOR_H
#define ACTIVIDADCOLABORATIVA3PEL_VECTOR_H
#include <cstddef>
#include <iostream>

template <typename T>
class Vector {

private:
    T* v_;
    T* space_;
    T* last_;

public:

    Vector();
    ~Vector();
    Vector(std::size_t cap);
    int vector_size();
    int vector_capacity();
    T* begin();
    T* end_();
    T& at(std::size_t index);
    void push_back(T e);
    std::string toStringVector();

};


#endif //ACTIVIDADCOLABORATIVA3PEL_VECTOR_H
