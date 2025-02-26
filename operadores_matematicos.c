#include <stdio.h>

int main(){

    //Declarando variáveis que serão solicitas ao usuário
    float numerox, numeroy;
    
    //Declarando variáveis que armazenam resultados de operações matemáticas
    float soma, subtracao, multiplicacao, divisao;
    
    //Declarando variável que armazena um valor para apresentar teste
    float teste;
    
    //Solicitando valores ao usuário e armazenando em variáveis
    printf("Digite o primeiro número: ");
    scanf("%f", &numerox);
    printf("Digite o segundo número: ");
    scanf("%f", &numeroy);
    
    //Atribuindo resultado das operações em suas respectivas variáveis
    soma = numerox + numeroy;
    subtracao = numerox - numeroy;
    multiplicacao = numerox * numeroy;
    divisao = numerox / numeroy;
    
    //Exibe na tela os resultados das operações para o usuário
    printf("\nA soma entre %.2f e %.2f é: %.2f", numerox, numeroy, soma);
    printf("\nA subtração entre %.2f e %.2f é: %.2f", numerox, numeroy, subtracao);
    printf("\nA multiplicação entre %.2f e %.2f é: %.2f", numerox, numeroy, multiplicacao);
    printf("\nA divisão entre %.2f e %.2f é: %.2f\n", numerox, numeroy, divisao);
    
    //Operadores de atribuição comum, zerando valor das variáveis
    numerox = 0;
    numeroy = 0;
    
    //Apresenta ao usuário que os números foram zerados
    printf("\nO primeiro número agora vale: %.2f, e o segundo vale: %.2f", numerox, numeroy);
    
    //Usa e exibe ao usuário operadores de atribuição
    numerox += 2;
    printf("\nO primeiro numero foi somado com 2, agora tem valor: %.2f", numerox);
    numeroy -= 2;
    printf("\nO segundo numero foi subtraído com 2, agora tem valor: %.2f", numeroy);
    numerox *= 10;
    printf("\nO primeiro número que valia 2, foi multiplicado por 10 e vale: %.2f", numerox);
    numeroy /= 10;
    printf("\nO segundo número que valia -2, foi dividido por 10 e vale: %.2f\n", numeroy);
    
    //Atrubui novos valores a variáveis e informa usuário na tela
    numerox = 1;
    numeroy = 1;
    printf("\nAgora o primeiro número vale %.2f e o segundo vale %.2f", numerox, numeroy);
    
    //Usa e exibe ao usuário operadores de incremento e decremento
    numerox++;
    printf("\nCom operador de incremento, o primeiro número passa valer: %.2f", numerox);
    numeroy--;
    printf("\nCom operador de decremento, o segundo numero passa valer: %.2f\n", numeroy);
    
    //Pós incremento ou decremento, a variável é atribuida primeiro, só depois acontece o incremento ou decremento
    teste = numerox++;
    printf("\nA variável teste recebeu valor: %.2f, mas primeiro número vale %.2f", teste, numerox);
    teste = numeroy--;
    printf("\nA variável teste recebeu valor: %.2f, mas o segundo número vale %.2f\n", teste, numeroy);
    
    //Pré incremento ou decremento, o incremento ou decremento acontece primerio, depois a variável é atribuída
    teste = ++numerox;
    printf("\nA variável teste recebeu valor: %.2f, e o primeiro número vale %.2f", teste, numerox);
    teste = --numeroy;
    printf("\nA variável teste recebeu valor: %.2f, e o segundo número vale %.2f\n", teste, numeroy);
    
    return 0;
}