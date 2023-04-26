#include <iostream>
#include <string>
#include "Musica.h"

using namespace std;

#ifndef NODE_H
#define NODE_H

template<class T>
class Node {

public:
    T data;
    Node* next;

    Node(); // Default constructor
    Node(T data); // Specific constructor
};

#endif