#include <stdio.h>
#include <string.h>

// Nível Novato
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado_1;
  char estado_2;
  char codigo_carta_1[4];
  char codigo_carta_2[4];
  char cidade_1[30];
  char cidade_2[30];
  int populacao_1;
  int populacao_2;
  float area_cidade_1;
  float area_cidade_2;
  float pib_1;
  float pib_2;
  int num_pts_turisticos_1;
  int num_pts_turisticos_2;

  // Área para entrada de dados da carta 1
  printf("Digite a letra que representa o 1º estado: ");
    scanf(" %c", &estado_1);

  printf("Digite a letra do 1º estado, seguida de um número de 01 a 04,ex: 'A01, B03': ");
    scanf(" %s", &codigo_carta_1);

   // Limpa o buffer
   while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
    fgets(cidade_1, 30, stdin);
    
  printf("Digite o número de habitantes desta cidade: ");
    scanf(" %d", &populacao_1);

  printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area_cidade_1);

  printf("Digite o Produto Interno Bruto da cidade: ");
    scanf(" %f", &pib_1);

  printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf(" %d", &num_pts_turisticos_1);

  // Área para entrada de dados da carta 2
  printf("\n");
  printf("Digite a letra que representa o 2º estado escolhido: ");
    scanf(" %c", &estado_2);

  printf("Digite a letra do 2º estado, seguida de um número de 01 a 04: ");
    scanf(" %s", &codigo_carta_2);

    // Limpar o buffer
    while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
    fgets(cidade_2, 30, stdin);

  printf("Digite o número de habitantes desta cidade: ");
    scanf(" %d", &populacao_2);

  printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area_cidade_2);

  printf("Digite o Produto Interno Bruto da cidade: ");
    scanf(" %f", &pib_2);

  printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf(" %d", &num_pts_turisticos_2);

    // Área para exibição dos dados da cidade
  printf("\n");
  printf("Carta 1:\n");
  printf("Código: %s\n", codigo_carta_1);
  printf("Nome da Cidade: %s", cidade_1);
  printf("População: %d\n", populacao_1);
  printf("Área: %.2f km²\n", area_cidade_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de Pontos Turísticos: %d \n", num_pts_turisticos_1);

  printf("\n");
  printf("Carta 2:\n");
  printf("Código: %s\n", codigo_carta_2);
  printf("Nome da Cidade: %s", cidade_2);
  printf("População: %d\n", populacao_2);
  printf("Área: %.2f km²\n", area_cidade_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de Pontos Turísticos: %d \n", num_pts_turisticos_2);

return 0;
} 