#include <iostream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

int main(){
    List<Musica> l, l2, l3; // Todas as musicas do sistema
    List<Playlist> playlists; // Todas as playlists do sistema
    Sistema app;

    Musica m1("Pedrada", "Chico Cesar");
    Musica m2("Converter", "Mega Drive");
    Musica m3("Toxic", "Britney Spears");

    Musica m4("Borderline", "Tame Impala");
    Musica m5("Shape of You", "Ed Sheeran");
    Musica m6("Bad Romance", "Lady Gaga");

    Musica m7("Michelle", "Beatles");
    Musica m8("Lucy in the Sky with Diamonds", "Beatles");
    Musica m9("Help!", "Beatles");

    l.insertNode(m1);
    l.insertNode(m2);
    l.insertNode(m3);

    l2.insertNode(m4);
    l2.insertNode(m5);
    l2.insertNode(m6);

    l3.insertNode(m7);
    l3.insertNode(m8);
    l3.insertNode(m9);

    l.printList();

    cout << "#############################" << endl;

    l.addElements(l2);
    l.printList();

    cout << "#############################" << endl;

    l.addElements(l3);
    l.printList();

    cout << "#############################" << endl;

    l.removeElements(l3);

    cout << "#############################" << endl;
    // int target_pos = l.find(m3);
    // cout << target_pos << endl;


    // l.deleteNode(target_pos);
    l.printList();
    cout << "#############################" << endl;
    cout << "#############################" << endl;
    List<Musica> l5 = l2 + l3;
    l5.printList();

}


/*
    List<Musica> l; // Todas as musicas do sistema
    List<Playlist> playlists; // Todas as playlists do sistema
    Sistema app;

    // app.printMenu(l, playlists);



    return 0;

*/    