#include <iostream>
#include <string>
#include "List.h"

using namespace std;

#ifndef PLAYLIST_H
#define PLAYLIST_H

/**
 * \brief Represents a playlist.
 * 
 * This is a class that represents a playlist that
 * contains specific songs and the playlist name.
 */
class Playlist {
private:
    /**
     * \brief The playlist name.
     * 
     * Represents the name of the playlist.
     */ 
    string nome;    

    /**
     * \brief The list of songs.
     * 
     * Represents the list of songs that
     * the playlist contains.
     */ 
    List<Musica> musicas;

public:    
    /**
     * \brief Creates a new Playlist.
     * 
     * Creates a new Playlist and sets its
     * name to an empty string.
     */
    Playlist();

    /**
     * \brief Creates a new Playlist with a specific name.
     * 
     * Creates a new Playlist and sets its
     * name to the received parameter.
     * 
     * \param nome The name that's going to be assigned 
     * to the new Playlist.
     */
    Playlist(string nome);

    /**
     * \brief Overloads the << operator.
     * 
     * Specifies the behavior of the << operator
     * when dealing with a Playlist. It is going to
     * access the `nome` field of the Playlist and
     * print it.
     * 
     * \param output The destination of the data.
     * \param P The Playlist which is being accessed.
     */
    friend ostream &operator<<(ostream &output, const Playlist &P);

    string getNome();
    void setNome(string nome);

    List<Musica>& getMusicas();

    void addSong(Musica& m);

    void removeSong(Musica& m);

    void addSong(Playlist &P);

    void removeSong(Playlist &P);
};

#endif