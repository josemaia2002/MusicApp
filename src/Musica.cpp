#include <iostream>
#include "Musica.h"
#include <string>

using namespace std;

Musica::Musica() {
    this->titulo = " ";
    this->artista = " ";
}

Musica::Musica(string titulo, string artista) {
    this->titulo = titulo;
    this->artista = artista;
}

ostream &operator<<( ostream &output, const Musica &M ) { 
    output << "titulo: " << M.titulo << "; artista: " << M.artista;
    return output;            
}

istream &operator>>( istream  &input, Musica &M ) { 
    input >> M.titulo >> M.artista;
    return input;            
}

string Musica::getTitulo() {
    return this->titulo;
}

void Musica::setTitulo(string titulo) {
    this->titulo = titulo;
}

string Musica::getArtista() {
    return this->artista;
}

void Musica::setArtista(string artista) {
    this->artista = artista;
}