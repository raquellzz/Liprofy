#include <iostream>
#include "Lista_Playlist.h"

Lista_Playlist::Lista_Playlist(){
        this->cabeca = nullptr;
        this->cauda = nullptr;
    }

int Lista_Playlist::encontrar_playlist(std::string nome){
    Playlist *atual = new Playlist;
    int i = 1, n = 0;

    atual = cabeca;

    while(atual != nullptr){
        if(nome == atual->nome_playlist){
            n = i;
        }
        atual = atual->proximo;
        i ++;
    }

    if(n == 0){
        std::cout << "A playlist não foi encontrada" << std::endl;
    }
    
    return n;
}

Playlist* Lista_Playlist::encontra_playlist(std::string nome){
    Playlist *atual = new Playlist;
    int i = 1, n = 0;

    atual = cabeca;

    while(atual != nullptr){
        if(nome == atual->nome_playlist){
            return atual;
        }
        atual = atual->proximo;
        i ++;
    }

    if(n == 0){
        std::cout << "A playlist não foi encontrada" << std::endl;
    }
    
    return nullptr;
}



void Lista_Playlist::adicionar_playlist(Playlist *novo){

    if(cabeca == nullptr){
        cabeca = novo;
        cauda = novo;
        novo = nullptr;
    }
    else{
        cauda->proximo = novo;
        cauda = novo;
    }
    
}

void Lista_Playlist::remover_playlist(std::string nome){
    // Playlist *corr = new Playlist;


}

void Lista_Playlist::listar_playlist(){
    Playlist *corr = new Playlist;

    corr = cabeca;
    int i = 1;
    while(corr != nullptr){
        std::cout << "Playlist " << i << ": " << corr->nome_playlist << std::endl;
        corr->listar();
        i ++;
        corr = corr->proximo;
    }
    std::cout << std::endl;
    
}



