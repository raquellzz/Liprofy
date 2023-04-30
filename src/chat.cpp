// template <typename T>
// class No {
// public:
//     T dado;
//     No<T>* proximo;
    
//     No(const T& dado) : dado(dado), proximo(nullptr) {}
// };

// template <typename T>
// class ListaEncadeada {
// private:
//     No<T>* cabeca;
//     int tamanho;
    
// public:
//     ListaEncadeada() : cabeca(nullptr), tamanho(0) {}
    
//     ~ListaEncadeada() {
//         No<T>* atual = cabeca;
//         while (atual != nullptr) {
//             No<T>* proximo = atual->proximo;
//             delete atual;
//             atual = proximo;
//         }
//     }
    
//     // Adiciona um novo elemento no início da lista.
//     void inserir_inicio(const T& dado) {
//         No<T>* novoNo = new No<T>(dado);
//         novoNo->proximo = cabeca;
//         cabeca = novoNo;
//         tamanho++;
//     }
    
//     // Adiciona um novo elemento no final da lista.
//     void inserir_fim(const T& dado) {
//         No<T>* novoNo = new No<T>(dado);
//         if (cabeca == nullptr) {
//             cabeca = novoNo;
//         } else {
//             No<T>* atual = cabeca;
//             while (atual->proximo != nullptr) {
//                 atual = atual->proximo;
//             }
//             atual->proximo = novoNo;
//         }
//         tamanho++;
//     }
    
//     // Retorna o elemento no início da lista.
//     T inicio() const {
//         if (cabeca == nullptr) {
//             throw std::out_of_range("lista vazia");
//         }
//         return cabeca->dado;
//     }
    
//     // Retorna o elemento no final da lista.
//     T fim() const {
//         if (cabeca == nullptr) {
//             throw std::out_of_range("lista vazia");
//         }
//         No<T>* atual = cabeca;
//         while (atual->proximo != nullptr) {
//             atual = atual->proximo;
//         }
//         return atual->dado;
//     }
    
//     // Retorna true se a lista estiver vazia, false caso contrário.
//     bool vazia() const {
//         return cabeca == nullptr;
//     }
    
//     // Retorna o tamanho da lista.
//     int tamanho_lista() const {
//         return tamanho;
//     }
    
//     // Remove o primeiro elemento da lista que contém o dado especificado.
//     void remover(const T& dado) {
//         if (cabeca == nullptr) {
//             return;
//         }
//         if (cabeca->dado == dado) {
//             No<T>* antigaCabeca = cabeca;
//             cabeca = cabeca->proximo;
//             delete antigaCabeca;
//             tamanho--;
//             return;
//         }
//         No<T>* atual = cabeca;
//         while (atual->proximo != nullptr && atual->proximo->dado != dado) {
//             atual = atual->proximo;
//         }
//         if (atual->proximo != nullptr) {
//             No<T>* antigoNo = atual->proximo;
//             atual->proximo = antigoNo->proximo;
//             delete antigoNo;
//             tamanho--;
//         }
//     }
    
//     // Remove todos os elementos da lista.
//     void limpar() {
//         No<T>* atual = cabeca;
//         while (atual != nullptr) {
//             No<T>* proximo = atual->proximo;
//             delete

//         }
//     }

//     int buscar_indice(const T& valor) const {
//         No<T>* atual = cabeca;
//         int indice = 0;
//         while (atual != nullptr) {
//             if (atual->dado == valor) {
//                 return indice;
//             }
//             atual = atual->proximo;
//             indice++;
//         }
//         return -1;
//     }
// }