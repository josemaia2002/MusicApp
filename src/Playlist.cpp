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

/*
Playlist::Playlist(string nome, List<Musica>& musicas){
    this->nome = nome;
    this->musicas = musicas;
}
*/


void Playlist::printPlaylist(){
    cout << this->nome << endl;
    // this->musicas.printList();
}