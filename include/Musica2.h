#include <iostream>

#ifndef MUSICA2_H
#define MUSICA2_H

class Musica
{
public:
    std::string titulo; // titulo da musica
    std::string artista; // artista da musica
    Musica *proximo; // ponteiro para a proxima musica
    // Musica(std::string titulo = "", std::string artista = "", Musica *proximo = nullptr);
};

#endif

