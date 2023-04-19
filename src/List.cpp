#include <iostream>
#include <string>
#include "List.h"

using namespace std;

List::List(){
    head = NULL;
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
