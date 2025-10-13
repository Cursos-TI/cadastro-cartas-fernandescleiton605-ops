#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Super Trunfo\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Cadastros das cartas inicial
  int populacao, habitantes;
  float area, territorio;
  float produto, bruto;
  int pontos, turistico;

  // Área para entrada de dados
  //Realize os cadastros que são necessários a carta 1 do jogo
  printf("Carta 1\n");
  printf("Cadastre população:\n", populacao);
  scanf("%d", &populacao);

  printf("Cadastre área da cidade:\n", area);
  scanf("%f", &area);

  printf("Cadastre o PIB:\n", produto);
  scanf("%f", &produto);

  printf("Cadastre nº pontos turísticos:\n", pontos);
  scanf("%d", &pontos);
  
  //Cadastros para a carta 2
  printf("\n");
  printf("Carta 2\n");
  printf("Cadastre população:\n", habitantes);
  scanf("%d", &habitantes);

  printf("Cadastre área da cidade:\n", territorio);
  scanf("%f", &territorio);

  printf("Cadastre o PIB:\n", bruto);
  scanf("%f", &bruto);

  printf("Cadastre nº pontos turísticos:\n", turistico);
  scanf("%d", &turistico);


  // Área para exibição dos dados da cidade
  //Verifique a aparencia de suas cartas
  //Exibição Carta 1

  printf("\n");
  printf("Carta 1\n");
  printf("População em milhões de habitantes:%d\n", populacao);
  printf("Área em km²:%.2f\n", area);
  printf("PIB:%.2f\n", produto);
  printf("Número de pontos turísticos:%d\n", pontos);
  printf("\n");
  
  //Exibição Carta 2
  printf("\n");
  printf("Carta 2\n");
  printf("População em milhões de habitantes:%d\n", habitantes);
  printf("Área em km²:%.2f\n", territorio);
  printf("PIB:%.2f\n", bruto);
  printf("Número de pontos turísticos:%d\n", turistico);
  printf("\n");

return 0;
} 
