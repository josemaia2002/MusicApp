#include <iostream>
#include <string>
#include "Musica.h"
#include "Node.h"
#include "List.h"
#include "Playlist.h"
#include "Node.cpp"
#include "List.cpp"

using namespace std;

// TODO Implement list of playlists
int main(){
    string titulo, artista;
    Musica m1;
    List<Musica> l;
    List<Playlist> playlists;
    Playlist p1, p2;

    cout << "Playlist Name:" << endl;
    getline(cin, p1.nome);
    for(int i = 0; i < 2; i++){
        getline(cin, titulo);
        getline(cin, artista);

        m1 = Musica(titulo, artista); // Create a new song;
        Node<Musica>* n = new Node<Musica>(m1); // Create a new node;

        p1.musicas.insertNode(n);
    }

    cout << "Playlist Name:" << endl;
    getline(cin, p2.nome);
    for(int i = 0; i < 2; i++){
        getline(cin, titulo);
        getline(cin, artista);

        m1 = Musica(titulo, artista); // Create a new song;
        Node<Musica>* n1 = new Node<Musica>(m1); // Create a new node;

        p2.musicas.insertNode(n1);
    }

    cout << p1.nome << endl;
    p1.musicas.printList();
    cout << p2.nome << endl;
    p2.musicas.printList();

    
    //Node<Playlist>* nodePlaylist1 = new Node<Playlist>(p1); // Create a new node;
    //playlists.insertNode(nodePlaylist1);

    return 0;
}