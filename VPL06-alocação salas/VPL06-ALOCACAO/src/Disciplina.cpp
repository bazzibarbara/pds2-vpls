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
string Disciplina::get_codigo(){
    return _codigo;
}
string Disciplina::get_nome(){
    return _nome;
}
map<string,Alocacao> Disciplina::get_alocacao(){
    return _aloc;
}
int Disciplina::get_size_aloc(){
    return _aloc.size();
}

void Disciplina::inserir_alocacao(string dia, string horario, string sala ){
    Alocacao a = Alocacao(dia,horario,sala);
    _aloc.insert(pair<string,Alocacao>(horario, a));

}
void Disciplina::remover_alocacao(string horario){
    auto it= _aloc.begin();
    while(it != _aloc.end()){
        if(horario== it->first){
            _aloc.erase(it);
            break;
        }
        it= next(it);
    }
}



void Disciplina::imprimir_alocacao(){
    auto it= _aloc.begin();
    while(it != _aloc.end()){
        cout<< _codigo<< " "<< _nome << " ";
        it-> second.imprimir_dados();
        it = next(it);
        cout << _codigo << " " << _nome << " " << it->second.get_dia() << " " << it->second.get_horario() << " " << it -> second.get_sala() << endl;

    }
}

