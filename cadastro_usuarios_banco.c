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
    scanf("%hu", &idade);
    printf("Insira o saldo bancário: ");
    scanf("%Lf", &saldo);
    printf("Score Serasa: ");
    scanf("%hd", &score);
    
    //Exibindo informações cadastradas
    printf("ID de usuário: %llu\n", userID);
    printf("Idade: %hu anos\n", idade);
    printf("Saldo: R$%.2Lf\n", saldo);
    printf("Score: %hd", score);
    
    //Encerra o programa
    return 0;
}