#include <iostream>
#include "Playlist.h"
#include "Musica.h"

#ifndef LISTA_PLAYLIST_H
#define LISTA_PLAYLIST_H

class Lista_Playlist
{
public:
    Playlist *cabeca; // ponteiro para o primeiro elemento da lista
    Playlist *cauda; // ponteiro para o ultimo elemento da lista



    int encontrar_playlist(std::string nome); // retorna a posição da playlist na lista

    void adicionar_playlist(Playlist *novo); // adiciona uma playlist na lista

    Playlist* encontra_playlist(std::string nome); // retorna a playlist

    void remover_playlist(std::string nome); // remove uma playlist da lista

    void listar_playlist(); // lista todas as playlists

    void deletar_musica(std::string titulo); // deleta uma música de todas as playlists

    void Destructor_Lista(); // destrutor da lista

    
};


#endif