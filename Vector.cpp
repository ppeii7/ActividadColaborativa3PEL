//
// Created by jadel on 03/11/2026.
//

#include "Vector.h"
#include <iostream>

template<typename T>
Vector<T>::Vector() {
    v_ = nullptr;
    space_ = nullptr;
    last_ = nullptr;

}

template <typename T>
Vector<T>::~Vector() {
    delete [] v_ ;
    v_ = nullptr ;
    space_ = nullptr;
    last_ = nullptr;
}

template<typename T>
int Vector<T>::vector_size() {
    return space_ - v_ ;
}

template<typename T>
int Vector<T>::vector_capacity() {
    return last_ - v_ ;
}

template<typename T>
T* Vector<T>::begin() {
    return v_ ;
}

template<typename T>
T* Vector<T>::end_() {
    return space_ ;
}

template <typename T>
T& Vector<T>::at(size_t index) {
    if (index > vector_size() || index == 0) {
        throw std::out_of_range("INDICE INVALIDO");
    }
    return v_[index-1];
}

template<typename T>
void Vector<T>::push_back(T x) {
    if (v_ == nullptr) {
        v_ = new T[2] ;
        space_ = v_ ;
        last_ = v_+2 ;
    } else if (space_ == last_) {
        int cap = vector_capacity() ;
        int newCap = cap*2;
        T* aux = new T[newCap] ;
        for (int i = 0 ; i < cap ; i++) {
            aux[i] = v_[i] ;
        }
        delete [] v_ ;
        v_ = aux ;
        space_ = v_+cap ;
        last_ =  v_+newCap;
    }
    v_[int(vector_size())] = x ;
    space_+=1;
}

template<typename T>
std::string Vector<T>::toStringVector() {
    std::string s = "" ;
    for (int i = 0 ; i < vector_size() ; i++) {
        s += v_[i] + " " ;
    }
    return s ;
}
