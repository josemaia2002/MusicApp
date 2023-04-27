#include <iostream>
#include <string>
#include "Musica.h"
#include "Node.h"
#include "List.h"
#include "Playlist.h"
#include "Node.cpp"
#include "List.cpp"

using namespace std;

int main(){
    string titulo, artista;
    Musica m1;
    List<Musica> l;
    List<Playlist> playlists;
    Playlist mpb, rock;

    for(int i = 0; i < 2; i++){
        getline (cin, titulo);
        getline (cin, artista);

        m1 = Musica(titulo, artista); // Create a new song;
        Node<Musica>* n = new Node(m1); // Create a new node;

        mpb.musicas.insertNode(n);
    }

    for(int i = 0; i < 2; i++){
        getline (cin, titulo);
        getline (cin, artista);

        m1 = Musica(titulo, artista); // Create a new song;
        Node<Musica>* n1 = new Node(m1); // Create a new node;

        rock.musicas.insertNode(n1);
    }

    Node<Playlist>* nodePlaylist1 = new Node(mpb); // Create a new node;
    Node<Playlist>* nodePlaylist2 = new Node(rock); // Create a new node;

    playlists.insertNode(nodePlaylist1);
    playlists.insertNode(nodePlaylist2);


    cout << "Playlist de MPB" << endl;
    mpb.musicas.printList();
    cout << "_____________________________" << endl;
    cout << "Playlist de Rock" << endl;
    rock.musicas.printList();
    cout << "_____________________________" << endl;

    cout << "Lista de playlists" << endl;
    playlists.printList();


    return 0;
}



/*
    l.printList();
    l.search(3);
    l.search(1);
    l.deleteNode(3);
    l.printList();
*/