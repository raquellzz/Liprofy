#include <iostream>
#include "Musica2.h"
#include "Playlist2.h"
#include "Lista_Playlist.h"


void menu_principal(){
    std::cout << std::endl << "Escolha uma ação: " << std::endl << std::endl;
    std::cout << "0. Sair" << std::endl;
    std::cout << "1. Gerenciar Playlists" << std::endl;
    std::cout << "2. Gerenciar Músicas" << std::endl << std::endl;
}





void gerenc_play(Lista_Playlist *geral, Playlist *geral2) {
  int acao_sec;
  while (acao_sec != 5) {
    std::cout << std::endl << "Escolha uma ação: " << std::endl << std::endl;
    std::cout << "0. Voltar" << std::endl;
    std::cout << "1. Adicionar uma Playlist" << std::endl;
    std::cout << "2. Remover uma Playlist" << std::endl;
    std::cout << "3. Listar Playlists" << std::endl;
    std::cout << "4. Adicionar Música a uma playlist" << std::endl << std::endl;
  

    std::cin >> acao_sec;

    switch (acao_sec) {
    case 1: // chama função para criar lista encadeada de música
    {
      Playlist *temp = new Playlist; 
      std::string nome_p;
      std::cout << std::endl << "Digite um nome para a playlist: " << std::endl;
      std::cin.ignore();
      getline(std::cin, nome_p);

      temp->nome_playlist = nome_p;
      temp->proximo = nullptr;

      geral->adicionar_playlist(temp);

      std::cout << std::endl << ">>> A playlist foi criada com sucesso" << std::endl;
      break;
    }

    case 2: // chama função para deletar uma playlist
    {
      std::string nome_p;
      std::cout << std::endl
                << "Digite o nome da playlist a ser deletada: " << std::endl;
      std::cin.ignore();
      getline(std::cin, nome_p);

      

      std::cout << std::endl
                << ">>> A playlist foi deletada com sucesso" << std::endl;
      break;
    }

    case 3: // imprime todas as playlists e as músicas das playlists
    {
      std::cout << std::endl << "Aqui estão todas as playlists criadas: " << std::endl;
      geral->listar_playlist();

      break;
    }

    case 4: // adiciona uma música já criada a uma playlist
    //não ta funcionando ainda
    {
      std::string titulo, nome_p;
      std::cout << std::endl
                << "Digite o nome da playlist a ser acessada: " << std::endl;
      std::cin.ignore();
      getline(std::cin, nome_p);

      std::cout << std::endl << "Digite o título de uma música já existente para adicionar a uma playlist: " << std::endl;

      getline(std::cin, titulo);

      Playlist* temp_p = geral->encontra_playlist(nome_p);

      Musica* temp_m = geral2->busca(titulo);

      temp_p->inserir(temp_m);


      std::cout << ">>> A música foi adicionada à playlist com sucesso"
                << std::endl;

      std::cout << "Aqui estão as músicas dessa playlist: " <<std::endl;
      
      temp_p->listar(); 

      break;
    }

    case 0: // volta para o menu inicial
      return;
    }
  }
}



// mostra as opções do usuário em relação às músicas
void gerenc_music(Playlist *geral) {
  int acao_sec;
  while (acao_sec != 0) {
    std::cout << std::endl << "Escolha uma ação: " << std::endl;
    std::cout << "0. Voltar" << std::endl;
    std::cout << "1. Adicionar uma Música" << std::endl;
    std::cout << "2. Remover uma Música" << std::endl;
    std::cout << "3. Tocar Músicas" << std::endl << std::endl;
  

    std::cin >> acao_sec;

    switch (acao_sec) {
    case 1: // chama função para criar um objeto música
    {
      Musica *temp = new Musica;
        std::string titulo;
        std::string artista;
        std::cout << std::endl << "Digite o título da música: " << std::endl;

        std::cin.ignore();
        getline(std::cin, titulo);
        std::cout << "Digite nome do artista: " << std::endl;

        getline(std::cin, artista);

        temp->artista = artista;
        temp->titulo = titulo;
        temp->proximo = nullptr;

        geral->inserir(temp);

        std::cout << ">>> A música foi cadastrada com sucesso" << std::endl;
        break;
    }

    case 2: // chama função para deletar um objeto música de todas as playlists
    {
      std::string titulo;
      std::cout << std::endl
                << "Digite o título da música a ser deletada: " << std::endl;
      std::cin.ignore();
      getline(std::cin, titulo);

      geral->deletar(titulo);

      std::cout << ">>> A música foi deletada com sucesso" << std::endl;
      break;
    }



    case 3: // imprime todas as músicas adicionadas ao todo
    {
      std::cout << "Para continuar tocando, digite s. Para parar, digite n" << std::endl;

      // geral->listar();
      geral->tocar();

      break;
    }

    case 0: // volta para o menu inicial
      return;
    }
  }
}