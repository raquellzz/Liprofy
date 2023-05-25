#include <iostream>
#include "Lista.h"
#include "Musica.h"

void listar_playlist(Lista<Playlist> *plays){
    std::cout << "Aqui está a lista de todas as playlists: " << '\n';
    std::cout << "----------------Início" << '\n';

    //chama a função listar playlists
    plays->listar();

    std::cout << "-------------------Fim" << '\n';
}

void listar_musicas(Playlist *play){
    std::cout << "Aqui está a lista de todas as músicas: " << '\n';
    std::cout << "----------------Início" << '\n';
    //chama a função listar músicas
    std::cout << "-------------------Fim" << '\n';
}

void cria_playlist(Lista<Playlist> *plays)
{
    std::string nome;
    listar_playlist(plays);
    std::cout << "Defina o nome da playlist: ";

    std::cin >> nome;
    //chama a função criar playlist
    std::cout << "-------------------A playlist foi adicionada com sucesso" << '\n';
}

void remove_playlist(Lista<Playlist> *plays)
{
    std::string nome;
    listar_playlist(plays);
    std::cout << "Digite o nome da playlist a ser deletada: ";

    std::cin >> nome;
    //chama a função criar playlist
    std::cout << "-------------------A playlist foi deletada com sucesso" << '\n';
}

void cria_musica(Playlist *play)
{
    std::string titulo, artista;
    listar_musicas(play);
    std::cout << "Defina o título da música: ";
    std::cin >> titulo;
    std::cout << '\n' << "Defina o artista da música: ";
    std::cin >> artista;

    //chama a função criar musica
    std::cout << "-------------------A música foi adicionada com sucesso" << '\n';
}

void add_musica(Playlist *play)
{
    std::string titulo;
    listar_musicas(play);
    std::cout << "Digite o título de uma música da lista: ";
    std::cin >> titulo;


    //adiciona essa música na playlist
    std::cout << "-------------------A música foi adicionada com sucesso" << '\n';
}

void remove_musica(Playlist *play, Lista<Playlist> *plays)
{
    std::string titulo;
    listar_musicas(play);
    std::cout << "Digite o título da música a ser deletada: ";
    std::cin >> titulo;

    //remove a musica
    //remove essa musica de todas as playlists
    std::cout << "-------------------A música foi deletada com sucesso" << '\n';
}


void acessa_playlist(Playlist *play, Lista<Playlist> *plays){
    int acao;
    while(acao != 0){
        std::cout << '\n' << "0. Voltar" << '\n';
        std::cout << "1. Adicionar música à playlist" << '\n';
        std::cout << "2. Remover uma música da playlist" << '\n';
        std::cout << "3. Listar músicas da playlist" << '\n';
        std::cout << "4. Tocar músicas da playlist" << '\n';
        std::cout << "Escolha uma ação: ";

        std::cin >> acao;

        switch (acao)
        {
        case 0:{
            return;
            }
        
        case 1:{
            add_musica(play);

            break;
            }
        case 2:{
            remove_musica(play, plays);

            break;
            }
        case 3:{
            listar_musicas(play);

            break;
            }
        case 4:{
            //chama o método tocar músicas de uma playlist diretamente

            break;
            }
        
        }
    }
}


void primeiro_menu()
{
    std::cout << '\n' << "0. Sair" << '\n';
    std::cout << "1. Gerenciar Playlists" << '\n';
    std::cout << "2. Gerenciar Músicas" << '\n';
    std::cout << '\n' << "Escolha uma ação: ";
}

void playlists_menu(Playlist *play, Lista<Playlist> *plays)
{
    int acao;
    while(acao != 0){
        std::cout << '\n' << "0. Voltar" << '\n';
        std::cout << "1. Criar Playlist" << '\n';
        std::cout << "2. Remover Playlist" << '\n';
        std::cout << "3. Listar Playlists" << '\n';
        std::cout << "4. Acessar Plalylist" << '\n';
        std::cout << "Escolha uma ação: ";

        std::cin >> acao;

        switch (acao)
        {
        case 0:{
            return;
            }
        
        case 1:{
            cria_playlist(plays);

            break;
            }
        case 2:{
            remove_playlist(plays);

            break;
            }
        case 3:{
            listar_playlist(plays);

            break;
            }
        case 4:{
            std::string nome;
            std::cout << "Digite o nome da playlist a ser acessada: ";
            std::cin >> nome;
            
            //acessa_playlist(buscaplaylist(nome));

            break;
            }
        
        }
    }
}

void musicas_menu(Playlist *play, Lista<Playlist> *plays)
{
    int acao;
    while(acao != 0){
        std::cout << '\n' << "0. Voltar" << '\n';
        std::cout << "1. Adicionar Música" << '\n';
        std::cout << "2. Remover Música" << '\n';
        std::cout << "3. Listar Músicas" << '\n';
        std::cout << "4. Tocar Músicas" << '\n';
        std::cout << "Escolha uma ação: ";

        std::cin >> acao;

        switch (acao)
        {
        case 0:{
            return;
            }
        
        case 1:{
            cria_musica(play);

            break;
            }
        case 2:{
            remove_musica(play, plays);

            break;
            }
        case 3:{
            listar_musicas(play);

            break;
            }
        case 4:{
            //chama o método tocar músicas de uma playlist diretamente
            
            break;
            }
        
        }
    }
    
}


