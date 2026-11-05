//
// Created by Pei on 05/11/2026.
//

#ifndef ACTIVIDADCOLABORATIVA3PEL_VECTOR_H
#define ACTIVIDADCOLABORATIVA3PEL_VECTOR_H
#include <cstddef>


template <typename T>
class Vector{

private:
    T* v;
    T* space;
    T* last;
public:

    Vector();
    std::size_t vector_size();
    std::size_t vector_capacity();
    T begin();
    T end();
    void push_back(T nuevo);

};
#endif //ACTIVIDADCOLABORATIVA3PEL_VECTOR_H
