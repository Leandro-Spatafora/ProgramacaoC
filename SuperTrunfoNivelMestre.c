#include <stdio.h>

int main(){

    //Declarando variáveis, para armazenar dados de carta 1 e carta 2
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[170], nome2[170]; //Maior cidade existente tem 168 caracteres contando espaços
    unsigned long long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    //Declarando variáveis, para armazenar dados de densidade e pib per capita de carta 1 e carta 2
    float densidade1, densidade2, pibpercap1, pibpercap2;
    
    //Declarando variáveis para armazenar o cálculo de super podes de carta 1 e carta 2
    float SuperPoder1, SuperPoder2;

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
    scanf("%llu", &populacao1);
    printf("Qual a área da cidade em quilômetros quadrados?: ");
    scanf("%f", &area1);
    printf("Qual o PIB da cidade? (em bilhões): ");
    scanf("%f", &pib1);
    printf("Por fim, quantos pontos turísticos?: ");
    scanf("%d", &pontos1);

    //Calculando e armazena valores de densidade e pib per capita da carta 1
    densidade1 = (float) populacao1 / area1;
    pibpercap1 = (pib1 * 1e9) / (float) populacao1; //'(pib1 * 1e9)' == pib1 * 1.000.000.000 (1 bilhão)
    
    //Calculando Super Poder da carta 1
    SuperPoder1 = ((float)populacao1 + area1 + pib1 + (float)pontos1 + pibpercap1) + (1.0/densidade1);

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
    scanf("%llu", &populacao2);
    printf("Qual a área da cidade em quilômetros quadrados?: ");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade? (em bilhões): ");
    scanf("%f", &pib2);
    printf("Por fim, quantos pontos turísticos?: ");
    scanf("%d", &pontos2);

    //Calcula e armazena valores de densidade e pib per capita da carta 2
    densidade2 = (float) populacao2 / area2;
    pibpercap2 = (pib2 * 1e9) / (float) populacao2;
    
    //Calculando Super Poder da carta 2
    SuperPoder2 = ((float)populacao2 + area2 + pib2 + (float)pontos2 + pibpercap2) + (1.0/densidade2);


    //Exibe informações cadastradas da carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %llu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercap1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    //Exibe informações cadastradas da carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %llu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercap2);
    printf("Super Poder: %.2f\n", SuperPoder2);
    
    //Explicando para como será a saída de dados
    printf("\nSe a resposta for 1, a carta 1 venceu!\n");
    printf("Se a resposta for 0, a carta 2 venceu!\n");
    
    //Comparando as cartas e exibindo os dados para o usuário
    printf("\nPopulação: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", pontos1 > pontos2);
    printf("Densidade populacional: %d\n", densidade1 < densidade2);
    printf("PIB per capita: %d\n", pibpercap1 > pibpercap2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);

    return 0;
}