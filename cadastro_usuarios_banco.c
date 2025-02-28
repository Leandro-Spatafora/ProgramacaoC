#include <stdio.h>

int main(void){
    
    //Declarando variáveis com seus modificadores
    unsigned long long int userID;
    unsigned short int idade;
    long double saldo;
    short int score;
    
    //Solicitando e cadastrando valores informados pelo usuário
    printf("Insira o ID de usuário: ");
    scanf("%llu", &userID);
    printf("Insira a idade: ");
    scanf("%u", &idade);
    printf("Insira o saldo bancário: ");
    scanf("%lf", &saldo);
    printf("Score Serasa: ");
    scanf("%d", &score);
    
    //Exibindo informações cadastradas
    printf("ID de usuário: %llu\n", userID);
    printf("Idade: %u anos\n", idade);
    printf("Saldo: R$%.2lf\n", saldo);
    printf("Score: %d", score);
    
    //Encerra o programa
    return 0;
}