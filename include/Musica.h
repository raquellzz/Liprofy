#include <iostream>

#ifndef MUSICA_H
#define MUSICA_H

class Musica
{
public:
    std::string titulo; // titulo da musica
    std::string artista; // artista da musica
    Musica *proximo; // ponteiro para a proxima musica
};

#endif

