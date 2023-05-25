#include <iostream>
#include "No.h"

#pragma once

template <typename T>
class Lista
{
private:
    No<T> *cabeca;
    No<T> *cauda;
    std::size_t tamanho;

public:
    //================================== métodos especiais ==================================
    // Cstrc.
    Lista()
    {
        cabeca = nullptr;
        cauda = nullptr;
        tamanho = 0;
    }
    // Dstrc.
    ~Lista()
    {
        No<T> *aux = cabeca;
        while (aux != nullptr)
        {
            No<T> *temp = aux->getProximo();
            delete aux;
            aux = temp;
        }
    }
    //======================================== sets ===========================================
    void setCabeca(No<T> *inicio) { this->inicio = inicio; }
    void setCauda(No<T> *fim) { this->fim = fim; }
    //======================================== gets ===========================================
    std::size_t getTamanho() { return tamanho; }
    No<T> *getCabeca() { return cabeca; }
    No<T> *getCauda() { return cauda; }
    //==================================== modificadores ======================================
    void adiciona(T valor)
    {
        No<T> *novo = new No<T>(valor, nullptr);
        if (cabeca == nullptr) // Lista vazia
        {
            cabeca = novo;
            cauda = novo;
        }
        else // Lista não vazia
        {
            cauda->setProximo(novo);
            cauda = novo;
        }
        tamanho++;
    }

    void remove(T valor)
    {
        // Caso não exista
        if (!existe())
        {
            std::cout << "valor não existe na lista" << '\n';
            return;
        }
        // Caso seja o primeiro
        if (cabeca->getValor() == valor)
        {
            No<T> *aux = cabeca;
            cabeca = cabeca->getProximo();
            delete aux;
            tamanho--;
            return;
        }
        // Caso seja o último
        if (cauda->getValor() == valor)
        {
            No<T> *aux = cabeca;
            while (aux->getProximo() != cauda)
            {
                aux = aux->getProximo();
            }
            delete cauda;
            cauda = aux;
            cauda->setProximo(nullptr);
            tamanho--;
            return;
        }
        // Caso esteja no meio
        No<T> *aux = cabeca;
        while (aux->getProximo()->getValor() != valor)
        {
            aux = aux->getProximo();
        }
        No<T> *temp = aux->getProximo()->getProximo();
        delete aux->getProximo();
        aux->setProximo(temp);
        tamanho--;
    }

    //====================================== leitores =========================================
    bool existe(T valor) { return busca(valor) != nullptr; }
    void listar()
    {
        No<T> *aux = cabeca;
        while (aux != nullptr)
        {
            std::cout << aux->getValor() << '\n';
            aux = aux->getProximo();
        }
    }
    void tocar()
    {
        No<T> *aux = cabeca;
        std::string input;
        while (aux != nullptr)
        {
            std::cout << "Tocar a próxima música? Digite [s/n]: ";
            std::cin >> input;
            std::cout << '\n';
            if (input == "n")
            {
                std::cout << "processo encerrado" << '\n';
                return;
            }
            std::cout << aux->getValor() << '\n';
            aux = aux->getProximo();
        }
    }
    No<T> *busca(T valor)
    {
        No<T> *aux = cabeca;
        while (aux != nullptr)
        {
            if (aux->getValor() == valor)
            {
                return aux;
            }
            aux = aux->getProximo();
        }
        return nullptr;
    }
    //====================================== operadores ========================================
    Lista<T> operator=(Lista<T> &lista)
    {
        //caso lista vazia
        if(lista.getCabeca() == nullptr) 
        {
            tamanho = 0;
            No<T> *aux = cabeca;
            while(aux != nullptr)
            {
                No<T> *temp = aux->getProximo();
                delete aux;
                aux = temp;
            }
            cabeca = nullptr;
            cauda = nullptr;
        }
        //caso lista exista
        tamanho = lista.getTamanho();
        No<T> *aux1 = cabeca;
        No<T> *aux2 = lista.getCabeca();
        while(aux2 != nullptr)
        {
            aux1->setValor(aux2->getValor());
            aux1 = aux1->getProximo();
            aux2 = aux2->getProximo();
        }
        while(aux1 != nullptr)
        {
            No<T> *temp = aux1->getProximo();
            delete aux1;
            aux1 = temp;
        }
    }
    Lista<T> operator+(Lista<T> &lista)
    {
        //caso lista vazia
        if (lista.getCabeca() == nullptr)
        {
            return *this;
        }
        //caso lista exista
        No<T> *aux1 = cauda;
        No<T> *aux2 = lista.getCabeca();
        while (aux2 != nullptr)
        {
            aux1->setProximo(aux2);
            aux1 = aux1->getProximo();
            aux2 = aux2->getProximo();
            ++tamanho;
        }
        cauda = aux1;
        cauda->proximo = nullptr;
        return *this;
    }
    bool operator ==(Lista<T> &musicas1)
    {
        if(tamanho != musicas1.getTamanho())
        {
            return false;
        }
        No<T> *aux1 = cabeca;
        No<T> *aux2 = musicas1.getCabeca();
        while(aux1 != nullptr && aux2 != nullptr)
        {
            if(aux1->getValor() != aux2->getValor())
            {
                return false;
            }
            aux1 = aux1->getProximo();
            aux2 = aux2->getProximo();
        }
    }
};
