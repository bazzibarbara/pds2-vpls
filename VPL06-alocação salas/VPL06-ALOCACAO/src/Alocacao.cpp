#include "../include/Alocacao.hpp"
#include<iostream>

using namespace std; 

Alocacao::Alocacao(string dia, string horario,string sala){
    _dia=dia;
    _horario=horario;
    _sala=sala;
}
string Alocacao::get_dia(){
    return _dia;
}
string Alocacao::get_horario(){
    return _horario;
}
string Alocacao::get_sala(){
    return _sala;
}
void Alocacao::imprimir_dados(){
    cout<< get_dia() << " " << get_horario() << " " << get_sala() << endl;
}