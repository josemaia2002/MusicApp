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

void menu1(){
    cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
    cout << "1 - Gerenciar Musicas" << endl;
    cout << "2 - Gerenciar Playlists" << endl;
    cout << "3 - Gerenciar Musicas em uma playlist" << endl;
    cout << "0 - Sair" << endl;
}

void menu2(){
    cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
    cout << "1 - Cadastrar uma músicas" << endl;
    cout << "2 - Remover uma músicas" << endl;
    cout << "3 - Listar as músicas" << endl;
    cout << "0 - voltar" << endl;
}

void menu3(){
    cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
    cout << "1 - Cadastrar uma playlist" << endl;
    cout << "2 - Remover uma playlist" << endl;
    cout << "3 - Listar as playlist" << endl;
    cout << "0 - voltar" << endl;
}

void menu4(){
    cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
    cout << "1 - Buscar uma playlist" << endl;
    cout << "0 - voltar" << endl;
}

void menu5(){
    cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
    cout << "1 - Adicionar uma música" << endl;
    cout << "2 - Remover uma música" << endl;
    cout << "3 - Listar as músicas" << endl;
    cout << "0 - voltar" << endl;
}

void printMenu(){
    int choice, quit = 1;

    do{
        menu1();
        cin >> choice;
        quit = choice;

        switch(choice){
            case 0:
                if(quit == 0)
                    return;
                else
                    break;
            case 1:
                do{
                    menu2();
                    cin >> choice;
                    if(choice == 0)
                        continue;
                    else if(choice == 1)
                        cout << "Cadastando musicas\n";
                    else if(choice == 2)
                        cout << "Removendo musicas\n";
                    else if(choice == 3)
                        cout << "Listando musicas\n";
                }
                while(choice != 0);
                quit = 1;
                break;
            case 2:
                do{
                    menu3();
                    cin >> choice;
                    if(choice == 0)
                        continue;
                    else if(choice == 1)
                        cout << "Cadastando uma playlist\n";
                    else if(choice == 2)
                        cout << "Removendo uma playlist\n";
                    else if(choice == 3)
                        cout << "Listando uma playlist\n";
                }
                while(choice != 0);
                quit = 1;
                break;
            case 3:
                do{
                    menu4();
                    cin >> choice;
                    quit = choice;
                    if(choice == 0)
                        continue;
                    else if(choice == 1){
                        cout << "Buscando playlist\n";

                        do{
                            menu5();
                            cin >> choice;
                            if(choice == 0)
                                continue;
                            else if(choice == 1)
                                cout << "Adicionando uma musica\n";
                            else if(choice == 2)
                                cout << "Removendo uma musica\n";
                            else if(choice == 3)
                                cout << "Listando as musicas\n";
                        }
                        while(choice != 0);
                        quit = 1;
                    }
                }
                while((choice != 0) or (quit != 0));
                quit = 1;
                break;
        }
    }
    while((choice != 0) or (quit != 0));
}


// TODO Integrate menu with the system
int main(){
    int index;
    string titulo, artista;
    Musica m1;
    List<Musica> l;
    // List<Playlist> playlists;
    Playlist p1, p2, p3;

    printMenu();



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