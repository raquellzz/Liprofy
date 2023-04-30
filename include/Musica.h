#include <iostream>

#ifndef MUSICA
#define MUSICA

class Musica
{
private:
    std::string titulo;
    std::string autor;

public:
    Musica();
    
    Musica(std::string titulo, std::string autor);

    void set_titulo(std::string titulo);

    void set_autor(std::string autor);

    std::string get_titulo();

    std::string get_autor();
};

#endif