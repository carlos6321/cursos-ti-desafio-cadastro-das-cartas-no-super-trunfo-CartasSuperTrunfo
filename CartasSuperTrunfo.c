#include <stdio.h>

int main() {

    // Definição das variáveis das cidades

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    float superpoder;
    unsigned int resultadoA, resultadoB;

    // Entrada de dados da primeira cidade

    printf("\n--- Cadastro da Primeira Cidade ---\n");
    printf("Digite a letra do estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (float)(populacao1/area1);
    printf("a densidade populacional1 e:%f\n",densidadePopulacional1);

    pibPerCapita1 = (float)(pib1/populacao1);
    printf("o pibpercapta1 e:%f\n", pibPerCapita1);


    superpoder = (float)(populacao1 + area1 + pib1 + pibPerCapita1 + area1/populacao1);
    printf("superpoder é: %f\n", superpoder);

         // Entrada de dados da segunda cidade

    printf("\n--- Cadastro da Segunda Cidade ---\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float)(populacao2/area2);
    printf("a densidadepopulacional2 e:%f", densidadePopulacional2);

    pibPerCapita2 = (float)(pib2/populacao2);

    superpoder = (float)(populacao2 + area2 + pib2 + pibPerCapita2 + area1/populacao2);
    printf("superpoder é: %f\n", superpoder);

    resultadoA = populacao1 > populacao2;
resultadoB = populacao2 > populacao1;
resultadoA = area1 > area2;
resultadoB = area2 > area1;
resultadoA = pib1 > pib2;
resultadoB = pib2 > pib1;

printf("populacao %d \n",resultadoA);
printf("populacao %d \n",resultadoB);
printf("area %d \n", resultadoA);
printf("area %d \n", resultadoB);
printf("pib %f", resultadoA);
printf("pib %f", resultadoB);

    return 0;
}