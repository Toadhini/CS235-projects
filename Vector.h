//
// Created by owner on 2/6/2023.
//

#ifndef REALVECTOR_VECTOR_H
#define REALVECTOR_VECTOR_H
#include <string>
#include <ostream>

const size_t INITIAL_CAPACITY = 10;
const std::string OUT_OF_RANGE_MESSAGE = "Index provided is out of range";

template <class T>
class Vector{
private:
    int vectSize;
    int vectCap;
    int vectData;

public:
    // constructors and destructor
    Vector(size_t size = INITIAL_CAPACITY){}
    Vector(Vector<T>& other){}
    ~Vector() {}
    // data access
    //const T& operator[] (size_t index) const;
    //T& operator[] (size_t index);
    //const T& at(size_t index) const;
    //T& at(size_t index);
    // state functions
    //bool empty() const;
    //size_t size() const;
    void resize(size_t new_size){}
    //std::string toString() const;
    //friend std::ostream & operator<< (std::ostream & os, Vector<T> & obj); // optional. You may find it handy for testing purposes.
    // adding data
    void push_back(const T& value){}
    void insert(size_t index, const T& value){}
    // removing data
    void pop_back(){}
    void erase(size_t index){}
    // bulk change methods
    void swap(Vector<T>& other){}
    //Vector<T>& operator= (const Vector<T>& other);
    // comparison operators
    //bool operator== (const Vector<T>& other);
};


#endif //REALVECTOR_VECTOR_H
