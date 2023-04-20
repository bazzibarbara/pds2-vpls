#ifndef ALOCACAO_HPP
#define ALOCACAO_HPP
#include <string>
using  namespace std;


class Alocacao{
    private: 
        string _dia;
        string _horario; 
        string _sala;

    public:
        Alocacao(string dia, string horario,string sala);
        void imprimir_dados();
        string get_dia();
        string get_horario();
        string get_sala();

};
#endif