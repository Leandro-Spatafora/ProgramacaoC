#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;
    
    printf("Menu de opções\n");
    printf("1 - Calcular média\n");
    printf("2 - Status do aluno\n");
    printf("3 - Sair do programa\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    
    switch(opcao){
    
    case 1:
        printf("Calcular média\n");
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) / 2;
            printf("A média do aluno foi de %.2f\n", media);
        } else {
            printf("Entrada com valores errados de notas!\n");
        } break;
        
    case 2:
        printf("Status do aluno\n");
        printf("Digite a média do aluno: ");
        scanf("%f", &media);
        media >= 5 ? printf("Aprovado!\n") : printf("Reprovado!\n");
        break;
        
    case 3:
        printf("Fim do programa\n");
        break;
        
    default:
        printf("Erro! Escolha uma opção válida!\n");
    }
    
    return 0;
}