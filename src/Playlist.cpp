#include <iostream>
#include <string>
#include "Playlist.h"

using namespace std;

Playlist::Playlist(){
    this->nome = " ";
}

Playlist::Playlist(string nome){
    this->nome = nome;
}


ostream &operator<<(ostream &output, const Playlist &P) { 
    output << "Nome: " << P.nome << endl;
    return output;            
}