#include <iostream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

int main(){
    int index;
    string titulo, artista;
    Musica m1;
    List<Musica> l; // Todas as musicas do sistema
    List<Playlist> playlists;
    Playlist p1, p2, p3;

    Sistema app;

    app.printMenu(l, playlists);

    return 0;
}