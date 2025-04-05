#include <stdio.h>

int main() {

    // Definição das variáveis das cidades

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da primeira cidade

    printf("\n--- Cadastro da Primeira Cidade ---\n");
    printf("Digite a letra do estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda cidade

    printf("\n--- Cadastro da Segunda Cidade ---\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    return 0;
}0