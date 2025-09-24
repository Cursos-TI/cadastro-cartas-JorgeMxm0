#include <stdio.h>

int main (){

    // VARIAVEIS PARA A CARTA 1 (RORAIMA)
    int populacao_roraima;
    double pib_roraima;
    double area_roraima;
    int pontos_turisticos_roraima;

    // VARIAVEIS PARA A CARTA 2 (MANAUS)
    int populacao_manaus;
    double pib_manaus;
    double area_manaus;
    int pontos_turisticos_manaus;

    // DADOS PARA A CARTA DE RORAIMA
    printf("--- Carta de Roraima ---\n");
    printf("Digite a populacao de Roraima: ");
    scanf("%d", &populacao_roraima);

    printf("Digite o PIB de Roraima: ");
    scanf("%lf", &pib_roraima);

    printf("Digite a area de Roraima: ");
    scanf("%lf", &area_roraima);

    printf("Digite os pontos turisticos de Roraima: ");
    scanf("%d", &pontos_turisticos_roraima);

    printf("\n");

    // DADOS PARA A CARTA DE MANAUS
    printf("--- Carta de Manaus ---\n");
    printf("Digite a populacao de Manaus: ");
    scanf("%d", &populacao_manaus);

    printf("Digite o PIB de Manaus: ");
    scanf("%lf", &pib_manaus);

    printf("Digite a area de Manaus: ");
    scanf("%lf", &area_manaus);

    printf("Digite os pontos turisticos de Manaus: ");
    scanf("%d", &pontos_turisticos_manaus);

    printf("\n");

    // EXIBINDO AS CARTAS
    printf("===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1 - Roraima\n");
    printf("Populacao: %d\n", populacao_roraima);
    printf("PIB: %.2lf\n", pib_roraima);
    printf("Area: %.2lf km²\n", area_roraima);
    printf("Pontos turisticos: %d\n", pontos_turisticos_roraima);

    printf("\nCarta 2 - Manaus\n");
    printf("Populacao: %d\n", populacao_manaus);
    printf("PIB: %.2lf\n", pib_manaus);
    printf("Area: %.2lf km²\n", area_manaus);
    printf("Pontos turisticos: %d\n", pontos_turisticos_manaus);

    return 0;
}