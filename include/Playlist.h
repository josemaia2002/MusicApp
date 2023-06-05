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
     * \brief Copy constructor
     * 
     * Initializes the playlist by copying the 
     * atributes of the object received by 
     * reference as a parameter.
     * 
     * \param P The playlist that will be copied.
     */
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

    /**
     * \brief Overloads the + operator.
     * 
     * Specifies the behavior of the + operator
     * when dealing with playlists. It is going to 
     * create a new playlist, and it will receive
     * the elements of two playlists without repetition 
     * of elements, and then the result playlist will be returned.
     * 
     * \param P The playlist that will be concatenated.
     * 
     * \return The concatenation between the playlists.
     */
    Playlist operator+(Playlist &P);

    /**
     * \brief Overloaded version of the operator+.
     * 
     * Specifies the behavior of the + operator
     * when dealing with a playlist and a song. It is going to 
     * create a new playlist, and it will receive
     * the elements of the playlists and add the song to the end
     * of the playlist, and then the result playlist will be returned.
     * 
     * \param m The song that will be added to the playlist.
     * 
     * \return The concatenation between the playlist and the song.
     */
    Playlist operator+(Musica &m);

    /**
     * \brief Overloads the - operator.
     * 
     * Specifies the behavior of the - operator
     * when dealing with playlists. It is going to 
     * create a new playlist, and this playlist will
     * have all the elements of the first playlist
     * that are not elements of the second playlist, and then 
     * the result playlist will be returned.
     * 
     * \param P The playlist whose elementes will be subtracted.
     * 
     * \return The difference between the playlists.
     */
    Playlist operator-(Playlist &P);

    /**
     * \brief Overloads the - operator.
     * 
     * Specifies the behavior of the - operator
     * when dealing with a playlist and a song. It is going to 
     * create a new playlist, and this playlist will
     * have all the elements of the first playlist, but without
     * the song that was received as a paramenter, and then 
     * the result playlist will be returned.
     * 
     * \param m The song that will be subtracted.
     * 
     * \return The difference between the playlist and the song.
     */
    Playlist operator-(Musica &m);

    void operator<<(Musica &m);

    List<Musica>& getMusicas();

    string getNome();
    void setNome(string nome);
};

#endif