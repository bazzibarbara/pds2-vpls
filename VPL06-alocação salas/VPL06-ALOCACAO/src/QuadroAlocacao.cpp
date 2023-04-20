#include "../include/QuadroAlocacao.hpp"
#include "../include/Alocacao.hpp"
#include "../include/Disciplina.hpp"
#include <algorithm>
#include <iostream>


void Quadro_Alocacao::inserir_alocacao(string codigo, string nome, string dia, string horario, string sala){
alocacoes_disciplinas.insert(make_pair(vector<Alocacao>,Disciplina));
}

Quadro_Alocacao::remover_alocacao_disciplina(string codigo, string horario){
 int it = find_if(disciplina.get_alocacoes().begin(), disciplina.get_alocacoes().end(), 
                      [horario](const Alocacao& a) { return a.get_horario() == horario; });
                      
    if (it == disciplina.get_alocacoes().end()) {
        cout << "Alocação não encontrada na disciplina " << codigo << endl;
        return;
    }

    if (it->get_codigo() != codigo) {
        cout << "Alocação não encontrada na disciplina " << codigo << endl;
        return;
    }

    disciplina.get_alocacoes().erase(it);

}
vector<Disciplina> recuperar_disciplinas_mais_ofertadas(const vector<Disciplina>& disciplinas) {
    unordered_map<string, int> num_alocacoes;

    for (const auto& disciplina : disciplinas) {
        for (const auto& alocacao : disciplina.get_alocacoes()) {
            num_alocacoes[alocacao.get_codigo()]++;
        }
    }

    int max_alocacoes = 0;
    for (const auto& [codigo, num] : num_alocacoes) {
        if (num > max_alocacoes) {
            max_alocacoes = num;
        }
    }

    vector<Disciplina> disciplinas_mais_ofertadas;
    for (const auto& disciplina : disciplinas) {
        int num = 0;
        for (const auto& alocacao : disciplina.get_alocacoes()) {
            if (num_alocacoes[alocacao.get_codigo()] == max_alocacoes) {
                num++;
            }
        }
        if (num > 0 && num == max_alocacoes) {
            disciplinas_mais_ofertadas.push_back(disciplina);
        }
    }

    return disciplinas_mais_ofertadas;
}


Quadro_Alocacao::imprimir_alocacao_completa(){
    // Cria um vetor com todas as alocações
    vector<Alocacao> alocacoes;
    for (const auto& disciplina : disciplinas) {
        for (const auto& alocacao : disciplina.get_alocacoes()) {
            alocacoes.push_back(alocacao);
        }
    }

    // Ordena as alocações pelo horário
    sort(alocacoes.begin(), alocacoes.end(), [](const Alocacao& a1, const Alocacao& a2) {
        return a1.get_horario() < a2.get_horario();
    });

    // Imprime todas as alocações ordenadas pelo horário
    cout << "Quadro de alocação:" << endl;
    for (const auto& alocacao : alocacoes) {
        cout << alocacao.get_codigo() << " " << alocacao.get_nome() << " " << alocacao.get_dia() << " "
             << alocacao.get_horario() << " " << alocacao.get_sala() << endl;
    }
}