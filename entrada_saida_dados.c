#include <stdio.h>

int main(){
    // Declaração de variáveis
    char letra;
    char nome[50];
    int idade;
    float altura;
    double saldo;
    
    // Solicitação de entradas do usuário
    printf("Digite a primeira letra do seu nome: ");
    scanf("%c", &letra);
    getchar(); // Limpa o buffer removendo \n do scanf
    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0; //remove o \n que o fgets inclui na string
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o saldo da sua conta bancária: ");
    scanf("%lf", &saldo);
    
    // Saída de dados com informações registradas
    printf("\nA primeira letra do seu nome é: %c\n", letra);
    printf("Seu nome completo: %s\n", nome);
    printf("Você tem %d anos\n", idade);
    printf("Sua altura é de: %.2f metros\n", altura);
    printf("Você tem R$%.2f na conta!\n", saldo);
    return 0;
}