#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int computador, usuario, opcao;
    
    srand(time(0));
    computador = rand() % 100 + 1;
    
    printf("Escolha um número para o tipo de comparação\n");
    printf("\n1 - Maior\n");
    printf("2 - Menor\n");
    printf("3 - Igual\n");
    printf("\nEscolha a comparação: ");
    scanf("%d", &opcao);
    
    printf("\nDigite um numero entre 1 e 100: ");
    scanf("%d", &usuario);
    
    printf("\nO computador escolheu: %d\n", computador);
    printf("Você escolheu: %d\n", usuario);
    
    switch(opcao){
    case 1:
        usuario > computador ? printf("Você venceu!\n") : printf("Você perdeu!\n");
        break;
    case 2:
        usuario < computador ? printf("Você venceu!\n") : printf("Você perdeu!\n");
        break;
    case 3:
        usuario == computador ? printf("Você venceu!\n") : printf("Você perdeu!\n");
        break;
    default:
        printf("Erro! Opção inválida!\n");
        break;
    }
    return 0;
}