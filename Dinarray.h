

#ifndef ACTIVIDADCOLABORATIVA3PEL_DINARRAY_H
#define ACTIVIDADCOLABORATIVA3PEL_DINARRAY_H
#include <cstddef>

template <typename T>
class Dinarray
{
private:
    T* data;
    std::size_t size;
    std::size_t capacity;

    Dinarray(const Dinarray&) = delete;
    Dinarray& operator=(const Dinarray&) = delete;

public:
    Dinarray();
    Dinarray(std::size_t capacity);
    ~Dinarray();
    std::size_t array_size();
    bool is_empty();
    T& operator[](std::size_t indice);
    void redimension(std::size_t newSize);
    void insert(T e, int index);
    T eliminar (int index);
    void printDinarray();
};


#endif //ACTIVIDADCOLABORATIVA3PEL_DINARRAY_H
