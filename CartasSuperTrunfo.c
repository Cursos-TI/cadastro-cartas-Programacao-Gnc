#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Varíaveis da Carta 1
    char Estado1 [15];
    char Código1 [10];
    char Cidade1 [20];
    int População1;
    float Área1;
    float PIB1;
    int Pontos_Turísticos1;

  // Varíaveis da Carta 2
    char Estado2 [15];
    char Código2 [10];
    char Cidade2 [20];
    int População2;
    float Área2;
    float PIB2;
    int Pontos_Turísticos2;
   
    
  // Entrada de dados Carta 1
    printf ("Carta 1 \n");
    printf ("\n");
    printf ("Digite o nome do Estado: \n");
    scanf (" %s", Estado1);
    printf ("\n");
    printf ("Digite o Código da Carta: \n");
    scanf (" %s", Código1);
    printf ("\n");
    printf ("Digite o nome da Cidade: \n");
    scanf (" %s", Cidade1);
    printf ("\n");
    printf ("Digite o Número de Habitantes da cidade: \n");
    scanf (" %d", &População1);
    printf ("\n");
    printf ("Digite a Área da Cidade em km²: \n");
    scanf (" %f", &Área1);
    printf ("\n");
    printf ("Digite o Valor do PIB da Cidade: \n");
    scanf (" %f", &PIB1);
    printf ("\n");
    printf ("Digite o Número de Pontos Turísticos da Cidade: \n");
    scanf (" %d", &Pontos_Turísticos1);
    printf ("\n");

  // Entrada de dados Carta 2
    printf ("Carta 2 \n");
    printf ("\n");
    printf ("Digite o nome do Estado: \n");
    scanf (" %s", Estado2);
    printf ("\n");
    printf ("Digite o Código da Carta: \n");
    scanf (" %s", Código2);
    printf ("\n");
    printf ("Digite o nome da Cidade: \n");
    scanf (" %s", Cidade2);
    printf ("\n");
    printf ("Digite o Número de Habitantes da cidade: \n");
    scanf (" %d", &População2);
    printf ("\n");
    printf ("Digite a Área da Cidade em km²: \n");
    scanf (" %f", &Área2);
    printf ("\n");
    printf ("Digite o Valor do PIB da Cidade: \n");
    scanf (" %f", &PIB2);
    printf ("\n");
    printf ("Digite o Número de Pontos Turísticos da Cidade: \n");
    scanf (" %d", &Pontos_Turísticos2);


  // Área para exibição dos dados da Carta 1
    printf ("\n CARTA 1 \n");
    printf ("Estado: %s \n", Estado1);
    printf ("Código: %s \n", Código1);
    printf ("Cidade: %s \n", Cidade1);
    printf ("População: %d \n", População1);
    printf ("Área em km²: %.2f km2 \n", Área1);
    printf ("PIB: %.2f bilhões de reais \n", PIB1);
    printf ("Número de Pontos Turísticos: %d \n", Pontos_Turísticos1);
    printf ("\n");

  // Área para exibição dos dados da Carta 2
    printf ("\n CARTA 2 \n");
    printf ("Estado: %s \n", Estado2);
    printf ("Código: %s \n", Código2);
    printf ("Cidade: %s \n", Cidade2);
    printf ("População: %d \n", População2);
    printf ("Área em km²: %.2f km2 \n", Área2); 
    printf ("PIB: %.2f bilhões de reais \n", PIB1);
    printf ("Número de Pontos Turísticos: %d \n", Pontos_Turísticos2);

  

return 0;
} 
