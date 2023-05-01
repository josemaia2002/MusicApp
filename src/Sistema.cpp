#include <iostream>
#include <string>
#include "Sistema.h"

using namespace std;

void Sistema::menu1(int lang){
    if(lang == 1){
        cout << "Enter the number according to the option you want:" << endl;
        cout << "1 - Manage songs" << endl;
        cout << "2 - Manage playlists" << endl;
        cout << "3 - Manage songs of a playlist" << endl;
        cout << "0 - Quit" << endl;
    }
    else{
        cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
        cout << "1 - Gerenciar Musicas" << endl;
        cout << "2 - Gerenciar Playlists" << endl;
        cout << "3 - Gerenciar Musicas em uma playlist" << endl;
        cout << "0 - Sair" << endl;     
    }
}

void Sistema::menu2(int lang){
    if(lang == 1){
        cout << "Enter the number according to the option you want:" << endl;
        cout << "1 - Register a song" << endl;
        cout << "2 - Remove a song" << endl;
        cout << "3 - List the songs" << endl;
        cout << "0 - Back" << endl;
    }
    else{
        cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
        cout << "1 - Cadastrar uma músicas" << endl;
        cout << "2 - Remover uma músicas" << endl;
        cout << "3 - Listar as músicas" << endl;
        cout << "0 - voltar" << endl;   
    }
}

void Sistema::menu3(int lang){
    if(lang == 1){
        cout << "Enter the number according to the option you want:" << endl;
        cout << "1 - Register a playlist" << endl;
        cout << "2 - Remove a playlist" << endl;
        cout << "3 - List the playlists" << endl;
        cout << "0 - Back" << endl;
    }
    else{
        cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
        cout << "1 - Cadastrar uma playlist" << endl;
        cout << "2 - Remover uma playlist" << endl;
        cout << "3 - Listar as playlists" << endl;
        cout << "0 - voltar" << endl; 
    }
}

void Sistema::menu4(int lang){
    if(lang == 1){
        cout << "Enter the number according to the option you want:" << endl;
        cout << "1 - Search for a playlist" << endl;
        cout << "0 - Back" << endl;
    }
    else{
        cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
        cout << "1 - Buscar uma playlist" << endl;
        cout << "0 - voltar" << endl;
    }
}

void Sistema::menu5(int lang){
    if(lang == 1){
        cout << "Enter the number according to the option you want:" << endl;
        cout << "1 - Add a song" << endl;
        cout << "2 - Remove a song" << endl;
        cout << "3 - List the songs" << endl;
        cout << "0 - Back" << endl;
    }
    else{
        cout << "Digite o numero de acordo com a opção que queira realizar:" << endl;
        cout << "1 - Adicionar uma música" << endl;
        cout << "2 - Remover uma música" << endl;
        cout << "3 - Listar as músicas" << endl;
        cout << "0 - voltar" << endl;
    }
}

void Sistema::cadastrarMusica(List<Musica>& L){
    Musica inSong;
    string titulo, artista;
    getline(cin, titulo);
    getline(cin, titulo);
    getline(cin, artista);
    inSong = Musica(titulo, artista); 
    L.insertNode(inSong);
}

void Sistema::removerMusica(List<Musica>& L){
    int position;
    cin >> position;
    
    L.deleteNode(position);
}

void Sistema::cadastrarPlaylist(List<Playlist>& P){
    Playlist play;
    getline(cin, play.nome);
    getline(cin, play.nome);
    P.insertNode(play);
}

void Sistema::removerPlaylist(List<Playlist>& P){
    int position;
    cin >> position;
    
    P.deleteNode(position);
}

void Sistema::listarPlaylists(List<Playlist>& P){
    for(int i = 1; i <= P.size; i++)
        cout << P.search(i)->data.nome << endl;
}

void Sistema::addToPlaylist(List<Playlist>& P, List<Musica>& L, int positionPlaylist){
    int positionMusica;
    cin >> positionMusica;

    P.search(positionPlaylist)->data.musicas.insertNode(L.search(positionMusica)->data);
}

void Sistema::removeFromPlaylist(List<Playlist>& P, int positionPlaylist){
    int positionMusica;
    cin >> positionMusica;

    P.search(positionPlaylist)->data.musicas.deleteNode(positionMusica);
}

void Sistema::printMenu(List<Musica>& L, List<Playlist>& P){
    Playlist play;
    int choice, quit = 1;
    int positionPlaylist;
    int lang;

    cin >> lang;

    do{
        menu1(lang);
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
                    menu2(lang);
                    cin >> choice;
                    if(choice == 0)
                        continue;
                    else if(choice == 1){
                        cadastrarMusica(L);
                    }   
                    else if(choice == 2){
                        cout << "Escolha uma musica para ser removida\n";
                        removerMusica(L);
                    }
                    else if(choice == 3)
                        cout << "Listando musicas\n";
                        L.printList();
                }
                while(choice != 0);
                quit = 1;
                break;
            case 2:
                do{
                    menu3(lang);
                    cin >> choice;
                    if(choice == 0)
                        continue;
                    else if(choice == 1)
                        cadastrarPlaylist(P);
                    else if(choice == 2)
                        removerPlaylist(P);
                    else if(choice == 3){
                        listarPlaylists(P);
                    }
                }
                while(choice != 0);
                quit = 1;
                break;
            case 3:
                do{
                    menu4(lang);
                    cin >> choice;
                    quit = choice;
                    if(choice == 0)
                        continue;
                    else if(choice == 1){
                        cout << "Buscando playlist\n";
                        cin >> positionPlaylist;
                        
                        do{
                            menu5(lang);
                            cin >> choice;
                            if(choice == 0)
                                continue;
                            else if(choice == 1)
                                addToPlaylist(P, L, positionPlaylist);
                            else if(choice == 2){
                                removeFromPlaylist(P, positionPlaylist);
                            }
                            else if(choice == 3){
                                int tam = P.search(positionPlaylist)->data.musicas.size;
                                P.search(positionPlaylist)->data.musicas.printList();
                            }
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