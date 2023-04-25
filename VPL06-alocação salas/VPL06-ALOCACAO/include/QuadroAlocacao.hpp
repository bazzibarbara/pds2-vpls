#ifndef QUADRO_ALOCACAO_HPP
#define QUADRO_ALOCACAO_HPP
#include <vector>
#include <map>
using namespace std;
class Quadro_Alocacao{
private:
map<string,Disciplina> _alocacoes_disciplinas;

public:

void inserir_alocacao(string codigo, string nome, string dia, string horario, string sala);
void remover_alocacao_disciplina(string codigo, string horario);
vector<Disciplina> recuperar_disciplinas_mais_ofertadas();
void imprimir_alocacao_completa();

};
#endif

