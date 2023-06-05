#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

int main(){
    List<Musica> l; // Todas as musicas do sistema
    List<Playlist> playlists; // Todas as playlists do sistema
    Sistema app;

    // Leitura do arquivo
    int file_size = 0;

    fstream arquivo;
    string text;

    arquivo.open("../data/info.txt",ios::in);
    while(getline(arquivo, text)){
        file_size++;
    }
    arquivo.close(); 


    string lines[file_size];
    int i = 0;
       
    arquivo.open("../data/info.txt",ios::in);
    if(arquivo.is_open()){   
        while(getline(arquivo, text)){
            lines[i] = text;
            i++;
        }
        arquivo.close(); 
    }
    arquivo.close();


    // Leitura de cada linha
    string s, str;
    for(int step = 0; step < file_size; step++){
        s = lines[step];

        int tam = s.size();
        int count = 0;

        char ch = ',';
     
        for(i = 0; (i = s.find(ch, i)) != string::npos; i++){
            count++;
        }
     
        stringstream ss(s); 

        getline(ss, str, ';');
        cout << "Playlist: " << str << endl;
        Playlist p;
        p.setNome(str);
        playlists.insertNode(p);

        for(i = 0; i <= count; i++){
            Musica m;
            string titulo, artista;

            getline(ss, str, ':');
            cout << "Titulo: " << str << endl;
            titulo = str;

            getline(ss, str, ',');
            cout << "Artista: " << str << endl;
            artista = str;

            m = Musica(titulo, artista); 
            l.insertNode(m);
        }
    }

    cout << "################" << endl;
    cout << "Playlists" << endl;

    playlists.printList();

    cout << "################" << endl;
    cout << "Musicas" << endl;
    l.printList();


    // app.printMenu(l, playlists);


    return 0;
}