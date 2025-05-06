#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    printf("***** Mini Game - Advinhe o número! *****\n");
    printf("O computador está pensando em um número...\n");
    printf("O número pode ser qualquer um de 1 a 100!\n");
    printf("***** Agora tente advinhar!!! *****\n");

    //Gerando um número aleatorio e armazenando em variavel unsigned int 'random'
    srand(time(0));
    unsigned int random = rand() % 100 + 1;
    unsigned int palpite = 101;
    unsigned int tentativas = 0;

    //Estrutura de repetição para ususario advinhar o numero
    while(random != palpite){

        printf("Digite um número: ");
        scanf("%u", &palpite);
        tentativas++;

        if(palpite < random){
            printf("Tente um número maior!\n");
        }else if(palpite > random){
            printf("Tente um número menor!\n");
        }else{
            printf("Você acertou!\n");
            printf("tentativas: %u\n", tentativas);
        }
    }
    return 0;
}