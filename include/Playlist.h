// #include <iostream>
// #ifndef PLAYLIST_H
// #define PLAYLIST_H
// #include "Lista.h"
// #include "Musica.h"

// class Playlist {
//     public:
//         std::string nome;
//         Lista<Musica> *musicas;
    
//         Playlist();
//         Playlist(std::string nome, Lista<Musica> *musicas);

//         void imprime_m(No<Musica> *&musica);

//         void imprime_p(Playlist *&L);

//         void adiciona_m(Playlist *&L, No<Musica> *&musica);

//         void remove_m(Playlist *&L, No<Musica> *&musica);
// };
// #endif

// Playlist::Playlist(){
//     this->nome = "";
//     this->musicas = new Lista<Musica>();
// }

// Playlist::Playlist(std::string nome, Lista<Musica> *musicas){
//     this->nome = nome;
//     this->musicas = musicas;
// }

// void Playlist::imprime_m(Musica *&musica){
//     std::cout << "Título: " << musica->valor.get_titulo() << ", artista: " << musica->valor.get_autor() << std::endl;
// }

// void Playlist::imprime_p(Playlist *&L){
//     std::cout << std::endl;

//     if(empty(L))
//     {
//         std::cout << "Lista vazia";
//         return;
//     }

//     No<Musica>* aux = L->musicas->cabeca;

//     while(aux->get_proximo() != nullptr)
//     {
//         std::cout << imprime_m(aux->valor) << std::endl;
//         aux = aux->proximo;
//     }

// }

// void Playlist::adiciona_m(Playlist *&L, Musica &musica){
//     L->musicas->push_back(L->musicas, musica);

// }

// void Playlist::remove_m(Playlist *&L, No<Musica> *&musica){
    
// }



