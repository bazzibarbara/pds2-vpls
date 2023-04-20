#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP
#include "Alocacao.hpp"
#include <vector>
using namespace std;

class Disciplina{
    private:
    string _codigo;
    string _nome;
    vector <Alocacao> _aloc;


    public:
    Disciplina(string codigo, string nome);
    void inserir_alocacao(string dia, string horario, string sala);
    void remover_alocacao(string horario);
    void imprimir_alocacao();
    string get_codigo();
    string get_nome();
    vector<Alocacao> get_alocacoes();
    vector<Alocacao> get_sorted_alocacoes();
    
};
#endif
