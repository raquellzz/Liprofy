#include <iostream>
#include "Musica2.h"

#ifndef PLAYLIST2_H
#define PLAYLIST2_H

class Playlist
{
public:
    std::string nome_playlist; // nome da playlist
    Musica *cabeca; // ponteiro para a primeira musica da playlist
    Musica *cauda; // ponteiro para a ultima musica da playlist
    Playlist *proximo; // ponteiro para a proxima playlist

    // Playlist(std::string nome_playlist = "", Musica *cabeca = nullptr, Musica *cauda  = nullptr, Playlist *proximo = nullptr);

    int buscar(std::string titulo, std::string artista); // retorna 1 se a musica existe na playlist e 0 se não existe

    Musica* busca(std::string titulo); // retorna a musica

    void inserir(Musica *novo); // adiciona uma musica na playlist

    void deletar(std::string titulo); // deleta uma musica da playlist

    void listar(); // lista todas as musicas da playlist

    void tocar(); // toca a playlist

    void Destructor_Playlist(); // destrutor da playlist

};

#endif