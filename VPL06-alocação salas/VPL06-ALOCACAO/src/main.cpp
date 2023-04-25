// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_alocacao.hpp"
#include "../include/Alocacao.hpp"
#include "../include/Disciplina.hpp"
#include "../include/QuadroAlocacao.hpp"
#include <iostream>
using namespace std;

int main() {

char comando;
while (cin>> comando ){
    if (comando== 'a'){
        cin>> codigo >>nome >> dia>>horario>>sala;
        quadro.inserir_alocacao(codigo,nome,dia,horario,sala);
    }
    if (comando== 'm'){
    vector<Disciplina> vetor_m = quadro.recuperar_disciplinas_mais_ofertadas();
    for(Disciplina vet : vetor_m){
    vet.imprimir_alocacao();
    }
    }
    if (comando== 'r'){
        quadro.remover_alocacao_discipina(codigo,horario);
    }
    if (comando== 'p'){
        quadro.imprimir_alocacao_completa();
    }
    if (comando== 'b'){
    avaliacao_basica(); 
    }
    
    return 0;
    } 
}