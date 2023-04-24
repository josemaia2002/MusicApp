#include <iostream>
#include <string>
#include "List.h"

using namespace std;

List::List(){
    head = NULL;
    tail = NULL;
    size = 1;
}

List::~List(){
    cout << "List destroyed!" << endl;
}

void List::insertNode(string titulo, string artista){
    Node* n = new Node(titulo, artista); // Create a new node;

    // Insert at the beginning if head is pointing to NULL
    if(head == NULL) {
        head = n;
        return;
    }

    // Traverse the whole list
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next; // Stepping to the next node of the list
    }

    // Insert the node at the last
    temp->next = n;

    size++; // Increase the list size

}

void List::search(int index){
    int i = 0;
    if(index > size)
        cout << "Out of bounds!" << endl;
    else{
        
        Node* temp = head;
        // Traverse the list untill the the desired index is found
        while(i < (index-1)){
            temp = temp->next; // Stepping to the next node of the list
            i++;
        }

        cout << temp->m << " " << endl;
    }
}

void List::printList(){
    Node* temp = head;

    // Check if the Linked list is empty
    if(head == NULL)
        return;

    // Traverse the list
    while(temp != NULL){
        cout << temp->m << " ";
        temp = temp->next;
        cout << endl;
    }
}
