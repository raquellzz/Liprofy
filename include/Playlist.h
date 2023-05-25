#include <iostream>
#include "Lista.h"
#include "Musica.h"

#pragma once

class Playlist
{
private:
    std::string nome;
    Lista<Musica> musicas;
public:
    // Métodos especiais
    // Cstrc.
    Playlist(std::string nome)
    {
        this->nome = nome;
    }
    // Dstrc.
    ~Playlist()
    {

    }
    //====================================== Sets =========================================
    void setNome(std::string nome) { this->nome = nome; }
    //====================================== Gets =========================================
    std::string getNome() { return nome; }
    Lista<Musica> getMusicas() { return musicas; }
    //=================================== Operadores ======================================
    Playlist operator=(Playlist &playlist) { this->nome = playlist.getNome(); this->musicas = playlist.getMusicas(); }
    bool operator==(Playlist &playlist) { return this->nome == playlist.getNome() && musicas == playlist.getMusicas(); }

};