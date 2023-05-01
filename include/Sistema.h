#include <iostream>
#include <string>
#include "Musica.h"
#include "Node.h"
#include "List.h"
#include "Playlist.h"
#include "../src/List.cpp"
#include "../src/Node.cpp"

using namespace std;

#ifndef SISTEMA_H
#define SISTEMA_H

/**
 * \brief Represents the system.
 * 
 * This is a class that represents the system and 
 * deals with the user interaction, serving as 
 * an interface, and integrating all the project.
 */
class Sistema {
public:
    /**
     * \brief Prints the first menu.
     * 
     * This funtion shows the options to the user,
     * letting him choose between some options.
     * The user can choose to manage the songs, manage the
     * playlists, manage the songs of each playlist or quit the app.
     */
    void menu1(int language);

    /**
     * \brief Prints the second menu.
     * 
     * This funtion prints a submenu which shows options to the user,
     * letting him choose to register, remove or list the songs of the system
     * or going back to the first menu.
     */
    void menu2(int language);

    /**
     * \brief Prints the third menu.
     * 
     * This funtion prints a submenu which shows options to the user,
     * letting him choose to register, remove or list the playlists of the system
     * or going back to the first menu.
     */
    void menu3(int language);

    /**
     * \brief Prints the fourth menu.
     * 
     * This funtion prints a submenu which shows options to the user,
     * letting him choose to navigate to a specific playlist or going 
     * back to the first menu.
     */
    void menu4(int language);

    /**
     * \brief Prints the fifth menu.
     * 
     * This funtion prints a submenu which shows options to the user,
     * letting him choose to add or remove a song from the current playlist
     * or list the songs of the playlist, and also lets the user go back
     * the fourth menu.
     */
    void menu5(int language);

    /**
     * \brief Register a song in the system.
     * 
     * Receives the information about the song, creating it and 
     * registering the song in the system.
     * 
     * \param L The list of songs that contains all the 
     * songs of the system, and where the new song will be stored.
     */
    void cadastrarMusica(List<Musica>& L);

    /**
     * \brief Deletes a song from the system.
     * 
     * Receives the position of the song and deletes it.
     * 
     * \param L The list of songs that contains all the 
     * songs of the system, and where the song to be deleted is stored.
     */
    void removerMusica(List<Musica>& L);

    /**
     * \brief Creates a new playlist.
     * 
     * Creates a new playlist, receives the desired name 
     * to be assigned to the playlist, and inserts the playlist in the 
     * system's list of playlists.
     * 
     * \param P The list of playlists that contains all the playlist 
     * of the system.
     */
    void cadastrarPlaylist(List<Playlist>& P);

    /**
     * \brief Removes a playlist.
     * 
     * Receives the position of the playlist and deletes it.
     * 
     * \param P The list of playlists that contains all the playlist 
     * of the system.
     */
    void removerPlaylist(List<Playlist>& P);

    /**
     * \brief Lists all the playlists.
     * 
     * Receives the position of the playlist and deletes it.
     * 
     * \param P The list of playlists that contains all the playlists
     * of the system.
     */
    void listarPlaylists(List<Playlist>& P);

    /**
     * \brief Add a song to the current playlist.
     * 
     * Receives the position of the song inside of the system's 
     * list of songs, and inserts this song in the playlist.
     * 
     * \param P The list of playlists that contains all the playlists
     * of the system.
     * \param L The list of songs that contains all the 
     * songs of the system, and where the song to be deleted is stored.
     * \param positionPlaylist The location of the playlist inside of the
     * system's list of playlists.
     */
    void addToPlaylist(List<Playlist>& P, List<Musica>& L, int positionPlaylist);

    /**
     * \brief Removes a song from the current playlist.
     * 
     * Receives the position of the song inside of the system's 
     * list of songs, and removes this song from the playlist.
     * 
     * \param P The list of playlists that contains all the playlists
     * of the system.
     * \param positionPlaylist The location of the playlist inside of the
     * system's list of playlists.
     */
    void removeFromPlaylist(List<Playlist>& P, int positionPlaylist);

    /**
     * \brief Integrates all the system's functions.
     * 
     * This function works as an inteface with the user, receiving data from
     * him, processing it and showing the user the output. It keeps the system working
     * in loop untill the user decides the quit, and lets the user to navigate between menus,
     * and also calls specific functions according to the user input.
     * 
     * \param P The list of playlists that contains all the playlists
     * of the system.
     * \param L The list of songs that contains all the 
     * songs of the system, and where the song to be deleted is stored.
     */
    void printMenu(List<Musica>& L, List<Playlist>& P);
};

#endif