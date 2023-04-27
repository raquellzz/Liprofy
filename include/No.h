#include <iostream>
#ifndef NO_H
#define NO_H

template <typename N> class No {
    private:
    N valor;
    No<N> *proximo;

    public:
        void No(N valor);

        void set_valor(N value);

        void set_proximo(No<N> *next);

        N get_valor();

        No<N> *get_proximo();
};

#endif