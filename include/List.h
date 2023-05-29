#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

#ifndef LIST_H
#define LIST_H

/**
 * \brief Represents a linked list.
 * 
 * This is a template class that represents a linked list
 * composed of generic type nodes. 
 */
template<class T>
class List {
public:  
    /**
     * \brief The head of the list.
     * 
     * Represents the linked list first node.
     * It is linked to the next element, which is then 
     * linked to its successor until the end of the list.
     */  
    Node<T>* head;

    /**
     * \brief The tail of the list.
     * 
     * Represents the linked list last node.
     * The previous node is linked to it, while the tail
     * is pointing to NULL.
     */ 
    Node<T>* tail;

    /**
     * \brief The list size.
     * 
     * Represents the linked list
     * size i.e. its number of elements.
     */  
    int size;
public:
    /**
     * \brief Creates a new List.
     * 
     * Creates a new List and sets the head
     * and the tail to point to NULL, and sets
     * the size to zero, i.e. an empty list.
     */
    List(); 

    /**
     * \brief Insert a Node in the list.
     * 
     * Creates a new Node of a specified type
     * and inserts the Node at the end of the list.
     * 
     * \param value The data that's going to be used 
     * to create a new node.
     */
    void insertNode(const T &value); 

    /**
     * \brief Prints all the nodes of the list.
     * 
     * Traverse the linked list accessing the
     * data field of each node and printing it.
     */
    void printList();

    /**
     * \brief Search for a Node.
     * 
     * Traverse the linked list untill the desired
     * index is reached, and then returns the found Node.
     * 
     * \param index The location of the node inside of the list.
     * 
     * \return The Node that is located at the specified index.
     */
    Node<T>* search(int index);

    /**
     * \brief Delete a Node.
     * 
     * Traverse the linked list untill the specified position, 
     * and then deletes the Node.
     * 
     * \param position The location of the node that
     * must be deleted.
     */
    void deleteNode(int position); 

    ~List();
};

#endif