#include <iostream>
#include <string>
#include "List.h"

using namespace std;

#ifndef PLAYLIST_H
#define PLAYLIST_H

// TODO Add the List
class Playlist {
public:
    string nome;
    List<Musica> musicas;

    Playlist();
    Playlist(string nome);

    friend ostream &operator<<(ostream &output, const Playlist &P);
};

#endif