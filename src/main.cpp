#include <iostream>
#include <string>
#include <vector>
#include "Musica.h"
#include "Node.h"
#include "List.h"
#include "Playlist.h"
#include "Node.cpp"
#include "List.cpp"

using namespace std;

// TODO Implement list of playlists
int main(){
    int index;
    string titulo, artista;
    Musica m1;
    List<Musica> l;
    // List<Playlist> playlists;
    Playlist p1, p2, p3;

    cout << "Playlist Name:" << endl;
    getline(cin, p1.nome);
    for(int i = 0; i < 2; i++){
        getline(cin, titulo);
        getline(cin, artista);

        m1 = Musica(titulo, artista); // Create a new song;
        p1.musicas.insertNode(m1);
    }

    cout << "Playlist Name:" << endl;
    getline(cin, p2.nome);
    for(int i = 0; i < 2; i++){
        getline(cin, titulo);
        getline(cin, artista);

        m1 = Musica(titulo, artista); // Create a new song;
        p2.musicas.insertNode(m1);
    }

    cout << "Playlist Name:" << endl;
    getline(cin, p3.nome);
    for(int i = 0; i < 2; i++){
        getline(cin, titulo);
        getline(cin, artista);

        m1 = Musica(titulo, artista); // Create a new song;
        p3.musicas.insertNode(m1);
    }

    cout << endl << "_________________________________" << endl;
    cout << "Playlists" << endl;

    cout << p1.nome << endl;
    p1.musicas.printList();

    cout << "_________________________________" << endl;

    cout << p2.nome << endl;
    p2.musicas.printList();

    cout << "_________________________________" << endl;

    cout << p3.nome << endl;
    p3.musicas.printList();


    cout << "Search a song by the index:" << endl;
    cin >> index;
    cout << p2.musicas.search(index)->data;

    l.insertNode(m1);
    l.printList();


    List<int> playlists;

    Node<int>* first = nullptr;
    Node<int>* second = nullptr;

    first = new Node<int>();
    second = new Node<int>();

    first->data = 13; 
    first->next = second; 

    second->data = 7; 
    second->next = nullptr;

    playlists.head = first;

    playlists.printList();





    List<Playlist> plays;

    Node<Playlist>* firstP = nullptr;
    Node<Playlist>* secondP = nullptr;
    Node<Playlist>* thirdP = nullptr;

    firstP = new Node<Playlist>();
    secondP = new Node<Playlist>();
    thirdP = new Node<Playlist>();

    firstP->data = p1; 
    firstP->next = secondP; 

    secondP->data = p2; 
    secondP->next = thirdP;

    thirdP->data = p3; 
    thirdP->next = nullptr;

    plays.head = firstP;

    plays.printList();







    //playlists.nome = "Sistema";

    //cout << playlists.nome << endl;

    //playlists.insertNode(p1);
    //playlists.insertNode(p2);
    //playlists.insertNode(p3);

    //playlists.printList();



    cout << "_________________________________" << endl;

    // playlists.printList();
    
    // Node<Playlist>* nodePlaylist1 = new Node<Playlist>(p1); // Create a new node;
    // playlists.insertNode(nodePlaylist1);

    return 0;
}