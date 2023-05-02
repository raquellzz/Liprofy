#include <iostream>
#include "Lista_Playlist.h"
#include "Playlist2.h"
#include "Musica2.h"

// Lista_Playlist::Lista_Playlist(Playlist *cabeca = nullptr, Playlist *cauda = nullptr)
// {
//     this->cabeca = cabeca;
//     this->cauda = cauda;
// }

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
    Playlist *corr = new Playlist;
    Playlist *anterior = new Playlist;

    corr = cabeca;
    int achou = 0, pos = 0, tam = 0;

    while(corr != nullptr){
        if(corr->nome_playlist == nome){
            pos = tam;
            achou = 1;
        }
        tam ++;
        corr = corr->proximo;
    }

    corr = cabeca;

    if(achou == 0){
        std::cout << "A playlist digitada não está na lista" << std::endl;
    }
    else {
        
        if(achou == 1){
            cabeca = cabeca->proximo;
            delete corr;
        }
        else if(achou == tam){
            while(corr->proximo != nullptr){
                anterior = corr;
                corr = corr->proximo;
            }
            cauda = anterior;
            anterior->proximo = nullptr;
            delete corr;
        }
        else{
            for(int i = 0; i < pos; i ++){
                anterior = corr;
                corr = corr->proximo;
            }
            anterior->proximo = corr->proximo;
        }
    }
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

void Lista_Playlist::deletar_musica(std::string titulo){
    Playlist *corr = new Playlist;

    corr = cabeca;
    while(corr != nullptr){
        Musica *corr2 = new Musica;
        corr2 = corr->cabeca;

        while(corr2 != nullptr){
            if(corr2->titulo == titulo){
                corr->deletar(titulo);
                return;
            }
        }

    }
}

void Lista_Playlist::Destructor_Lista(){
    Playlist *corr = new Playlist;
    Playlist *anterior = new Playlist;

    corr = cabeca;

    while(corr != nullptr){
        anterior = corr;
        corr = corr->proximo;
        anterior->Destructor_Playlist();
    }
    cabeca = nullptr;
    cauda = nullptr;
}



