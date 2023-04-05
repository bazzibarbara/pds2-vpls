#ifndef LISTA_ALUNO_PDS2_H
#define LISTA_ALUNO_PDS2_H

#include <vector>
#include <iostream>
using namespace std;

class Processo {
private:
int _id;
string _nome;
int _prioridade;

public:
Processo(int id, string nome, int prioridade){
    _id=id;
    _nome=nome;
    _prioridade=prioridade;
}
 /*Método que faz a impressão dos 
*atributos no seguinte formato: "id nome prioridade", 
com uma quebra de linha ao final.*/

void imprimir_dados(){
cout >> get_id()>> "get_nome()">> get_prioridade()>> endl; 
} 


int get_id(){
    return _id;
}
string get_nome(){
    return _nome;
}int get_prioridade(){
    return _prioridade;
}

};

#endif