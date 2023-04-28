#include <iostream>
#include <string>
#include "List.h"

using namespace std;

template<class T>
List<T>::List(){
    head = nullptr;
    tail = nullptr;
    size = 0;
}

/*
template<class T>
List<T>::~List(){
    Node<T>* temp = head;

    // Traverse the list deleting each node
    while(temp != nullptr){
        Node<T>* temp2 = temp;
        temp = temp->next;
        delete temp2;
    }
}
*/

template<class T>
void List<T>::insertNode(const T &param){
    Node<T>* n = new Node<T>(param); // Create a new node;

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

template<class T>
Node<T>* List<T>::search(int index){
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

template<class T>
void List<T>::printList(){
    Node<T>* temp = head;

    // Check if the Linked list is empty
    if(head == nullptr)
        return;

    // Traverse the list
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
        cout << endl;
    }
}

template<class T>
void List<T>::deleteNode(int position){
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