#include <stdio.h>

int main(){
    
    //Declarando variáveis
    int a, b;
    float quociente;
    
    //Solicitando e atribuindo valores para 'a' e 'b'
    printf("Digite um número inteiro: \n");
    scanf("%d", &a);
    printf("Digite outro número inteiro: \n");
    scanf("%d", &b);
    
    //Calculando quociente, fazendo conversão explícita
    quociente = (float) a / (float) b;
    
    //Exibindo valor de quociente para o usuário, com formatação de duas casas decimais
    printf("Quociente: %.2f", quociente);
}