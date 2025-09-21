#include <stdio.h>

int main (){

 // VARIAVEIS PARA A CARTA 1 (RORAIMA)

 int populaçao_roraima;
 double pib_roriama;
 double area_roriama;
 int ponto_turisticos_roraima;

 // VARIAVEIS PARA A CARTA 2 (MANAUS)

 int populacao_manaus;
 double pib_manaus;
 double area_manaus;
 int ponto_turisto_manaus;

 // DADOS PARA A CARTA DE RORAIMA 1
 
 printf(" --- Carta de Roraima ---\n");
 printf(" Digite a populacao de Roraima: \n");
 scanf(" %xd, &populaçao_roraima \n");
 printf("Digite o PIB de Roraima: \n");
 scanf("%lf, &pib_roriama \n");
 printf("Digite a area de Roraima: \n");
 scanf("%lf, &area_roriama \n");
 printf("Digite os pontos turisticos de Roraima: \n");
 scanf(" %xd, &ponto_turisticos_roraima \n");
 printf("\n");

 // DADOS PARA A CARTA DE MANAUS 2

 printf(" --- Carta de Manaus ---\n");
 printf(" Digite a populacao de Manaus: \n");
 scanf("%xd" , &populacao_manaus);
 printf("Digite a PIB de Manaus: \n");
 scanf("%lf , %pib_manaus \n");
 printf("Digite a area de Manaus: \n");
 scanf("%lf , &area_manaus \n");
 printf("Digite ponto turistico de Manaus \n");
 scanf("%xd , &ponto_turisticos_roraima \n ");
 printf("\n");

return 0;

}