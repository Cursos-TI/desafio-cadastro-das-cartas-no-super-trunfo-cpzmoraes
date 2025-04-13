#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1;
    char cod_carta1[10];
    char nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Coleta dos dados da carta 1
    printf("Insira o primeiro Estado (letra de A a H):\n");
    scanf(" %c", &estado1);

    printf("Insira um número para o código da carta (01 a 04):\n");
    scanf("%s", &cod_carta1);

    printf("Insira o nome da primeira cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("Insira a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Insira a área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Dados da segunda carta
    char estado2;
    char cod_carta2[10];
    char nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Coleta dos dados da carta 2
    printf("Insira o segundo Estado (letra de A a H):\n");
    scanf(" %c", &estado2);

    printf("Insira um número para o código da carta (01 a 04):\n");
    scanf("%s", &cod_carta2);

    printf("Insira o nome da primeira cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("Insira a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade (em km²):\n");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Exibição das cartas
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}