#include <iostream>
#ifndef NO
#define NO

template <typename T>
class No
{
private:
    T valor;
    No *proximo;

public:
    void No::No(T valor)
{
    this->valor = valor;
    this->proximo = nullptr;
}
    void set_valor(T valor);
    void set_proximo(No *proximo);
    T get_valor();
    No *get_proximo();
};

#endif