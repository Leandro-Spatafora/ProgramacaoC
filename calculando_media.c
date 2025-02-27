#include <stdio.h>

int main(){
    
    //Declarando variáveis em ponto flutuante para maior precisão das notas
    float nota1, nota2, nota3;
    float media;
    
    //Coletando dados de usuário e atribuindo à variáveis
    printf("Digite a 1° nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2° nota: ");
    scanf("%f", &nota2);
    printf("Digite a 3° nota: ");
    scanf("%f", &nota3);
    
    //Calculando media
    media = (nota1 + nota2 + nota3) / 3;
    
    //Exibindo o valor de media para usuário
    printf("A media foi de: %.1f", media);
    
    //Encerrando programa
    return 0;
}