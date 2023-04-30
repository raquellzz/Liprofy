#include <iostream>
#include "Musica.h"

    Musica::Musica()
    {
        this->titulo = "";
        this->autor = "";
    }
    Musica::Musica(std::string titulo, std::string autor)
    {
        this->titulo = titulo;
        this->autor = autor;
    }
    void Musica::set_titulo(std::string titulo)
    {
        this->titulo = titulo;
    }
    void Musica::set_autor(std::string autor)
    {
        this->autor = autor;
    }
    std::string Musica::get_titulo()
    {
        return titulo;
    }
    std::string Musica::get_autor()
    {
        return autor;
    }