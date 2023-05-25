#include <iostream>

#pragma once

class Musica
{
public:
    std::string titulo;
    std::string artista;

private:
    //================================ Métodos especiais ==================================
    // Cstrc.
    Musica(std::string titulo, std::string artista)
    {
        this->titulo = titulo;
        this->artista = artista;
    }
    // Dstrc.
    //====================================== Sets =========================================
    void setTitulo(std::string titulo) { this->titulo = titulo; }
    void setArtista(std::string artista) { this->artista = artista; }
    //====================================== Gets =========================================
    std::string getTitulo() { return titulo; }
    std::string getArtista() { return artista; }
    //=================================== Operadores ======================================
    Musica operator=(Musica &musica) { this->titulo = musica.getTitulo(); this->artista = musica.getArtista(); }
    bool operator==(Musica &musica) { return this->titulo == musica.getTitulo() && this->artista == musica.getArtista(); }
    friend std::ostream operator<<(std::ostream &os, Musica &musica) { os << musica.getTitulo() << " - " << musica.getArtista(); }
};
