#include <iostream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

int main(){
    List<Musica> l, l2, l3; // Todas as musicas do sistema
    List<Playlist> playlists; // Todas as playlists do sistema
    Sistema app;


    List<Musica> teste; // Teste

    // app.printMenu(l, playlists);




    Musica m1("Pedrada", "Chico Cesar");
    Musica m2("Converter", "Mega Drive");
    Musica m3("Toxic", "Britney Spears");

    Musica m4("Borderline", "Tame Impala");
    Musica m5("Shape of You", "Ed Sheeran");
    Musica m6("Bad Romance", "Lady Gaga");

    Musica m7("Michelle", "Beatles");
    Musica m8("Lucy in the Sky with Diamonds", "Beatles");
    Musica m9("Help!", "Beatles");

    l2.insertNode(m4);
    l2.insertNode(m5);
    l2.insertNode(m6);


    l3.insertNode(m7);
    l3.insertNode(m8);
    l3.insertNode(m9);

    Playlist p1;
    Playlist p2;

    p1.setNome("Reggae");
    p2.setNome("Eletronic");

    playlists.insertNode(p1);
    playlists.insertNode(p2);

    l.insertNode(m1);
    l.insertNode(m2);

    l.insertNode(m3);


    playlists.search(1)->data.getMusicas().insertNode(l.search(1)->data);
    playlists.search(2)->data.getMusicas().insertNode(l.search(2)->data);

    cout << playlists.search(1)->data.getNome() << endl;
    playlists.search(1)->data.getMusicas().printList();

    cout << playlists.search(2)->data.getNome() << endl;
    playlists.search(2)->data.getMusicas().printList();



    cout << "#############################" << endl;



    l2.addElements(l);
    l2.printList();

    cout << "#############################" << endl;

    l2.addElements(l3);
    l2.printList();

    return 0;
}