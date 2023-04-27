#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

#ifndef LIST_H
#define LIST_H

template<class T>
class List {
public:    
    Node<T>* head;
    Node<T>* tail;
    int size;
public:
    List(); 
    ~List();
    void insertNode(T param); 
    void printList();
    Node<T>* search(int index);
    void deleteNode(int position); 
};

#endif