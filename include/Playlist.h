#include <iostream>
#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Lista.h"
#include "Musica.h"

template <typename N> class Playlist {
    private:
        std::string nome;
        Lista<Musica> *musicas;
    public:
        Playlist();
        Playlist(std::string nome, Lista<Musica> *musicas);

        
        void set_cabeca(No<N> *cabeca);
        void set_cauda(No<N> *cauda);
        No<N> *get_cauda();
        No<N> *get_cabeca();
        void imprime(Playlist<N> &L);

        void push_back(Playlist<N> *&L, const N &valor);


        void remover(Playlist<N> *&L, const N &valor);
};
#endif