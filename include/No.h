#include <iostream>

#pragma once

template <typename T>
class No
{
public:
private:
    T valor;
    No<T> *proximo;

public:
    // Métodos especiais
    // Cstrc.
    No(T valor, No<T> &proximo)
    {
        this->valor = valor;
        this->proximo = proximo;
    }
    // Dstrc.
    ~No() { delete valor; }
    // Operadores
    friend No<T> operator=(No<T> &no)
    {
        this->valor = no.getValor();
        this->proximo = no.getProximo();
    }
    friend bool operator==(No<T> &no) { return this->valor == no.getValor(); }
    // sets
    void setProximo(No<T> *proximo) { this->proximo = proximo; }
    void setValor(T valor) { this->valor = valor; }
    // gets
    T getValor() { return valor; }
    No<T> *getProximo() { return proximo; }
};
