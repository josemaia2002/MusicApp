#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

template<class T>
Node<T>::Node(){
    next = nullptr;
}

template<class T>
Node<T>::Node(T data){
    this->data = data;

    next = nullptr;
}