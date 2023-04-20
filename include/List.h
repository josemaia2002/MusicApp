#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

#ifndef LIST_H
#define LIST_H

// TODO convert to template
class List {
    Node* head;
    // TODO create the tail pointer
    // TODO create the size variable
public:
    //TODO implement the search function
    List(); 
    // TODO implement destructor
    void insertNode(string titulo, string artista); // TODO update the insert function
    void printList();
    // void deleteNode(int position); 
};

#endif