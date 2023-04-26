#include <iostream>
#include <string>

using namespace std;

#ifndef PLAYLIST_H
#define PLAYLIST_H

// TODO Add the List
class Playlist {
public:
    string nome;
    //List<Musica> musicas;

    Playlist();
    Playlist(string nome);
    //Playlist(string nome, List<Musica>& musicas);
    void printPlaylist();
};

#endif