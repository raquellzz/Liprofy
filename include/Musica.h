#include <iostream>

#ifndef MUSICA
#define MUSICA

class Musica
{
private:
    std::string titulo;
    std::string autor;

public:
    void Musica(std::string titulo, std::string autor)
    {
        this->titulo = titulo;
        this->autor = autor;
    }
    void set_titulo(std::string titulo)
    {
        this=titulo = titulo;
    }
    void set_autor(std::string autor)
    {
        this->autor = autor;
    }
    std::string get_titulo()
    {
        return titulo;
    }
    std::string get_autor()
    {
        return autor;
    }
};

#endif