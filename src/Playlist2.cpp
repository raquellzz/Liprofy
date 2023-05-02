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

int Playlist::buscar(std::string titulo, std::string artista){ // retorna 1 se a musica existe na playlist e 0 se não existe
    Musica *atual = new Musica;

    int existe = 0;
    atual = cabeca;

    while(atual != nullptr){ // percorre a playlist
        if(atual->titulo == titulo && atual->artista == artista){
            existe = 1;
        }
        atual = atual->proximo;
    }
    delete atual;
    return existe;
}

Musica* Playlist::busca(std::string titulo){ // retorna a musica
    Musica *atual = new Musica;

    atual = cabeca;

    while(atual != nullptr){ // percorre a playlist
        if(atual->titulo == titulo){ // se o nome da musica for igual ao nome da musica atual
            return atual;
        }
        atual = atual->proximo;
    }

    return nullptr; // se não encontrar a musica
}


void Playlist::inserir(Musica *novo){ //adiciona uma música na playlist
    if(cabeca == nullptr){ // se a playlist estiver vazia
        cabeca = novo;
        cauda = novo;
        novo = nullptr;
    }
    else{ // se a playlist não estiver vazia
        cauda->proximo = novo;
        cauda = novo;
    }
}



void Playlist::deletar(std::string titulo){ // deleta uma música da playlist
    Musica *corr = new Musica;
    Musica *anterior = new Musica;

    corr = cabeca;
    int achou = 0, pos = 0, tam = 1;

    while(corr != nullptr){ // percorre a playlist
        if(corr->titulo == titulo){
            pos = tam;
            achou ++;
        }
        tam ++;
        corr = corr->proximo;
    }
    tam --;

    corr = cabeca;

    if(achou == 0){ // se a música não estiver na playlist
        std::cout << "A música digitada não está na playlist" << std::endl;
    }
    else { // se a música estiver na playlist
        
        if(pos == 1){ // se a música estiver na playlist apenas uma vez
            cabeca = cabeca->proximo;
            delete corr;
        }
        else if(pos == tam){ // se a música estiver na playlist na ultima posição
            while(corr->proximo != nullptr){
                anterior = corr;
                corr = corr->proximo;
            }
            cauda = anterior;
            anterior->proximo = nullptr;
            delete corr;
        }
        else{ // se a música estiver na playlist em qualquer outra posição
            for(int i = 1; i < pos; i ++){
                anterior = corr;
                corr = corr->proximo;
            }
            anterior->proximo = corr->proximo;
        }
    }

}


//imprime todas as músicas de uma playlist
void Playlist::listar(){ // lista todas as músicas da playlist
    Musica *corr = new Musica;
    corr = cabeca;
    int i = 1;
    while(corr != nullptr){ // percorre a playlist
        std::cout << "Música " << i << "  -- Título: " << corr->titulo << ", artista: " << corr->artista << std::endl; // imprime o nome da música
        corr = corr->proximo;
        i ++;
    }
}


void Playlist::tocar(){ // toca todas as músicas da playlist
    Musica *corr = new Musica;
    corr = cabeca;
    char acao = 's'; // variavel que recebe a ação do usuário

    while(corr != nullptr){// percorre a playlist
        if(acao == 'n'){ // se o usuário digitar 'n' para parar de tocar as músicas
            break;
        }
        if(acao == 's'){ // se o usuário digitar 's' para continuar tocando as músicas
            std::cout << "  -- Título: " << corr->titulo << ", artista: " << corr->artista << std::endl; // imprime o nome da música
            corr = corr->proximo;
            std::cin >> acao;
        }
    }
    std::cout << "Acabaram as músicas" << std::endl;
}

void Playlist::Destructor_Playlist(){ // destrutor da playlist
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