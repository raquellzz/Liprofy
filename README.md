
<h1 align="center"> Projeto 1: Liprofy </h1>

# Índice 

* [Índice](#índice)
* [Descrição do Projeto](#descrição-do-projeto)
* [Roteiro de Entradas e Saídas](#roteiro-de-entradas-e-saídas)
* [Acesso ao Projeto e Compilação](#acesso-ao-projeto-e-compilação)
* [Pessoas Desenvolvedoras do Projeto](#pessoas-desenvolvedoras-do-projeto)

# Descrição do Projeto

O intuito deste projeto é desenvolver um sistema de música a partir de listas encadeadas com a linguagem C++. O nome do nosso sistema é Liprofy, onde implementamos nosso conhecimento de programação para o construir da melhor forma possível.

# Roteiro de Entradas e Saídas

Essas são as possibildiades de entrada para o programa, de maneira a serem testadas as suas diversas funcionalidades:

Lembre que nas entradas, apenas podem ser utilizados números, letras em maiúsculo e minúsculo.

```
0. Sair
1. Gerenciar Playlists
2. Gerenciar Músicas

Escolha uma ação: 2


0. Voltar
1. Adicionar uma Música
2. Remover uma Música
3. Tocar Músicas
4. Listar Músicas

Escolha uma ação: 1

Aqui está uma lista de todas as músicas:

Digite o título da música: Admiravel Gado Novo
Digite o nome do artista: Ze Ramalho

A música foi cadastrada com sucesso

0. Voltar
1. Adicionar uma Música
2. Remover uma Música
3. Tocar Músicas
4. Listar Músicas

Escolha uma ação: 1

Aqui está uma lista de todas as músicas:

Digite o título da música: Missao Apollo
Digite o nome do artista: Zimbra

>>> A música foi cadastrada com sucesso

0. Voltar
1. Adicionar uma Música
2. Remover uma Música
3. Tocar Músicas
4. Listar Músicas

Escolha uma ação: 1

Aqui está uma lista de todas as músicas:

Digite o título da música: Asma
Digite o nome do artista: Fresno



>>> A música foi cadastrada com sucesso

0. Voltar
1. Adicionar uma Música
2. Remover uma Música
3. Tocar Músicas
4. Listar Músicas

Escolha uma ação: 1

Aqui está uma lista de todas as músicas:

Digite o título da música: Tempo de Pipa
Digite o nome do artista: Cicero

>>> A música foi cadastrada com sucesso

0. Voltar
1. Adicionar uma Música
2. Remover uma Música
3. Tocar Músicas
4. Listar Músicas

Escolha uma ação: 4

Aqui está uma lista de todas as músicas: 
Música 1  -- Título: Admiravel Gado Novo, artista: Ze Ramalho
Música 2  -- Título: Missao Apollo, artista: Zimbra
Música 3  -- Título: Asma, artista: Fresno
Música 4  -- Título: Tempo de Pipa, artista: Cicero

0. Voltar
1. Adicionar uma Música
2. Remover uma Música
3. Tocar Músicas
4. Listar Músicas

Escolha uma ação: 0

0. Sair
1. Gerenciar Playlists
2. Gerenciar Músicas

Escolha uma ação: 1

0. Voltar
1. Adicionar uma Playlist
2. Remover uma Playlist
3. Listar Playlists
4. Acessar uma playlist

Escolha uma ação: 1

Digite um nome para a playlist: Boas

>>> A playlist foi criada com sucesso

0. Voltar
1. Adicionar uma Playlist
2. Remover uma Playlist
3. Listar Playlists
4. Acessar uma playlist

Escolha uma ação: 1

Digite um nome para a playlist: Marromeno

>>> A playlist foi criada com sucesso

0. Voltar
1. Adicionar uma Playlist
2. Remover uma Playlist
3. Listar Playlists
4. Acessar uma playlist

Escolha uma ação: 2

Aqui está uma lista de todas as playlists: 

Playlist 1: Boas
Playlist 2: Marromeno

Digite o nome da playlist a ser deletada: 
Marromeno

>>> A playlist foi deletada com sucesso

0. Voltar
1. Adicionar uma Playlist
2. Remover uma Playlist
3. Listar Playlists
4. Acessar uma playlist

Escolha uma ação: 3

Aqui está uma lista de todas as playlists: 

Playlist 1: Boas

0. Voltar
1. Adicionar uma Playlist
2. Remover uma Playlist
3. Listar Playlists
4. Acessar uma playlist

Escolha uma ação: 4

Playlist 1: Boas

Digite o nome da playlist a ser acessada: 
Boas

0. Voltar
1. Adicionar Música à playlist
2. Remover uma Música da Playlist
3. Tocar Músicas da Playlist
4. Listar Músicas da Playlist

Escolha uma ação: 1

Aqui está uma lista de todas as músicas:
Música 1  -- Título: Admiravel Gado Novo, artista: Ze Ramalho
Música 2  -- Título: Missao Apollo, artista: Zimbra
Música 3  -- Título: Asma, artista: Fresno
Música 4  -- Título: Tempo de Pipa, artista: Cicero

Digite o título de uma música já existente para adicionar à playlist:
Asma
Digite o artista dessa música: 
Fresno

>>> A música foi adicionada com sucesso

0. Voltar
1. Adicionar Música à playlist
2. Remover uma Música da Playlist
3. Tocar Músicas da Playlist
4. Listar Músicas da Playlist

Escolha uma ação: 1

Aqui está uma lista de todas as músicas:
Música 1  -- Título: Admiravel Gado Novo, artista: Ze Ramalho
Música 2  -- Título: Missao Apollo, artista: Zimbra
Música 3  -- Título: Asma, artista: Fresno
Música 4  -- Título: Tempo de Pipa, artista: Cicero

Digite o título de uma música já existente para adicionar à playlist:
Missao Apolo
Digite o artista dessa música: 
Zimbra

>>> Essa música não existe

0. Voltar
1. Adicionar Música à playlist
2. Remover uma Música da Playlist
3. Tocar Músicas da Playlist
4. Listar Músicas da Playlist

Escolha uma ação: 1

Aqui está uma lista de todas as músicas:
Música 1  -- Título: Admiravel Gado Novo, artista: Ze Ramalho
Música 2  -- Título: Missao Apollo, artista: Zimbra
Música 3  -- Título: Asma, artista: Fresno
Música 4  -- Título: Tempo de Pipa, artista: Cicero

Digite o título de uma música já existente para adicionar à playlist:
Missao Apollo
Digite o artista dessa música: 
Zimbra

>>> A música foi adicionada com sucesso

0. Voltar
1. Adicionar Música à playlist
2. Remover uma Música da Playlist
3. Tocar Músicas da Playlist
4. Listar Músicas da Playlist

Escolha uma ação: 1

Aqui está uma lista de todas as músicas:
Música 1  -- Título: Admiravel Gado Novo, artista: Ze Ramalho
Música 2  -- Título: Missao Apollo, artista: Zimbra
Música 3  -- Título: Asma, artista: Fresno
Música 4  -- Título: Tempo de Pipa, artista: Cicero

Digite o título de uma música já existente para adicionar à playlist:
Tempo de Pipa
Digite o artista dessa música: 
Cicero

>>> A música foi adicionada com sucesso

0. Voltar
1. Adicionar Música à playlist
2. Remover uma Música da Playlist
3. Tocar Músicas da Playlist
4. Listar Músicas da Playlist

Escolha uma ação: 3

Para continuar tocando, digite s. Para parar, digite n
  -- Título: Asma, artista: Fresno
s
  -- Título: Missao Apollo, artista: Zimbra
s
-- Título: Tempo de Pipa, artista: Cicero
s
Acabaram as músicas

0. Voltar
1. Adicionar Música à playlist
2. Remover uma Música da Playlist
3. Tocar Músicas da Playlist
4. Listar Músicas da Playlist

Escolha uma ação: 2

Aqui está uma lista de todas as músicas:
Música 1  -- Título: Asma, artista: Fresno
Música 2  -- Título: Missao Apollo, artista: Zimbra
Música 3  -- Título: Tempo de Pipa, artista: Cicero

Digite o título de uma música já existente para adicionar à playlist: 
Missao Apollo

Digite o artista dessa música: 
Zimbra


>>> Essa música não existe

0. Voltar
1. Adicionar Música à playlist
2. Remover uma Música da Playlist
3. Tocar Músicas da Playlist
4. Listar Músicas da Playlist

Escolha uma ação: 2

Aqui está uma lista de todas as músicas:
Música 1  -- Título: Asma, artista: Fresno
Música 2  -- Título: Tempo de Pipa, artista: Cicero

Digite o título de uma música já existente para adicionar à playlist: 
Misao Apollo

Digite o artista dessa música: 
Zimbra


>>> A música foi deletada com sucesso

0. Voltar
1. Adicionar Música à playlist
2. Remover uma Música da Playlist
3. Tocar Músicas da Playlist
4. Listar Músicas da Playlist

Escolha uma ação: 0

0. Voltar
1. Adicionar uma Playlist
2. Remover uma Playlist
3. Listar Playlists
4. Acessar uma playlist

Escolha uma ação: 0

0. Sair
1. Gerenciar Playlists
2. Gerenciar Músicas

Escolha uma ação: 2

0. Voltar
1. Adicionar uma Música
2. Remover uma Música
3. Tocar Músicas
4. Listar Músicas

Escolha uma ação: 2

Aqui está uma lista de todas as músicas:
Música 1  -- Título: Admiravel Gado Novo, artista: Ze Ramalho
Música 2  -- Título: Missao Apollo, artista: Zimbra
Música 3  -- Título: Asma, artista: Fresno
Música 4  -- Título: Tempo de Pipa, artista: Cicero

Digite o título da música a ser deletada: 
Tempo de Pipa

>>> A música foi deletada com sucesso do sistema

0. Voltar
1. Adicionar uma Música
2. Remover uma Música
3. Tocar Músicas
4. Listar Músicas

Escolha uma ação: 3

Para continuar tocando, digite s. Para parar, digite n
  -- Título: Admiravel Gado Novo, artista: Ze Ramalho
s
  -- Título: Missao Apollo, artista: Zimbra
s
  -- Título: Título: Asma, artista: Fresno
s
Acabaram as músicas

0. Voltar
1. Adicionar uma Música
2. Remover uma Música
3. Tocar Músicas
4. Listar Músicas

Escolha uma ação: 0

0. Sair
1. Gerenciar Playlists
2. Gerenciar Músicas

Escolha uma ação: 0


```

# Acesso ao Projeto e Compilação

É possível acessar o repositório do projeto no Github ou baixá-lo.

Para compilação foi utilizado o Cmake na versão 3.22.1, para testar o programa é necessário ter o Cmake instalado.

Dentro da pasta do projeto, para entrar na pasta build, digite o comando 
```
cd build
```
Em seguida
```
cmake ..
make
```
E para executar o programa
```
./program
```


# Pessoas Desenvolvedoras do Projeto

Esse projeto foi desenvolvido pelo Grupo 7 de Linguagem de Programação 1, composto pelos alunos Artur Revorêdo Pinto e Raquel da Costa Freire, do curso de graduação Tecnologia da Informação na UFRN.