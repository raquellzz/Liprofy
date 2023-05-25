#include <iostream>
#include "Lista.h"

void primeiro_menu()
{
    std::cout << '\n' << "0. Sair" << '\n';
    std::cout << "1. Gerenciar Playlists" << '\n';
    std::cout << "2. Gerenciar Músicas" << '\n';
    std::cout << '\n' << "Escolha uma ação: ";
}

void playlists_menu()
{
    std::cout << '\n' << "0. Voltar" << '\n';
    std::cout << "1. Criar Playlist" << '\n';
    std::cout << "2. Remover Playlist" << '\n';
    std::cout << "3. Listar Playlists" << '\n';
    std::cout << "4. Acessar Plalylist" << '\n';
    std::cout << "Escolha uma ação: ";
}

void musicas_menu()
{
    std::cout << '\n' << "0. Voltar" << '\n';
    std::cout << "1. Adicionar Música" << '\n';
    std::cout << "2. Remover Música" << '\n';
    std::cout << "3. Listar Músicas" << '\n';
    std::cout << "Escolha uma ação: ";
}

void cria_playlist()
{
    std::cout << '\n' << "0. Voltar" << '\n';
    std::cout << "Defina o nome da playlist: ";
}
