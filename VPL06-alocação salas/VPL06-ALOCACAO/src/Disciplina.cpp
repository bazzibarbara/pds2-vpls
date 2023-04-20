#include "../include/Disciplina.hpp"
#include "../include/Alocacao.hpp"
#include "../src/Alocacao.cpp"
#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
Disciplina:: Disciplina(string codigo, string nome){
    _codigo=codigo;
    _nome=nome;
}

void Disciplina::inserir_alocacao(string dia, string horario, string sala ){
    Alocacao a = Alocacao(dia,horario,sala);
    _aloc.push_back(a);

}
void Disciplina::remover_alocacao(string horario){
    Alocacao horario_removido =Alocacao(0,"",0);
    for(unsigned i=0; _aloc.size(); i++){
        if(_aloc.at(i).get_horario()== horario){
            horario_removido=_aloc.at(i);
            _aloc.erase(_aloc.begin()+i);
        }
        else{
            cout << "Horario nao existe" << endl;
            }
    }

}
string Disciplina::get_codigo(){
    return _codigo;
}

string Disciplina::get_nome(){
    return _nome;
}

vector<Alocacao> Disciplina::get_alocacoes(){
    return _aloc;
}


void Disciplina::imprimir_alocacao(){
    for(Alocacao _aloc : get_sorted_alocacoes())
        cout << _codigo << " " << _nome << " " << aloc.get_dia() << " " << aloc.get_horario() << " " << aloc.get_sala() << endl;
}

vector<Alocacao> Disciplina::get_sorted_alocacoes(){
    vector<Alocacao> alocacoesOrdenadas = _aloc;
    sort(alocacoesOrdenadas.begin(), alocacoesOrdenadas.end(),
              [](const Alocacao& a, const Alocacao& b)  { return a.get_horario() < b.get_horario();  
              });

    return alocacoesOrdenadas;
}
