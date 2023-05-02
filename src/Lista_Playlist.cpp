#include <iostream>
#include "Lista_Playlist.h"
#include "Playlist2.h"
#include "Musica2.h"

// Lista_Playlist::Lista_Playlist(Playlist *cabeca = nullptr, Playlist *cauda = nullptr)
// {
//     this->cabeca = cabeca;
//     this->cauda = cauda;
// }

int Lista_Playlist::encontrar_playlist(std::string nome){ // retorna a posição da playlist na lista
    Playlist *atual = new Playlist;
    int i = 1, n = 0;

    atual = cabeca;

    while(atual != nullptr){ // percorre a lista
        if(nome == atual->nome_playlist){ // se o nome da playlist for igual ao nome da playlist atual
            n = i;
        }
        atual = atual->proximo;
        i ++;
    }

    if(n == 0){ // se n for igual a 0, a playlist não foi encontrada
        std::cout << "A playlist não foi encontrada" << std::endl;
    }
    
    return n; // retorna a posição da playlist na lista
}

Playlist* Lista_Playlist::encontra_playlist(std::string nome){ // retorna a playlist
    Playlist *atual = new Playlist; // cria um ponteiro para a playlist atual
    int i = 1, n = 0; // i é a posição da playlist atual na lista, n é a posição da playlist que queremos encontrar na lista

    atual = cabeca;

    while(atual != nullptr){ // percorre a lista
        if(nome == atual->nome_playlist){ // se o nome da playlist for igual ao nome da playlist atual
            return atual;
        }
        atual = atual->proximo;
        i ++;
    }

    if(n == 0){ // se n for igual a 0, a playlist não foi encontrada
        std::cout << "A playlist não foi encontrada" << std::endl;
    }
    
    return nullptr;
}



void Lista_Playlist::adicionar_playlist(Playlist *novo){ // adiciona uma playlist na lista

    if(cabeca == nullptr){ // se a lista estiver vazia
        cabeca = novo;
        cauda = novo;
        novo = nullptr;
    }
    else{ // se a lista não estiver vazia
        cauda->proximo = novo;
        cauda = novo;
    }
    
}

void Lista_Playlist::remover_playlist(std::string nome){ // remove uma playlist da lista
    Playlist *corr = new Playlist;
    Playlist *anterior = new Playlist;

    corr = cabeca;
    int achou = 0, pos = 0, tam = 0; 
    // achou é o número de vezes que a playlist foi encontrada na lista
    //pos é a posição da playlist na lista
    //tam é o tamanho da lista

    while(corr != nullptr){ // percorre a lista
        if(corr->nome_playlist == nome){ // se o nome da playlist for igual ao nome da playlist atual
            pos = tam; 
            achou = 1;
        }
        tam ++;
        corr = corr->proximo;
    }

    corr = cabeca;

    if(achou == 0){ // se a playlist não foi encontrada
        std::cout << "A playlist digitada não está na lista" << std::endl;
    }
    else {
        
        if(achou == 1){
            while(corr != nullptr)
            {
                if(corr->proximo->nome_playlist == nome && cauda != corr->proximo)
                {
                    anterior = corr;
                    corr = corr->proximo;
                    delete corr;
                    break;
                }
            }
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



