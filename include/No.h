#include <iostream>
#include "music.h"
#ifndef NO
#define NO


class No
{
private:
    music valor;
    No *proximo;

public:
    void No::No(T valor)
    {
        this->valor = valor;
        this->proximo = nullptr;
    }
    void knot::set_valor(T value)
    {
        this->value = value;
    }
    void knot::set_proximo(knot *next)
    {
        this->next = next;
    }
    T knot::get_valor()
    {
        return value;
    }
    knot *knot::get_proximo()
    {
        return next;
    }
};

#endif