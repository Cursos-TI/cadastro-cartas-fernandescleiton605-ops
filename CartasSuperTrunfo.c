#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main() {
  printf("Super Trunfo\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Cadastros das cartas inicial
  char pais [50], country [50];
  char estado [50], ufb [50];
  char codigo [50], cod [10];
  char nome [50], city [50];
  int populacao, habitantes;
  float area, territorio;
  float produto, bruto;
  int pontos, turistico;
  float densidade, densidade1;
  float pibpc, pibpc1;
  // Área para entrada de dados
  //Realize os cadastros que são necessários a carta 1 do jogo
  printf("Carta 1\n");
  printf("Cadastre um código para a carta:\n", codigo);
  scanf("%s", &codigo);
  printf("Cadastre o País:\n", pais);
  scanf("%s", &pais);
  printf("Cadastre o Estado:\n", estado);
  scanf("%s", &estado);
  printf("Cadastre o nome da cidade:\n", nome);
  scanf("%s", &nome);
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
  printf("Cadastre um código para a carta\n", cod);
  scanf("%s", &cod);
  printf("Cadastre o País:\n", country);
  scanf("%s", &country);
  printf("Cadastre o Estado:\n", ufb);
  scanf("%s", &ufb);
  printf("Cadastre o nome da cidade:\n", city);
  scanf("%s", &city);
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
  densidade = populacao / area;
  pibpc = produto / populacao;
  printf("\n");
  printf("Carta 1\n");
  printf("Código:%s\n", codigo);
  printf("País:%s\n", pais);
  printf("Estado:%s\n", estado);
  printf("Cidade:%s\n", nome);
  printf("População em milhões de habitantes:%d\n", populacao);
  printf("Área em km²:%.2f\n", area);
  printf("PIB:%.2f\n", produto);
  printf("Número de pontos turísticos:%d\n", pontos);
  printf("Densidade populacional: %.2f hab/km²\n", densidade);
  printf("PIB per capita: %.2f reais\n", pibpc);
  printf("\n");
  //Exibição Carta 2
  densidade1 = habitantes / territorio;
  pibpc1 = bruto / habitantes;
  printf("\n");
  printf("Carta 2\n");
  printf("Código:%s\n", cod);
  printf("País:%s\n", country);
  printf("Estado:%s\n", ufb);
  printf("Cidade:%s\n", city);
  printf("População em milhões de habitantes:%d\n", habitantes);
  printf("Área em km²:%.2f\n", territorio);
  printf("PIB:%.2f\n", bruto);
  printf("Número de pontos turísticos:%d\n", turistico);
  printf("Densidade populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capita: %.2f reais\n", pibpc1);
  printf("\n");
return 0;
} 