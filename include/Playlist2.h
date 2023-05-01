#include <iostream>
#include "Musica2.h"

#ifndef PLAYLIST2_H
#define PLAYLIST2_H

class Playlist
{
public:
    std::string nome_playlist;
    Musica *cabeca;
    Musica *cauda;
    Playlist *proximo;

    Playlist();

    Playlist(std::string nome_playlist, Musica *cabeca, Musica *cauda);

    int buscar(std::string titulo, std::string artista);

    Musica* busca(std::string titulo);

    void inserir(Musica *novo);

    void deletar(std::string titulo);

    void listar();

    void tocar();

};

#endif