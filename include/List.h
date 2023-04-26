#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

#ifndef LIST_H
#define LIST_H

// TODO convert to template
class List {
public:    
    Node* head;
    Node* tail;
    int size;
public:
    List(); 
    ~List();
    void insertNode(Node* n); 
    void printList();
    void search(int index);
    void deleteNode(int position); 
};

#endif