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

Playlist::Playlist(Playlist& P){
    nome = P.nome;
    musicas.addElements(P.getMusicas());
}

ostream &operator<<(ostream &output, const Playlist &P) { 
    output << "Nome: " << P.nome << endl;
    return output;            
}

void Playlist::addSong(Musica& m){
    musicas.insertNode(m);
}

void Playlist::removeSong(Musica& m){
    int target_pos = musicas.find(m);
    musicas.deleteNode(target_pos);
}

void Playlist::addSong(Playlist &P){
    musicas.addElements(P.getMusicas());
}

void Playlist::removeSong(Playlist &P){
    musicas.removeElements(P.getMusicas());
}

List<Musica>& Playlist::getMusicas() {
    return this->musicas;
}

string Playlist::getNome() {
    return this->nome;
}

void Playlist::setNome(string nome) {
    this->nome = nome;
}