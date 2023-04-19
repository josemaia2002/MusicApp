#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

#ifndef LIST_H
#define LIST_H

class List {
    Node* head;
public:
    List(); 
    void insertNode(string titulo, string artista);
    void printList();
    // void deleteNode(int position); 
};

#endif