#include <stdio.h>

int main(void){

    //Declarando variavel 'n' inteira de curto valor
    short int n = 1;

    //Estrutura de repetição para contar de 1 a 10
    while (n <= 10){
        //Escreve na tela valor da variavel n
        printf("\n%hd,",n);
        n++; //incrementa variavel n
    }

    return 0;
}