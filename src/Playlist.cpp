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

Playlist Playlist::operator+(Playlist &P){
    Playlist output;
    output.addSong(*this);

    int play_size = P.getMusicas().size;
    int count = 0;

    Node<Musica>* n1;

    for(int i = 1; i <= play_size; i++){
        n1 = P.getMusicas().search(i);

        if(musicas.find(n1->data) == 0)
            output.addSong(n1->data);
    }

    return output;
}

Playlist Playlist::operator+(Musica &m){
    Playlist output;
    output.addSong(*this);
    output.addSong(m);
    
    return output;
}

Playlist Playlist::operator-(Playlist &P){
    Playlist output;

    int play_size = this->getMusicas().size;
    int count = 0;

    Node<Musica>* n1;

    for(int i = 1; i <= play_size; i++){
        n1 = this->getMusicas().search(i);

        if(P.getMusicas().find(n1->data) == 0)
            output.addSong(n1->data);
    }

    return output;
}

Playlist Playlist::operator-(Musica &m){
    Playlist output;
    output.addSong(*this);
    output.removeSong(m);

    return output;
}

void Playlist::operator<<(Musica &m){
    addSong(m);
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