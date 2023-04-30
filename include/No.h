#include <iostream>
#ifndef NO_H
#define NO_H

template <typename N> class No {
    private:
        N valor;
        No<N> *proximo;
        No(const N &d = N(), No *n = nullptr) : valor{d}, proximo{n} {}
};
#endif