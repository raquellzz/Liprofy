#include <iostream>
#include "No.h"
#include "Lista.h"
#include "Musica.h"


void gerenc_play() {
  int acao_sec;
  while (acao_sec != 5) {
    std::cout << std::endl << "Escolha uma ação: " << std::endl << std::endl;
    std::cout << "1. Adicionar uma Playlist" << std::endl;
    std::cout << "2. Remover uma Playlist" << std::endl;
    std::cout << "3. Listar Playlists" << std::endl;
    std::cout << "4. Adicionar Música a uma playlist" << std::endl;
    std::cout << "5. Voltar" << std::endl << std::endl;

    std::cin >> acao_sec;

    switch (acao_sec) {
    case 1: // chama função para criar lista encadeada de música
    {
      std::string nome_p;
      std::cout << std::endl << "Digite um nome para a playlist: " << std::endl;
      std::cin.ignore();
      getline(std::cin, nome_p);

      std::cout << std::endl
                << "A playlist foi criada com sucesso" << std::endl;
      break;
    }

    case 2: // chama função para deletar lista encadeada de música
    {
      std::string nome_p;
      std::cout << std::endl
                << "Digite o nome da playlist a ser deletada: " << std::endl;
      std::cin.ignore();
      getline(std::cin, nome_p);

      std::cout << std::endl
                << "A playlist foi deletada com sucesso" << std::endl;
      break;
    }

    case 3: // imprime todas as listas encadeadas de música
    {
      std::cout << std::endl
                << "Aqui estão todas as playlists criadas: " << std::endl;
      break;
    }

    case 4: // adiciona uma música já criada a uma playlist x
    {
      std::string titulo, nome_p;
      std::cout << std::endl
                << "Digite o nome da playlist a ser acessada: " << std::endl;
      std::cin.ignore();
      getline(std::cin, nome_p);

      std::cout << std::endl
                << "Digite o título de uma música já existente para adicionar "
                   "a uma playlist: "
                << std::endl;
      std::cin.ignore();
      getline(std::cin, nome_p);

      std::cout << "A música foi adicionada à playlist com sucesso"
                << std::endl;
      break;
    }

    case 5: // volta para o menu inicial
      return;
    }
  }
}



// mostra as opções do usuário em relação às músicas
void gerenc_music() {
  int acao_sec;
  while (acao_sec != 4) {
    std::cout << std::endl << "Escolha uma ação: " << std::endl;
    std::cout << "1. Adicionar uma Música" << std::endl;
    std::cout << "2. Remover uma Música" << std::endl;
    std::cout << "3. Listar Músicas" << std::endl;
    std::cout << "4. Voltar" << std::endl << std::endl;

    std::cin >> acao_sec;

    switch (acao_sec) {
    case 1: // chama função para criar um objeto música
    {
        Musica music;
        std::string titulo, artista;
        std::cout << std::endl << "Digite o título da música: " << std::endl;
        std::cin.ignore();
        getline(std::cin, titulo);
         std::cout << "Digite nome do artista: " << std::endl;
        std::cin.ignore();
        getline(std::cin, artista);

        music.set_autor(artista);
        music.set_titulo(titulo);



        std::cout << "A música foi cadastrada com sucesso" << std::endl;
        break;
    }

    case 2: // chama função para deletar um objeto música de todas as playlists
    {
      std::string titulo;
      std::cout << std::endl
                << "Digite o título da música a ser deletada: " << std::endl;
      std::cin.ignore();
      getline(std::cin, titulo);
    }

      std::cout << "A música foi deletada com sucesso" << std::endl;
    case 3: // imprime todas as músicas adicionadas ao todo
    {
      std::cout << "Aqui estão todas as músicas cadastradas: " << std::endl;


      break;
    }

    case 4: // volta para o menu inicial
      return;
    }
  }
}

int main() {
  int acao;

  while (acao != 0) {
    std::cout << std::endl << "Escolha uma ação: " << std::endl << std::endl;
    std::cout << "0. Sair" << std::endl;
    std::cout << "1. Gerenciar Playlists" << std::endl;
    std::cout << "2. Gerenciar Músicas" << std::endl << std::endl;

    std::cin >> acao;

    switch (acao) {
    case 1:
      gerenc_play();
      break;

    case 2:
      gerenc_music();
      break;

    case 0:
      // termina o programa
      return 0;
    }
  }
  return 0;
}