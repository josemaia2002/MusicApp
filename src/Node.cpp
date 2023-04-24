#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

Node::Node(){
    m.setTitulo(" ");
    m.setArtista(" ");

    next = nullptr;
}

Node::Node(string titulo, string artista){
    m.setTitulo(titulo);
    m.setArtista(artista);

    next = nullptr;
}