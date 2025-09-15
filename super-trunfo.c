#include <stdio.h>
#include <string.h>

int main() {
    char estado1;
    char codigo_carta1[5];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    getchar(); 
    printf("Digite o Nome da Cidade: ");
    fgets(nome_cidade1, 50, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo_carta2);
    getchar(); 
    printf("Digite o Nome da Cidade: ");
    fgets(nome_cidade2, 50, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    if (area1 > 0) densidade_populacional1 = (float)populacao1 / area1;
    else densidade_populacional1 = 0;
    if (populacao1 > 0) pib_per_capita1 = pib1 / (float)populacao1;
    else pib_per_capita1 = 0;

    if (area2 > 0) densidade_populacional2 = (float)populacao2 / area2;
    else densidade_populacional2 = 0;
    if (populacao2 > 0) pib_per_capita2 = pib2 / (float)populacao2;
    else pib_per_capita2 = 0;
    
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1;
    if (densidade_populacional1 > 0) super_poder1 += (1.0 / densidade_populacional1);
    
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2;
    if (densidade_populacional2 > 0) super_poder2 += (1.0 / densidade_populacional2);

    printf("------------------------------------------\n");
    printf("         DADOS DAS CARTAS CADASTRADAS     \n");
    printf("------------------------------------------\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita2);

    printf("------------------------------------------\n");
    printf("         RESULTADO DA BATALHA             \n");
    printf("------------------------------------------\n");
    printf("(1 para vitoria da Carta 1, 0 para vitoria da Carta 2)\n\n");

    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: %d\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);
    printf("\n");

    return 0;
}