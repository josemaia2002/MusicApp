#include <iostream>
#include <string>
#include "Musica.h"

using namespace std;

#ifndef NODE_H
#define NODE_H

/**
 * \brief Represents a node.
 * 
 * This is a template class that represents a generic node of a linked list.
 * It contains the data of the node and the link to the next node.
 */
template<class T>
class Node {

public:
    /**
     * \brief The node's data.
     * 
     * Represents the node's data. It is set by the constructor
     * and may contain any data type, as long as it is specified. 
     */
    T data;

    /**
     * \brief The node's pointer.
     * 
     * Represents the node's pointer to the next node. It is used to
     * link the elements of a linked list, with each node pointing
     * to the next one.
     */
    Node<T>* next;

    /**
     * \brief Creates a new Node.
     * 
     * Creates a new Node and sets it to point to NULL.
     */
    Node();

    /**
     * \brief Creates a new Node.
     * 
     * Creates a new Node and sets its data field with the generic
     * parameter and makes it points to NULL.
     * 
     * \param data The node's value.
     */
    Node(const T &data);
};

#endif