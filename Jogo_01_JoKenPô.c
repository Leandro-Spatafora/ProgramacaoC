#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    //Declarando variáveis para o jogo
    short int TelaInicial, Player1, Player2;
    
    //Menu inicial para jogar ou ler regras do jogo
    printf("Vamos jogar Jokenpo?!\n");
    printf("\n////////////////////////////\n");
    printf("Para jogar digite: 1\n");
    printf("Para ler as regras digite: 2\n");
    printf("////////////////////////////\n");
    printf("\nDigite aqui: ");
    scanf("%hd", &TelaInicial);
    
    switch(TelaInicial){
    
        case 1:
            printf("Veremos quem vai vencer!!!\n");
            printf("\n////////////////////////////\n");
            printf("Digite 1, para escolher Pedra\n");
            printf("Digite 2, para escolher Papel\n");
            printf("Digite 3, para esolher Tesoura\n");
            printf("////////////////////////////\n");
            printf("\nDigite aqui sua escolha: ");
            scanf("%hd", &Player1);
            
            srand(time(0));
            Player2 = 1 + rand() % 3;
            
            if(Player1 == 1 && Player2 == 3){
                printf("Você venceu! Pedra vence Tesoura!\n");
            } else if(Player1 == 2 && Player2 == 1){
                printf("Você venceu! Papel vence Pedra!\n");
            } else if(Player1 == 3 && Player2 == 2){
                printf("Você venceu! Tesoura vence Papel!\n");
            } else if(Player1 == 1 && Player2 == 2){
                printf("Xiiii perdeu! Papel vence Pedra!\n");
            } else if(Player1 == 2 && Player2 == 3){
                printf("Xiiii perdeu! Tesoura vence Papel!\n");
            } else if(Player1 == 3 && Player2 == 1){
                printf("Xiiii perdeu! Pedra vence Tesoura!\n");
            } else if(Player1 == Player2){
                printf("Uau! Deu empate!\n");
                switch(Player1){
                    case 1:
                        printf("Ambos escolheram Pedra!\n");
                        break;
                    case 2:
                        printf("Ambos escolheram Papel!\n");
                        break;
                    case 3:
                        printf("Ambos escolheram Tesoura!\n");
                        break;
                }
            } else {
                printf("\nErro, selecione uma opção válida!\n");
            }
            break;
            
        case 2:
            printf("As regras são simples! Veja:\n");
            printf("\n- Papel ganha de pedra\n");
            printf("- Pedra ganha de tesoura\n");
            printf("- Tesoura ganha de papel\n");
            break;
            
        default:
            printf("\nErro! Selecione uma opção válida!\n");
    }
    
    return 0;
}