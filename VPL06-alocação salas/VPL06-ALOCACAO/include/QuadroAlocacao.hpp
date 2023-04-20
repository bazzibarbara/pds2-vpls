#ifndef QUADRO_ALOCACAO_HPP
#define QUADRO_ALOCACAO_HPP
#include <vector>
#include <map>
using namespace std;
class Quadro_Alocacao{
private:
map<string,string> alocacoes_disciplinas;

public:

map<string,string> alocacoes_disciplinas;
void inserir_alocacao(string codigo, string nome, string dia, string horario, string sala);
remover_alocacao_disciplina(string codigo, string horario);
vector<Disciplina> recuperar_disciplinas_mais_ofertadas();
imprimir_alocacao_completa();

};
#endif

