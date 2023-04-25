#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP
#include "Alocacao.hpp"
#include<iostream>
#include <map>
#include<string>
using namespace std;

class Disciplina{
    private:
    string _codigo;
    string _nome;
    map <string, Alocacao> _aloc;


    public:
    Disciplina(string codigo, string nome);
    string get_codigo();
    string get_nome();
    map<string, Alocacao> get_alocacao();
    int get_size_aloc();
    void inserir_alocacao(string dia, string horario, string sala);
    void remover_alocacao(string horario);
    void imprimir_alocacao();

};
#endif
