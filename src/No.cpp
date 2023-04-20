#include <iostream>
#include "No.h"

void No::No(T valor)
{
    this->valor = valor;
    this->proximo = nullptr;
}
void knot::set_value(T value)
{
    this->value = value;
}
void knot::set_next(knot *next)
{
    this->next = next;
}
T knot::get_value()
{
    return value;
}
knot *knot::get_next()
{
    return next;
}