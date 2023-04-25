#ifndef FILA_DE_PRIORIDADE_H
#define FILA_DE_PRIORIDADE_H

#pragma once

#include <string>
#include<vector>

using std::string;
using namespace std;

struct No {
int prioridade;
string elemento;
No* proximo;
};

class FilaDePrioridade {
 private:
  // Número de elementos da fila.
  int _tamanho;  
 
  // Ponteiro para o primeiro da lista encadeada. 
  // Quando tamanho_ == 0, o valor deste ponteiro é nullptr.
  No* _primeiro; 


 public:
  // Constrói uma fila vazia.
  FilaDePrioridade();

  // Retorna o elemento de maior prioridade.
  // PRECONDIÇÃO: a fila tem pelo menos um elemento.
  string primeiro() const;

  // Retorna o número de elementos na fila.
  int tamanho() const;

  // Testa se a fila está vazia.
  bool vazia() const;

  // Remove o elemento de maior prioridade.
  // PRECONDIÇÃO: a fila tem pelo menos um elemento.
  void RemoverPrimeiro();

  // Insere um elemento s fila com prioridade p;
  // OBS: Pode haver repetição de elementos.
  // Neste caso, os elementos podem ter prioridades iguais ou diferentes. 
  void Inserir(int p, string s);

  // Remove todos os elementos da fila.
  void Limpar();


};
#endif