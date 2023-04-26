#include <iostream>
#include <string>
#include "Musica.h"
#include "Node.h"
#include "List.h"
#include "Node.cpp"
#include "List.cpp"

using namespace std;

int main(){
    string titulo, artista;
    Musica m1;
    List<Musica> l;

    for(int i = 0; i < 5; i++){
        getline (cin, titulo);
        getline (cin, artista);

        m1 = Musica(titulo, artista); // Create a new song;
        Node<Musica>* n = new Node(m1); // Create a new node;

        l.insertNode(n);
    }

    l.printList();
    l.search(3);
    l.search(1);
    l.deleteNode(3);
    l.printList();

    return 0;
}
