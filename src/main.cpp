#include <iostream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

int main(){
    List<Musica> l; // Todas as musicas do sistema
    List<Playlist> playlists; // Todas as playlists do sistema
    Sistema app;

    app.printMenu(l, playlists);

    return 0;
}