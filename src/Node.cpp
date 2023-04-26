#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

Node::Node(){
    next = nullptr;
}

Node::Node(Musica musica){
    m = musica;

    next = nullptr;
}