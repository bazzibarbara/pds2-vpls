// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_alocacao.hpp"
#include <iostream>
using namespace std;
int main() {

char comando;
while (cin>> comando ){
    if (comando== 'a'){
'a codigo nome dia horario sala': comando para adicionar uma nova 
alocacao no quadro de acordo com os parâmetros passados. Você pode assumir que as informações
 *não* possuem espaço, ou seja, são palavras únicas.

    }
    if (comando== 'm'){
'm': comando para recuperar as disciplinas mais ofertas.
 Sempre que esse comando for chamado além de recuperar as disciplinas, 
 a alocação de cada uma também deve ser impressa.

    }
    if (comando== 'r'){

'r codigo horario': remove uma alocação do quadro de acordo com o código da disciplina e horário informados.

    }
    if (comando== 'p'){
'p': comando para imprimir a alocação completa.

    }
    if (comando== 'b'){

'b': deve chamar a função 'avaliacao_basica()' implementada no arquivo "avaliacao_basica_alocacao.hpp" (já incluído no main.cpp). Essa função faz uma avaliação do código (não apenas dos resultados).
    }
}
    
    return 0;
}