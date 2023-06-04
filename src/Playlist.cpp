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

string Playlist::getNome() {
    return this->nome;
}

void Playlist::setNome(string nome) {
    this->nome = nome;
}

List<Musica>& Playlist::getMusicas() {
    return this->musicas;
}

void Playlist::addSong(Musica& m){
    musicas.insertNode(m);
}

void Playlist::addSong(Playlist &P){
    musicas.addElements(P.getMusicas());
}