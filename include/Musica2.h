#include <iostream>

#ifndef MUSICA2_H
#define MUSICA2_H

class Musica
{
public:
    std::string titulo;
    std::string artista;
    Musica *proximo;
    
    
    // Musica(const Musica &t = "", const Musica &a = "", Musica *n = nullptr) : titulo{t}, artista{a}, proximo{n} {}
};

#endif

// Musica::Musica(std::string titulo, std::string artista, Musica *proximo){
//         this->titulo = titulo;
//         this->artista = artista;
//         this->proximo = nullptr;
//     }