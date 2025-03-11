#include <stdio.h>

int main(void){

    //Apresentação do programa
    printf("//////////////////////////////////");
    printf("\nVamos calcular a média do aluno!\n");
    printf("///////////////////////////////////\n");
    
    //Declaração de variáveis
    float Nota1, Nota2, Media;
    char Conceito;
    
    //Solicitando e armazenando notas em variáveis
    printf("\nDigite a primeira nota: ");
    scanf("%f", &Nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &Nota2);
    
    //Calculo da média
    Media = (Nota1 + Nota2) / 2;
    
    //Atribuir conceito a média de aluno
    if (Media >= 9.0){
        Conceito = 'A';
    }else if(Media >= 8){
        Conceito = 'B';
    }else if(Media >= 7){
        Conceito = 'C';
    }else if(Media >= 6){
        Conceito = 'D';
    }else{
        Conceito = 'F';
    }
    
    //Exibindo media e situação do aluno
    if (Media >= 6.0){
        printf("\nParabéns! Sua média foi %.1f, conceito: %c", Media, Conceito);
        printf("\nVocê foi aprovado!!!");
    } else{
        printf("\nQue triste! Sua média foi %.1f, conceito: %c", Media, Conceito);
        printf("\nVocê foi reprovado!!!");
    }    
    return 0;
}