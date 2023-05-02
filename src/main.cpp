#include <iostream>
#include "Musica.h"
#include "Playlist.h"
#include "Lista_Playlist.h"
#include "menu.cpp"

int main() {
  int acao; // acao do usuario
  Lista_Playlist *Todas_play = new Lista_Playlist; // lista de playlists
  Playlist *play_padrao = new Playlist; // playlist padrão
  

  while (acao != 0) { // enquanto o usuario não digitar 0
    menu_principal();

    std::cin >> acao;
    std::cout << std::endl;

    switch (acao) {
    case 1: // gerencia as playlists
      gerenc_play(Todas_play, play_padrao);
      break;

    case 2: // gerencia as musicas
      gerenc_music(play_padrao, Todas_play);
      break;

    case 0: // termina o programa
      // termina o programa
      break;
    }
  }
  play_padrao->Destructor_Playlist(); // destrutor da playlist padrão
  Todas_play->Destructor_Lista(); // destrutor da lista de playlists
  return 0;
}