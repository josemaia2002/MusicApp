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

void menu(){
    int entrada;
    cout << "#############################################################################" << endl;

    while(true){
        cout << "1 - Adicionar músicas" << endl;
        cout << "2 - Deletar músicas" << endl;
        cout << "3 - Criar playlist" << endl;
        cout << "4 - Sair" << endl;

        cin >> entrada;

        switch (entrada) {
          case 1:
            cout << "Informe o nome da musica: " << endl;
            cout << "Informe o nome do artista: " << endl;
            break;
          case 2:
            cout << "Informe o indice da musica a ser deletada: " << endl;
            break;
          case 3:
            cout << "Informe o nome da playlist: " << endl;
            break;
          case 4:
            cout << "I am out" << endl;
            return;
            break;
        }
    }
    cout << "#############################################################################" << endl;
}

// TODO Implement menu
int main(){

    menu();


    int index;
    string titulo, artista;
    Musica m1;
    List<Musica> l;
    // List<Playlist> playlists;
    Playlist p1, p2, p3;
/*
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

    List<Playlist> plays;
    plays.insertNode(p1);
    plays.insertNode(p2);
    plays.insertNode(p3);
    cout << plays.search(1)->data.nome << endl;
    cout << plays.search(1)->data.musicas.search(1)->data << endl;
    cout << plays.search(1)->data.musicas.search(2)->data << endl;

    cout << plays.search(2)->data.nome << endl;
    cout << plays.search(2)->data.musicas.search(1)->data << endl;
    cout << plays.search(2)->data.musicas.search(2)->data << endl;

    cout << plays.search(3)->data.nome << endl;
    cout << plays.search(3)->data.musicas.search(1)->data << endl;
    cout << plays.search(3)->data.musicas.search(2)->data << endl;
    
    cout << "_________________________________" << endl;

    plays.printList();

    cout << "_________________________________" << endl;


*/

    return 0;
}