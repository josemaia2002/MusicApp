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

    Playlist(Playlist& P);

    

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

    /**
     * \brief Add a song to the playlist.
     * 
     * It receives a song and inserts it at
     * the playlist's list of songs.
     * 
     * \param m The song that will be added.
     */
    void addSong(Musica& m);
    
    /**
     * \brief Remove a song from the playlist.
     * 
     * It receives a song and removes it from
     * the playlist's list of songs.
     * 
     * \param m The song that will be removed.
     */
    void removeSong(Musica& m);

    /**
     * \brief Overloaded version of the addSong function.
     * 
     * It receives a playlist and inserts all of its 
     * elements to the playlist list of songs.
     * 
     * \param P The playlist whose ellements will be added.
     */
    void addSong(Playlist &P);

    /**
     * \brief Overloaded version of the removeSong function.
     * 
     * It receives a playlist and removes all of its 
     * elements from the playlist list of songs.
     * 
     * \param P The playlist whose ellements will be removed.
     */
    void removeSong(Playlist &P);

    List<Musica>& getMusicas();

    string getNome();
    void setNome(string nome);
};

#endif