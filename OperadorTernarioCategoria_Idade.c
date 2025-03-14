#include <stdio.h>

int main(void){
    short int idade;
    char* categoria;
    
    printf("Digite a sua idade: ");
    scanf("%hd", &idade);
    
    categoria = (idade < 12) ? "Criança" : (idade <= 17) ? "Adolescente\n" : "Adulto\n";
    printf("%s", categoria);
    
    return 0;
}