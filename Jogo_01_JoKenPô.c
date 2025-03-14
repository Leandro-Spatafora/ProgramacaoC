#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    
    //Executa o jogo, exibe as regras ou emite mensagem de erro para usuário
    switch(TelaInicial){
    
        case 1:
            //Menu de opções para usuário (Player1) fazer escolha
            printf("\nVeremos quem vai vencer!!!\n");
            printf("\n////////////////////////////\n");
            printf("Digite 1, para escolher Pedra\n");
            printf("Digite 2, para escolher Papel\n");
            printf("Digite 3, para esolher Tesoura\n");
            printf("////////////////////////////\n");
            printf("\nDigite aqui sua escolha: ");
            scanf("%hd", &Player1);
            
            //Atribuindo valor aleatório entre 1 e 3 para  computador (Player2)
            srand(time(0));
            Player2 = 1 + rand() % 3;
            
            //Exibindo escolha do computador(Player2)
            printf("O computador escolheu... ");
            switch(Player2){
                case 1: printf("Pedra!\n"); break;
                case 2: printf("Papel!\n"); break;
                case 3: printf("Tesoura!\n"); break;
            }
            
            //Logica para exibir vencedor ou perdedor
            if(Player1 == 1 && Player2 == 3){
                printf("\nVocê venceu! Pedra vence Tesoura!\n");
            } else if(Player1 == 2 && Player2 == 1){
                printf("\nVocê venceu! Papel vence Pedra!\n");
            } else if(Player1 == 3 && Player2 == 2){
                printf("\nVocê venceu! Tesoura vence Papel!\n");
            } else if(Player1 == 1 && Player2 == 2){
                printf("\nXiiii perdeu! Papel vence Pedra!\n");
            } else if(Player1 == 2 && Player2 == 3){
                printf("\nXiiii perdeu! Tesoura vence Papel!\n");
            } else if(Player1 == 3 && Player2 == 1){
                printf("\nXiiii perdeu! Pedra vence Tesoura!\n");
            } else if(Player1 == Player2){
                printf("\nUau! Deu empate!\n");
            } else {
                printf("\nErro, selecione uma opção válida!\n");
            }
            break;
            
        case 2:
            printf("\nAs regras são simples! Veja:\n");
            printf("\n- Papel ganha de pedra\n");
            printf("- Pedra ganha de tesoura\n");
            printf("- Tesoura ganha de papel\n");
            break;
            
        default:
            printf("\nErro! Selecione uma opção válida!\n");
    }
    
    return 0;
}