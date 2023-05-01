#include <iostream>
#include "Musica2.h"
#include "Playlist2.h"
#include "Lista_Playlist.h"
#include "menu.cpp"

int main() {
  int acao;
  Lista_Playlist *Todas_play = new Lista_Playlist;
  Playlist *play_padrao = new Playlist;
  

  while (acao != 0) {
    menu_principal();

    std::cin >> acao;

    switch (acao) {
    case 1:
      gerenc_play(Todas_play, play_padrao);
      break;

    case 2:
      gerenc_music(play_padrao);
      break;

    case 0:
      // termina o programa
      break;
    }
  }
  return 0;
}