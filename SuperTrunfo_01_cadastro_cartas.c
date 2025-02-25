#include <stdio.h>

int main(){
    
    //Declarando variáveis, para armazenar dados de carta 1 e carta 2
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[170], nome2[170]; //Maior cidade existente tem 168 caracteres contando espaços
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    
    //Solicita dados da primeira carta para o usuário
    printf("Qual Estado da 1° carta? (Letra entre 'A' à 'H'): ");
    scanf("%c", &estado1);
    getchar(); //Getchar remove \n deixado pelo scanf
    printf("Digite o código da carta: ");
    scanf("%s", &codigo1);
    getchar(); 
    printf("Digite o nome da cidade: ");
    fgets(nome1, 170, stdin); //fgets consegue armazenar strings com espaços
    nome1[strcspn(nome1, "\n")] = 0; //remove o "\n" deixado pelo fgets
    printf("Qual a população dessa cidade?: ");
    scanf("%d", &populacao1);
    printf("Qaul a área da cidade em quilômetros quadrados?: ");
    scanf("%f", &area1);
    printf("Qual o PIB da cidade?: ");
    scanf("%f", &pib1);
    printf("Por final, quantos pontos turísticos?: ");
    scanf("%d", &pontos1);
    
    //Solicita dados da segunda carta para o usuário
    getchar();
    printf("\nQual Estado da 2° carta? (Letra entre 'A' à 'H'): ");
    scanf("%c", &estado2);
    getchar();
    printf("Digite o código da carta: ");
    scanf("%s", &codigo2);
    getchar(); 
    printf("Digite o nome da cidade: ");
    fgets(nome2, 170, stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    printf("Qual a população dessa cidade?: ");
    scanf("%d", &populacao2);
    printf("Qaul a área da cidade em quilômetros quadrados?: ");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade?: ");
    scanf("%f", &pib2);
    printf("Por fim, quantos pontos turísticos?: ");
    scanf("%d", &pontos2);
    
    //Exibe informações cadastradas da carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    
    //Exibe informações cadastradas da carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    
    return 0;
}