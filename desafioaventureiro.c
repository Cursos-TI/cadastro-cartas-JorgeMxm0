#include <stdio.h>

int main() {
    // Carta 1 - Roraima
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nome_cidade1[] = "Roraima";
    int populacao1 = 636707;
    double area1 = 2236445.00;
    double pib1 = 2100000000.00;
    int pontos_turisticos1 = 15;
    float densidade1, pib_per_capita1;

    // Carta 2 - Manaus
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nome_cidade2[] = "Manaus";
    int populacao2 = 2279868;
    double area2 = 11401.00;
    double pib2 = 103200000000.00;
    int pontos_turisticos2 = 12;
    float densidade2, pib_per_capita2;

    // Cálculos
    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib1 / populacao1;

    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;

    // Saída Carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf km²\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Saída Carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf km²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}