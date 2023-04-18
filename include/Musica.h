#include <iostream>
#include <string>

using namespace std;

#ifndef MUSICA_H
#define MUSICA_H

class Musica {

private:
    string titulo;
    string artista;

public:
    Musica();
    Musica(string titulo, string artista);    
    friend ostream &operator<<(ostream &output, const Musica &M);
    friend istream &operator>>(istream  &input, Musica &M);

    string getTitulo();
    void setTitulo(string nome);

    string getArtista();
    void setArtista(string artista);
};

#endif