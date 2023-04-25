#include <iostream>
using namespace std;
int main(){

    // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
    int x =10;
    

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *p=nullptr;

    // 3) Declare um vetor de inteiros e inicialize com valores de 9 a 0 (nessa ordem)
    int *v = new int [10];
    int elementos =9;
    for(int i=0;i<10;i++){
    v[i] = elementos;
    elementos--;
    }

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout<< &x<< endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    cout<< x<< endl;
    

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    
    cout<< &p<< endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    
    cout<< p<< endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    
    cout<< &v<< endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout<< &v[0]<< endl;
    

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout<< v[0]<< endl;
    

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    
        p =  &x;

    // 12) Imprima o VALOR da variável declarada em (2)
    cout<< p << endl;
    

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<< *p << endl;
    

    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do VALOR de (2)
    cout<< "endereco de 1 :" << &x << "valor de 2 :" << *p << endl;
    

    // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)

        *p = 5;
    

    // 16) Imprima o VALOR da variável declarada em (1)
    
    cout<< x << endl;

    // 17) Atribua o ENDEREÇO apontado pela variável (3) à variável declarada em (2)
    p=v;

    // 18) Imprima o VALOR da variável declarada em (2)
    cout<< p << endl;

    // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<< *p << endl;
    

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    p=&v[0];

    // 21) Imprima o VALOR da variável declarada em (2)
    cout<< p << endl;
    

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    
    cout<< *p << endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(int i=0;i<10;i++){
        p= &v[i];
        *p *=10;
    }

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(int i=0;i<10;i++){
        if(i==9){
            cout<< v[i]<< endl;
        } else{
            cout<<v[i]<< " ";
        }
    }
    

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    
    for (int i = 0; i < 10; i++) {
        if (i != 9){
             cout << *(v + i) << " ";}
        else cout << *(v + i) << endl;
    }
    
    

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
        p = v;
    for (int i = 0; i < 10; i++) {
        if (i != 9) cout << *(p + i) << " ";
        else  cout << *(p + i) << endl;
    }

    // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
    p=&v[4];

    // 28) Imprima o VALOR da variável declarada em (2)
    cout<< p << endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    
    cout<< *p << endl;

    // 30) Imprima o VALOR guardado no: ENDEREÇO do ponteiro (2) decrementado de 4
    
    cout<< *(p-4) << endl;

    // 31) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    
    int **pp=NULL;
     pp=&p;

    // 32) Imprima o VALOR da variável declarada em (31)

    cout<< pp << endl;
    

    // 33) Imprima o ENDEREÇO da variável declarada em (31)
    
    cout<< &pp << endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO apontado por (31)
    
    cout<< *pp << endl;

    // 35) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (31)
    
    cout<< **pp << endl;

    delete v;
    return 0;
}