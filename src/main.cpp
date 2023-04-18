#include <iostream>
#include <string>
#include "Musica.h"
#include "Node.h"

using namespace std;
  
void printList(Node* n){
    while (n != NULL) {
        cout << n->m << " ";
        n = n->next;

        cout << endl;
    }
}
  
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
  
    head = new Node();
    second = new Node();
    third = new Node();

    Musica m1, m2, m3;

    m1.setTitulo("Fear of the Dark");
    m2.setTitulo("Do It Again");
    m3.setTitulo("Could You Be Loved");

    m1.setArtista("Iron Maiden");
    m2.setArtista("Steely Dan");
    m3.setArtista("Bob Marley");
  
    head->m = m1; 
    head->next = second; 
  
    second->m = m2; 
    second->next = third;
  
    third->m = m3; 
    third->next = NULL;
  
    printList(head);
  
    return 0;
}