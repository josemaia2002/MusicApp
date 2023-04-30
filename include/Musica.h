#include <iostream>
#include <string>

using namespace std;

#ifndef MUSICA_H
#define MUSICA_H

/**
 * \brief Represents a song.
 * 
 * This is a class that represents a song, 
 * specifying the song's name and the artist's name.
 */
class Musica {
private:
    /**
     * \brief The song's name.
     * 
     * Represents the name of the song.
     */ 
    string titulo;

    /**
     * \brief The artist's name.
     * 
     * Represents the artist that plays the song.
     */ 
    string artista;

public:
    /**
     * \brief Creates a new song.
     * 
     * Creates a new song and sets its
     * name and artist to an empty string.
     */
    Musica();

    /**
     * \brief Creates a new song with a specific name and artist.
     * 
     * Creates a new Playlist and sets its
     * name and artist to the received parameters.
     * 
     * \param titulo The song's name.
     * \param artista The artist's name.
     */
    Musica(string titulo, string artista);    

     /**
     * \brief Overloads the << operator.
     * 
     * Specifies the behavior of the << operator
     * when dealing with a song. It is going to
     * access the `titulo` and the `artista` fields
     * of the song and print them.
     * 
     * \param output The destination of the data.
     * \param M The song which is being accessed.
     */
    friend ostream &operator<<(ostream &output, const Musica &M);

    /**
     * \brief Overloads the >> operator.
     * 
     * Specifies the behavior of the >> operator
     * when dealing with a song. It is going to
     * access the `titulo` and the `artista` fields
     * of the song and set them with the user input.
     * 
     * \param output The destination of the data.
     * \param M The song which is being accessed.
     */
    friend istream &operator>>(istream  &input, Musica &M);

    string getTitulo();
    void setTitulo(string nome);

    string getArtista();
    void setArtista(string artista);
};

#endif