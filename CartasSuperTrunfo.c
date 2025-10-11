#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Super Trunfo\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Cadastros das cartas inicial
  int populacao;
  float area;
  float produto;
  int pontos;

  // Área para entrada de dados
  //Realize os cadastros que são necessários as cartas do jogo
  printf("Cadastre população:\n", populacao);
  scanf("%d", &populacao);

  printf("Cadastre área da cidade:\n", area);
  scanf("%f", &area);

  printf("Cadastre o PIB:\n", produto);
  scanf("%f", &produto);

  printf("Cadastre nº pontos turísticos:\n", pontos);
  scanf("%d", &pontos);

  // Área para exibição dos dados da cidade
  //Verifique a aparencia de suas cartas

  printf("\n");
  printf("Carta 1\n");
  printf("População em milhões de habitantes:%d\n", populacao);
  printf("Área em km²:%.2f\n", area);
  printf("PIB:%.2f\n", produto);
  printf("Número de pontos turísticos:%d\n", pontos);
  printf("\n");
  
return 0;
} 
