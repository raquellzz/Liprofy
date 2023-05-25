#include <iostream>
#include "Musica.h"
#include "Playlist.h"
#include "Menu.cpp"

int main() {
  int acao; // acao do usuario
  Lista<Playlist> *playlists; // lista de playlists
  Playlist *Padrao = new Playlist("Padrao");
  

  while (acao != 0) { // enquanto o usuario não digitar 0
    primeiro_menu();

    std::cin >> acao;
    std::cout << std::endl;

    switch (acao) {
    case 1: // gerencia as playlists
      playlists_menu(Padrao, playlists);
      break;

    case 2: // gerencia as musicas
      musicas_menu(Padrao, playlists);
      break;

    case 0: // termina o programa
      // termina o programa
      break;
    }
  }
  
  return 0;
}