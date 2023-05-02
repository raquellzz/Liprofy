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


void acessar_play(Playlist* espec, Playlist *geral){
  int acao_ter;
  while(acao_ter != 0){
    std::cout << std::endl << "Escolha uma ação: " << std::endl << std::endl;
    std::cout << "0. Voltar" << std::endl;
    std::cout << "1. Adicionar Música à playlist" << std::endl;
    std::cout << "2. Remover uma Música da Playlist" << std::endl;
    std::cout << "3. Tocar Músicas" << std::endl;
    std::cout << "4. Listar Músicas" << std::endl << std::endl;

  
    std::cin >> acao_ter;

    switch(acao_ter){
      case 0:{
        return;
      }
      case 1:{
        std::cout << "Aqui está uma lista de todas as músicas: " << std::endl;
        geral->listar();
        Musica *temp = new Musica; 
        std::string titulo, artista;
        std::cout << std::endl << "Digite o título de uma música já existente para adicionar à playlist: " << std::endl;
        std::cin.ignore();
        getline(std::cin, titulo);
        std::cout << std::endl << "Digite o artista dessa música: " << std::endl;
        getline(std::cin, artista);

        temp->titulo = titulo;
        temp->artista = artista;
        temp->proximo = nullptr;

        if(geral->buscar(titulo, artista)){
          espec->inserir(temp);

          std::cout << std::endl << ">>> A música foi adicionada com sucesso" << std::endl;
          break;
        }
        else{
          std::cout << std::endl << ">>> Essa música não existe" << std::endl;
          break;
        }


      }
      case 2:{
        std::cout << "Aqui está uma lista de todas as músicas dessa playlist: " << std::endl;
        espec->listar();

        std::string titulo;
        std::cout << std::endl
                  << "Digite o título da música a ser deletada: " << std::endl;
        std::cin.ignore();
        getline(std::cin, titulo);

        espec->deletar(titulo);

        std::cout << ">>> A música foi deletada com sucesso" << std::endl;
        break;
      }
      case 3:{
        std::cout << "Para continuar tocando, digite ""s"". Para parar, digite ""n""" << std::endl;


        espec->tocar();

      break;
      }
      case 4:{
        std::cout << "Aqui está uma lista de todas as músicas dessa playlist: " << std::endl;
        espec->listar();

        break;
      }

    }
   

  }
}


void gerenc_play(Lista_Playlist *geral, Playlist *geral2) {
  int acao_sec;
  while (acao_sec != 0) {
    std::cout << std::endl << "Escolha uma ação: " << std::endl << std::endl;
    std::cout << "0. Voltar" << std::endl;
    std::cout << "1. Adicionar uma Playlist" << std::endl;
    std::cout << "2. Remover uma Playlist" << std::endl;
    std::cout << "3. Listar Playlists" << std::endl;
    std::cout << "4. Acessar uma playlist" << std::endl << std::endl;
  

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
      std::cout << "Aqui está uma lista de todas as playlists: " << std::endl;
      geral->listar_playlist();
      std::string nome_p;
      std::cout << std::endl
                << "Digite o nome da playlist a ser deletada: " << std::endl;
      std::cin.ignore();
      getline(std::cin, nome_p);

      geral->remover_playlist(nome_p);

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

    case 4: 
    {
      std::cout << std::endl << "Aqui estão todas as playlists criadas: " << std::endl;
      geral->listar_playlist();
      std::string nome_p;
      std::cout << std::endl
                << "Digite o nome da playlist a ser acessada: " << std::endl;
      std::cin.ignore();
      getline(std::cin, nome_p);

      Playlist* temp_p = geral->encontra_playlist(nome_p);

      acessar_play(temp_p, geral2);

      break;
    }

    case 0: // volta para o menu inicial
      return;
    }
    
  }
}


// mostra as opções do usuário em relação às músicas
void gerenc_music(Playlist *geral, Lista_Playlist *geral2) {
  int acao_sec;
  while (acao_sec != 0) {
    std::cout << std::endl << "Escolha uma ação: " << std::endl;
    std::cout << "0. Voltar" << std::endl;
    std::cout << "1. Adicionar uma Música" << std::endl;
    std::cout << "2. Remover uma Música" << std::endl;
    std::cout << "3. Tocar Músicas" << std::endl;
    std::cout << "4. Listar Músicas" << std::endl << std::endl;
  

    std::cin >> acao_sec;

    switch (acao_sec) {
    case 1: // chama função para criar um objeto música
    {
      std::cout << "Aqui está uma lista de todas as músicas: " << std::endl;
      geral->listar();
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
      std::cout << "Aqui está uma lista de todas as músicas: " << std::endl;
      geral->listar();
      std::string titulo;
      std::cout << std::endl
                << "Digite o título da música a ser deletada: " << std::endl;
      std::cin.ignore();
      getline(std::cin, titulo);

      geral->deletar(titulo);
      geral2->deletar_musica(titulo);

      std::cout << ">>> A música foi deletada com sucesso do sistema" << std::endl;
      break;
    }



    case 3: // imprime todas as músicas adicionadas ao todo
    {
      std::cout << "Para continuar tocando, digite s. Para parar, digite n" << std::endl;

      // geral->listar();
      geral->tocar();

      break;
    }

    case 4:{
      std::cout << "Aqui está uma lista de todas as músicas: " << std::endl;
      geral->listar();

      break;
    }

    case 0: // volta para o menu inicial
      return;
    }
    
  }
}