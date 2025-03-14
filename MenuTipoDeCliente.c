include <stdio.h>

int main(void){
    
    //Declarando variáveis
    short int cliente;
    float ValorCompra;
    
    //Exibe um menu de opções para o usuário
    printf("Tipos de cliente!\n");
    printf("//////////////////////////////////////////////\n");
    printf("1 - Cliente Comum\n");
    printf("2 - Cliente VIP\n");
    printf("3 - Cliente Platina\n");
    printf("4 - Cliente Black\n");
    printf("//////////////////////////////////////////////\n");
    
    //Solicita e armazena escolha do tipo de cliente
    printf("\nEscolha o tipo de cliente para calcular desconto: ");
    scanf("%hd", &cliente);
    
    //Solicita e armazena o vapor total da compra do cliente
    printf("\nDigite o valor total da compra: ");
    scanf("%f", &ValorCompra);
    
    switch(cliente){
        case 1:
            printf("\nCliente comum foi selecionado!\n");
            printf("Valor total da compra: %.2f\n", ValorCompra);
            printf("Valor com desconto de 5%%: %.2f\n", (ValorCompra - (ValorCompra * 0.05)));
            break;
        case 2:
            printf("\nCliente VIP foi selecionado!\n");
            printf("Valor total da compra: %.2f\n", ValorCompra);
            printf("Valor com desconto de 10%%: %.2f\n", (ValorCompra - (ValorCompra * 0.1)));
            break;
        case 3:
            printf("\nCliente Platina foi selecionado!\n");
            printf("Valor total da compra: %.2f\n", ValorCompra);
            printf("Valor com desconto de 15%%: %.2f\n", (ValorCompra - (ValorCompra * 0.15)));
            break;
        case 4:
            printf("\nCliente Black foi selecionado!\n");
            printf("Valor total da compra: %.2f\n", ValorCompra);
            printf("Valor com desconto de 20%%: %.2f\n", (ValorCompra - (ValorCompra * 0.20)));
            break;
        default:
            printf("\nErro. Selecione o número do tipo de cliente.\n");
            break;
    }
    return 0;
}