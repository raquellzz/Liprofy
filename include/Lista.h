#include <iostream>
#ifndef LISTA_H
#define LISTA_H
#include "No.h"

template <typename N> 
class Lista
{
private:
    No<N>* cabeca;
    No<N>* cauda;

public:
    Lista();
    Lista(No<N> *cabeca, No<N> *cauda);
    void set_cabeca(No<N> *cabeca);
    void set_cauda(No<N> *cauda);
    No<N> *get_cauda();
    No<N> *get_cabeca();

    // void adicionar(N valor);

    void imprime(Lista<N> &L);

    void push_back(Lista<N> *&L, const N &valor);


    void remover(Lista<N> *&L, const N &valor);

};
#endif

template<typename N>
Lista<N>::Lista()
    {
        this->cabeca = nullptr;
        this->cauda = nullptr;
    }

template<typename N>
Lista<N>::Lista(No<N> *cabeca, No<N> *cauda)
{
    this->cabeca = cabeca;
    this->cauda = cauda;
}

template<typename N>
void Lista<N>::set_cabeca(No<N> *cabeca)
{
    this->cabeca = cabeca;
}

template<typename N>
void Lista<N>::set_cauda(No<N> *cauda)
{
    this->cauda = cauda;
}

template<typename N>
No<N> *Lista<N>::get_cauda()
{
    return cauda;
}

template<typename N>
No<N> *Lista<N>::get_cabeca()
{
    return cabeca;
}

//adiciona um elemento no fim da Lista
// template<typename N>
// void Lista<N>::adicionar(N valor){
//     No<N>* novo = new No<N>{valor, nullptr};
//     // novo->valor = valor;
//     // novo->proximo = nullptr;

//     No<N>* temp = lista;

//     while(temp -> proximo){
//         temp = temp->proximo;
//     }

//     temp->proximo = novo;
// }


template <typename N> 
void apagar(Lista<N> *&L) {
  No<N> *prev{nullptr};
  while (L->cabeca != nullptr) {
    prev = L->cabeca;
    // L->cabeca = L->proximo;
    L.set_cabeca(L->proximo);
    delete prev;
  }
}

template <typename N> 
bool empty(Lista<N> *L) { return L.get_cabeca() == nullptr; }

template <typename N> 
void push_back(Lista<N> *&L, const N &valor) {
  No<N> *nn = new No<N>{valor};

  if (empty(L)) {
    L.set_cabeca(nn);
    return;
  }

  auto *last = L->cauda;
  last->proximo = nn;
}

template <typename N>
void Lista<N>::remover(Lista<N> *&L, const N &valor){
    
}

template <typename N>
void Lista<N>::imprime(Lista<N> &L){
    std::cout << std::endl;

    if(empty(L))
    {
        std::cout << "Lista vazia";
        return;
    }

    No<N>* aux = L.get_cabeca();

    while(aux->proximo != nullptr)
    {
        std::cout << aux << " ";
        aux = aux->proximo;
    }
}

