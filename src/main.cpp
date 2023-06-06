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
     
        for(int j = 0; (j = s.find(ch, j)) != string::npos; j++){
            count++;
        }
     
        stringstream ss(s); 

        getline(ss, str, ';');
        Playlist p;
        p.setNome(str);
        
        for(int k = 0; k <= count; k++){
            Musica m;
            string titulo, artista;

            getline(ss, str, ':');
            titulo = str;

            getline(ss, str, ',');
            artista = str;

            m = Musica(titulo, artista); 
            p.addSong(m);
            l.insertNode(m);
        }
        playlists.insertNode(p);
    }
    app.printMenu(l, playlists);

    return 0;
}