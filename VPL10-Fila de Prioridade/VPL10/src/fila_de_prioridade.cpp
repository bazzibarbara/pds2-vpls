#include "../include/fila_de_prioridade.h"
#include <algorithm>
inline FilaDePrioridade::FilaDePrioridade() {
_tamanho = 0;
_primeiro = nullptr;
}
inline string FilaDePrioridade::primeiro() const {
return _primeiro->elemento;
}
inline int FilaDePrioridade::tamanho() const {
        return _tamanho;
   }
// Testa se a fila está vazia.
inline bool FilaDePrioridade::vazia() const {
return _tamanho == 0;
}
// Remove o elemento de maior prioridade.
// PRECONDIÇÃO: a fila tem pelo menos um elemento.
inline void FilaDePrioridade::RemoverPrimeiro() {
No* antigo_primeiro = _primeiro;
_primeiro = _primeiro->proximo;
delete antigo_primeiro;
_tamanho--;
}
// Insere um elemento s fila com prioridade p;
// OBS: Pode haver repetição de elementos.
// Neste caso, os elementos podem ter prioridades iguais ou diferentes.
inline void FilaDePrioridade::Inserir(int p, string s) {
No* novo_no = new No;
novo_no->prioridade = p;
novo_no->elemento = s;
if (vazia() || p > _primeiro->prioridade) {
novo_no->proximo = _primeiro;
_primeiro = novo_no;
} else {
No* atual = _primeiro;
while (atual->proximo != nullptr && p <= atual->proximo->prioridade) {
atual = atual->proximo;
}
novo_no->proximo = atual->proximo;
atual->proximo = novo_no;
}
_tamanho++;
}
    
inline void FilaDePrioridade::Limpar() {
while (!vazia()) {
RemoverPrimeiro();
}
}
