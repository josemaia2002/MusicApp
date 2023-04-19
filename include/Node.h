#include <iostream>
#include <string>
#include "Musica.h"

using namespace std;

#ifndef NODE_H
#define NODE_H

class Node {

public:
    Musica m;
    Node* next;

    Node(); // Default constructor
    Node(string titulo, string artista); // Specific constructor
};

#endif