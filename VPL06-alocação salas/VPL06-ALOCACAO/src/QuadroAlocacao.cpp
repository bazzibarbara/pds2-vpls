#include "../include/QuadroAlocacao.hpp"
#include "../include/Alocacao.hpp"
#include "../include/Disciplina.hpp"
#include <algorithm>
#include <iostream>


void Quadro_Alocacao::inserir_alocacao(string codigo, string nome, string dia, string horario, string sala){
    auto q = _alocacoes_disciplinas.begin();
    while(q != _alocacoes_disciplinas.end()){
        if(q->first == codigo){
            q->second.inserir_alocacao(dia,horario,sala);
        }
        q= next(q);
    }
    Disciplina nova_d= Disciplina(codigo,nome);
    nova_d.inserir_alocacao(dia,horario,sala);
    _alocacoes_disciplinas.insert(pair<string,Disciplina>(codigo,nova_d));

}

void Quadro_Alocacao::remover_alocacao_disciplina(string codigo, string horario){
auto pair = _alocacoes_disciplinas.begin()
while(pair != _alocacoes_disciplinas.end()){
    if(pair->first==codigo){
        pair->second.remover_alocacao(horario);
    }
    pair = next(pair);
    }

}
vector<Disciplina> recuperar_disciplinas_mais_ofertadas(const vector<Disciplina>& disciplinas) {
    vector<Disciplina> disc_mais_ofertadas;
    int size_aloc=0

    auto percorre_disciplinas = _alocacoes_disciplinas.begin()
    while(percorre_disciplinas != _alocacoes_disciplinas.end()){
        Disciplina disc_valores = percorre_disciplinas->second;
        int size_this_disc= disc_valores.get_size_aloc();

            if(size_this_disc > size_aloc){
                size_aloc = size_this_disc;
                disc_mais_ofertadas.clear();
                disc_mais_ofertadas.push_back(disc_valores);
            }else if(size_this_disc == size_aloc){
                disc_mais_ofertadas.push_back(disc_valores;)
            }
            percorre_disciplinas = next(percorre_disciplinas);
    }
    return disc_mais_ofertadas;
}


void Quadro_Alocacao::imprimir_alocacao_completa(){
    auto it = _alocacoes_disciplinas.begin()
        while( it != _alocacoes_disciplinas.end()){
        it->second.imprimir_alocacao();
        it = next(it);
        }
 }