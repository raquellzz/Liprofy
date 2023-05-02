#include "Playlist2.h"
#include "Musica2.h"

// Playlist::Playlist(){
//     this->nome_playlist = "";
//     this->cabeca = nullptr;
//     this->cauda = nullptr;
// }

// void Playlist::Playlist(std::string nome_playlist, Musica *cabeca, Musica *cauda = nullptr, Playlist *proximo = nullptr){
//     this->nome_playlist = nome_playlist;
//     this->cabeca = cabeca;
//     this->cauda = cauda;
//     this->proximo = nullptr;
// }

int Playlist::buscar(std::string titulo, std::string artista){
    Musica *atual = new Musica;

    int existe = 0;
    atual = cabeca;

    while(atual != nullptr){
        if(atual->titulo == titulo && atual->artista == artista){
            existe = 1;
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



void Playlist::deletar(std::string titulo){
    Musica *corr = new Musica;
    Musica *anterior = new Musica;

    corr = cabeca;
    int achou = 0, pos = 0, tam = 1;

    while(corr != nullptr){
        if(corr->titulo == titulo){
            pos = tam;
            achou ++;
        }
        tam ++;
        corr = corr->proximo;
    }

    corr = cabeca;

    if(achou == 0){
        std::cout << "A música digitada não está na playlist" << std::endl;
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


//imprime todas as músicas de uma playlist
void Playlist::listar(){
    Musica *corr = new Musica;
    corr = cabeca;
    int i = 1;
    while(corr != nullptr){
        std::cout << "Música " << i << "  -- Título: " << corr->titulo << ", artista: " << corr->artista << std::endl;
        corr = corr->proximo;
        i ++;
    }
}


void Playlist::tocar(){
    Musica *corr = new Musica;
    corr = cabeca;
    char acao = 's';

    while(corr != nullptr){
        if(acao == 'n'){
            break;
        }
        else{
            std::cout << "  -- Título: " << corr->titulo << ", artista: " << corr->artista << std::endl;
            corr = corr->proximo;
            std::cin >> acao;
        }
    }
    std::cout << "Acabaram as músicas" << std::endl;
}

void Playlist::Destructor_Playlist(){
        Musica *corr = new Musica;
        Musica *anterior = new Musica;

        corr = cabeca;

        while(corr != nullptr){
            anterior = corr;
            corr = corr->proximo;
            delete anterior;
        }
        delete corr;
    }