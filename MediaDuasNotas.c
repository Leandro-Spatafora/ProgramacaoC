#include <stdio.h>

int main(void){

    //Apresentação do programa
    printf("//////////////////////////////////");
    printf("\nVamos calcular a média do aluno!\n");
    printf("///////////////////////////////////\n");
    
    //Declaração de variáveis
    float Nota1, Nota2, Media;
    
    //Solicitando e armazenando notas em variáveis
    printf("\nDigite a primeira nota: ");
    scanf("%f", &Nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &Nota2);
    
    //Calculo da média
    Media = (Nota1 + Nota2) / 2;
    
    //Exibindo media e situação do aluno
    if (Media >= 6.0){
        printf("\nParabéns! Sua média foi %.1f e você foi aprovado!", Media);
    } else{
        printf("\nQue triste! Sua média foi %.1f e você foi reprovado!", Media);
    }    
    return 0;
}