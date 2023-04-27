#include <iostream>
#ifndef LISTA_H
#define LISTA_H
#include "No.h"

template <typename N> class lista
{
private:
    No<N>* cabeca;
    No<N>* cauda;

public:
    void Lista();
    void lista(No<N> *cabeca, No<N> *cauda);
    void set_cabeca(No<N> *cabeca);
    void set_cauda(No<N> *cauda);
    No<N> *get_cauda();
    No<N> *get_cabeca();

    void adicionar(N valor);
    No<T>* buscar(int index);
    void remover(int index);
};

template<typename N>
void lista<N>::Lista()
    {
        this->cabeca = nullptr;
        this->cauda = nullptr;
    }

template<typename N>
void lista<N>::lista(No<N> *cabeca, No<N> *cauda)
{
    this->cabeca = cabeca;
    this->cauda = cauda;
}

template<typename N>
void lista<N>::set_cabeca(No<N> *cabeca)
{
    this->cabeca = cabeca;
}

template<typename N>
void lista<N>::set_cauda(No<N> *cauda)
{
    this->cauda = cauda;
}

template<typename N>
No<N> *lista<N>::get_cauda()
{
    return cauda;
}

template<typename N>
No<N> *lista<N>::get_cabeca()
{
    return cabeca;
}

//adiciona um elemento no fim da lista
template<typename N>
void lista<N>::adicionar(N valor){
    novo = new No;
    novo->valor = valor;
    novo->proximo = nullptr;

    No* temp = lista;

    while(temp -> proximo){
        temp = temp->proximo;
    }

    temp->proximo = novo;
}

//encontra o elemento da lista por meio da sua posição
template<typename N>
No<T>* lista<N>::buscar(int index){
    
}

template<typename N>
void lista<N>::remover(int index){

}

#endif