#include <iostream>
#ifndef LISTA
#define LISTA
#include "No.h"
#include "Musica.h"

class lista
{
private:
    No<Musica>* cabeca;
    No<Musica>* cauda;
public:
    void Lista()
    {
        this->cabeca = nullptr;
        this->cauda = nullptr;
    }
    void adicionar(T valor)
    {
        valor->
    }
    No<T>* buscar(int index);
    void remover(int index);
    void lista(knot *cabeca, knot *cauda);
    void set_cabeca(knot *cabeca);
    void set_cauda(knot *cauda);
    knot *get_cauda();
    knot *get_cabeca();
};

#endif