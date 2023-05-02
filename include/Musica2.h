#include <iostream>

#ifndef MUSICA2_H
#define MUSICA2_H

class Musica
{
public:
    std::string titulo;
    std::string artista;
    Musica *proximo;
    // Musica(std::string titulo = "", std::string artista = "", Musica *proximo = nullptr);
};

#endif

