#include <iostream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

int main(){
    List<Musica> l, l2, l3; // Todas as musicas do sistema
    List<Playlist> playlists; // Todas as playlists do sistema
    Sistema app;

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

    l.insertNode(m1);
    l.insertNode(m2);
    l.insertNode(m3);

    l2.insertNode(m4);
    l2.insertNode(m5);
    l2.insertNode(m6);

    l3.insertNode(m7);
    l3.insertNode(m8);
    l3.insertNode(m9);


    cout << "Testes" << endl;
    l.printList();
    cout << "########################" << endl;

    Node<Musica>* n = new Node<Musica>();

    l2 >> n;

    l << n;
    l.printList();


    cout << "########################" << endl;
    cout << "########################" << endl;


    Playlist p1, p2, p3;

    p1.addSong(m9);
    p1.addSong(m8);
    p1.addSong(m7);

    p2.addSong(m6);
    p2.addSong(m5);
    p2.addSong(m4);

    p3.addSong(m3);
    p3.addSong(m2);
    p3.addSong(m1);

    cout << "########################" << endl;
    cout << "########################" << endl;

    Playlist p4 = p3;
    p4.getMusicas().printList();
}