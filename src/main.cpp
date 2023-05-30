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


/*

    Musica m1("Pedrada", "Chico Cesar");
    Musica m2("Converter", "Mega Drive");

    Playlist p1;
    Playlist p2;

    p1.setNome("Reggae");
    p2.setNome("Eletronic");

    playlists.insertNode(p1);
    playlists.insertNode(p2);

    l.insertNode(m1);
    l.insertNode(m2);


    playlists.search(1)->data.getMusicas().insertNode(l.search(1)->data);
    playlists.search(2)->data.getMusicas().insertNode(l.search(2)->data);

    cout << playlists.search(1)->data.getNome() << endl;
    playlists.search(1)->data.getMusicas().printList();

    cout << playlists.search(2)->data.getNome() << endl;
    playlists.search(2)->data.getMusicas().printList();


*/




    return 0;
}