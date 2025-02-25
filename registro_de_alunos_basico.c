#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    printf("Digite seu nome: \n");
    scanf("%s", nome);
    
    printf("Digite o número da sua matrícula: \n");
    scanf("%d", &matricula);
    
    printf("Nome do aluno: %s - matrícula: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %.2f", idade, altura);
    return 0;
}