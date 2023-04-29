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

void Printamenu(){
  
    cout << "-------------------------------------------------------------" << endl;
    cout << "------------Bem vindo ao Aplicativo de musicas---------------" << endl;
    cout << "-------------------------------------------------------------" << endl;


  while(true){
    int aux1;

    menu1();

    cin >> aux1;
    if(aux1==1){
      int aux2;

      menu2();

      cin >> aux2;
      switch(aux2) {
      case 1:
        // função para Cadastrar uma músicas
        break;
      case 2:
        // função para  Remover uma músicas
        break;
      case 3:
        // função para Listar as músicas.
        break;
      case 0:
        menu1();
        break;
      }
    }

    if(aux1==2){
      int aux2;

      menu3();

      cin >> aux2;

      switch(aux2) {
      case 1:
        // função para Cadastrar uma playlist
        break;
      case 2:
        // função para  Remover uma playlist
        break;
      case 3:
        // função para Listar as playlist
        break;
      case 0:
        menu1();
        break;        
      }
    }
    
    if(aux1==3){
      int aux2;

      menu4();

      switch(aux2) {
      case 1:
        menu5();
        break;
      case 0:
        menu1();
        break;
      }
    }
    
    if(aux1==0){
      break;
    }
    if((aux1 != 0) and (aux1 != 1) and (aux1 != 2) and (aux1 != 3)){
      cout << "Digite uma opção valida." << endl;
    }
  }
}


void printMenu(){
    int opcao;
    menu1();

    while(true){
        cin >> opcao;
        if(opcao == 0){
            return;
        }

        if(opcao == 1){
            menu2();
            cin >> opcao;
            if(opcao == 0)
                menu1();
        }

        if(opcao == 2){
            menu3();
            cin >> opcao;
            if(opcao == 0)
                menu1();
        }

        if(opcao == 3){
            menu4();
            cin >> opcao;
            if(opcao == 0)
                menu1();
            else if(opcao == 1)
                menu5();
                cin >> opcao;
                if(opcao == 0)
                    menu4();
        }
    }
}

void printMenu2(){
    int selection, submenu;
    bool quit = false;
    while(quit != true) {
        menu1();
        cin >> selection;

        

        while(subMenu) {
         // display sub menu
       }
    }
}


// TODO Implement menu
int main(){
    int index;
    string titulo, artista;
    Musica m1;
    List<Musica> l;
    // List<Playlist> playlists;
    Playlist p1, p2, p3;

    // Printamenu();
    printMenu2();



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