#include <iostream>
#include <string>
#include "../include/fila_de_prioridade.h"
#include "../src/fila_de_prioridade.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  FilaDePrioridade fila;
  // Lê os dados e insere na fila de prioridade.
  string nome;
  int idade;
  while (cin >> nome >> idade) {
    fila.Inserir(idade, nome);
  }
  // Imprime os nomes em ordem de prioridade.
  while (!fila.vazia()) {
    cout << fila.primeiro() << endl;
    fila.RemoverPrimeiro();
  } 
  return 0;
}
