#include "Playlist2.h"

Playlist::Playlist(){
        this->nome_playlist = "";
        this->cabeca = nullptr;
        this->cauda = nullptr;
    }

Playlist::Playlist(std::string nome_playlist, Musica *cabeca, Musica *cauda){
    this->nome_playlist = nome_playlist;
    this->cabeca = cabeca;
    this->cauda = cauda;
}

int Playlist::buscar(std::string titulo, std::string artista){
    Musica *atual = new Musica;

    int existe = 0;
    atual = cabeca;

    while(atual != nullptr){
        if(atual->titulo == titulo && atual->artista == artista){
            existe ++;
        }
        atual = atual->proximo;
    }
    delete atual;
    return existe;
}

Musica* Playlist::busca(std::string titulo){
    Musica *atual = new Musica;

    atual = cabeca;

    while(atual != nullptr){
        if(atual->titulo == titulo){
            return atual;
        }
        atual = atual->proximo;
    }

    return nullptr;
}

//adiciona uma música na playlist
void Playlist::inserir(Musica *novo){

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

// void Playlist::deletar(std::string titulo, std::string artista){
//     Musica *atual = new Musica;
//     Musica *anterior = new Musica;

//     int pos, achou = 0;
//     atual = cabeca;

//     int tam = 1;
// }


//imprime todas as músicas de uma playlist
void Playlist::listar(){
    Musica *corr = new Musica;
    corr = cabeca;

    while(corr != nullptr){
        std::cout << "  -- Título: " << corr->titulo << ", artista: " << corr->artista << std::endl;
        corr = corr->proximo;
    }
}


void Playlist::tocar(int n){

}