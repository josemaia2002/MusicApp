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
    List(){
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    /**
     * \brief Copy constructor
     * 
     * Initializes the list by copying the 
     * atributes of the object received by 
     * reference as a parameter.
     * 
     * \param L The list that will be copied.
     */
    List(const List& L){
        if(L.head == NULL) {
            head = tail = NULL;
            return;
        }

        Node<T>* temp = L.head;

        while(temp != NULL) {
            Node<T>* newNode = new Node<T>(temp->data);

            if(head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
            temp = temp->next;
        }

        size = L.size;
    }

    /**
     * \brief Insert a Node in the list.
     * 
     * Creates a new Node of a specified type
     * and inserts the Node at the end of the list.
     * 
     * \param value The data that's going to be used 
     * to create a new node.
     */
    void insertNode(const T &value){
        Node<T>* n = new Node<T>(value); // Create a new node;

        // Insert at the beginning if head is pointing to nullptr
        if(head == nullptr) {
            head = n;
            tail = n;
            size++;
            return;
        }

        // Insert the node at the tail
        tail->next = n;
        tail = n;

        size++; // Increase the list size
    }

    /**
     * \brief Prints all the nodes of the list.
     * 
     * Traverse the linked list accessing the
     * data field of each node and printing it.
     */
    void printList(){
        Node<T>* temp = head;

        // Check if the Linked list is empty
        if(head == nullptr){
            cout << "Hello hello" << endl;
            return;
        }

        // Traverse the list
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
            cout << endl;
        }
    }

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
    Node<T>* search(int index){
        int i = 0;
        if(index > size){
            cout << "Out of bounds!" << endl;
            //return;
        }

        Node<T>* temp = head;
        // Traverse the list untill the the desired index is found
        while(i < (index-1)){
            temp = temp->next; // Stepping to the next node of the list
            i++;
        }

        return temp;
    }

    /**
     * \brief Search for a specific value.
     * 
     * This function receives a value from a generic
     * data type, and traverse the linked list, and if 
     * the value is found, then the index where it was located
     * will be returned.
     * 
     * \param value The data that is being searched.
     * 
     * \return The position where the target was found.
     */
    int find(T &value){
        int position = 1;

        Node<T>* temp = head;

        // Check if the Linked list is empty
        if(head == nullptr)
            return 0;

        // Traverse the list
        while(temp != nullptr){
            if(temp->data.getTitulo() == value.getTitulo())
                return position;

            temp = temp->next;
            position++;
        }

        return 0;
    }

    /**
     * \brief Delete a Node.
     * 
     * Traverse the linked list untill the specified position, 
     * and then deletes the Node.
     * 
     * \param position The location of the node that
     * must be deleted.
     */
    void deleteNode(int position){
        if(head == nullptr){
            cout << "Empty list!!" << endl;
            return;
        }

        if(position > size){
            cout << "Out of bounds!" << endl;
            return;
        }

        Node<T>* temp = head;
        Node<T>* temp2 = nullptr;

        // Delete the head
        if(position == 1){
            head = head->next; // Head receives the pointer to its successor
            delete temp; // The pointer that stores the old head is deleted
            size--;
            return;
        }

        // Traverse the list untill the the desired index is found
        while(position > 1 ){
            temp2 = temp;
            temp = temp->next;
            
            position--;
        }

        temp2->next = temp->next;
        delete temp;

        size--; // Decrease the list size
    }

    /**
     * \brief Add a list to the current list.
     * 
     * It receives a list, traverse it and inserts
     * each of its elements in the current list.
     * 
     * \param L The list whose elements will be added.
     */
    void addElements(List<Musica>& L){
        // Creates a temp node that stores the head of the received linked list    
        Node<T>* temp = L.head;

        // Traverse the received list and insert its elements in the current list
        while(temp != nullptr){
            insertNode(temp->data);
            temp = temp->next;
        }
    }

    /**
     * \brief Remove a list of elements from the current list.
     * 
     * It receives a list, traverse it and for each of its
     * elements, the function search for them inside the current list,
     * and deletes all of them.
     * 
     * \param L The list whose elements will be searched and
     * deleted from the current list.
     */
    void removeElements(List<Musica>& L){
        // Creates a temp node that stores the head of the received linked list    
        Node<T>* temp = L.head;

        // Traverse the received list and insert its elements in the current list
        while(temp != nullptr){
            cout << "This a test: " << temp->data << endl;

            int target_pos = find(temp->data);
            deleteNode(target_pos);

            temp = temp->next;
        }
    }

    /**
     * \brief Overloads the + operator.
     * 
     * Specifies the behavior of the + operator
     * when dealing with a list. It is going to 
     * create a linked list, and it will receive
     * the elements of two linked lists, and then 
     * the result list will be returned.
     * 
     * \param l1 The list that will be concatenated.
     */
    List operator+(List<Musica>& l1){
        List<Musica> output;
        output.addElements(*this);
        output.addElements(l1);
        return output;
    }

    ~List(){
         Node<T>* temp = head;

        // Traverse the list deleting each node
        while(temp != nullptr){
            Node<T>* temp2 = temp;
            temp = temp->next;
            delete temp2;
        }
    }
};

#endif