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
   

  // Varíaveis da Cart 3
    char Estado3 [15];
    char Código3 [10];
    char Cidade3 [20];
    int População3;
    float Área3;
    float PIB3;
    int Pontos_Turísticos3;

  // Varíaveis da Carta 4
     char Estado4 [15];
    char Código4 [10];
    char Cidade4 [20];
    int População4;
    float Área4;
    float PIB4;
    int Pontos_Turísticos4;
    
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
    printf ("\n");

  // Entrada de dados Carta 3
    printf ("Carta 3 \n");
    printf ("\n");
    printf ("Digite o nome do Estado: \n");
    scanf (" %s", Estado3);
    printf ("\n");
    printf ("Digite o Código da Carta: \n");
    scanf (" %s", Código3);
    printf ("\n");
    printf ("Digite o nome da Cidade: \n");
    scanf (" %s", Cidade3);
    printf ("\n");
    printf ("Digite o Número de Habitantes da cidade: \n");
    scanf (" %d", &População3);
    printf ("\n");
    printf ("Digite a Área da Cidade em km²: \n");
    scanf (" %f", &Área3);
    printf ("\n");
    printf ("Digite o Valor do PIB da Cidade: \n");
    scanf (" %f", &PIB3);
    printf ("\n");
    printf ("Digite o Número de Pontos Turísticos da Cidade: \n");
    scanf (" %d", &Pontos_Turísticos3);
    printf ("\n");

  // Entrada de dados Carta 4
    printf ("Carta 4 \n");
    printf ("\n");
    printf ("Digite o nome do Estado: \n");
    scanf (" %s", Estado4);
    printf ("\n");
    printf ("Digite o Código da Carta: \n");
    scanf (" %s", Código4);
    printf ("\n");
    printf ("Digite o nome da Cidade: \n");
    scanf (" %s", Cidade4);
    printf ("\n");
    printf ("Digite o Número de Habitantes da cidade: \n");
    scanf (" %d", &População4);
    printf ("\n");
    printf ("Digite a Área da Cidade em km²: \n");
    scanf (" %f", &Área4);
    printf ("\n");
    printf ("Digite o Valor do PIB da Cidade: \n");
    scanf (" %f", &PIB4);
    printf ("\n");
    printf ("Digite o Número de Pontos Turísticos da Cidade: \n");
    scanf (" %d", &Pontos_Turísticos4);


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
    printf ("PIB: %.2f bilhões de reais \n", PIB2);
    printf ("Número de Pontos Turísticos: %d \n", Pontos_Turísticos2);

    // Área de exibição dos dados da Carta 3
    printf ("\n CARTA 3 \n");
    printf ("Estado: %s \n", Estado3);
    printf ("Código: %s \n", Código3);
    printf ("Cidade: %s \n", Cidade3);
    printf ("População: %d \n", População3);
    printf ("Área em km²: %.2f km2 \n", Área3); 
    printf ("PIB: %.2f bilhões de reais \n", PIB3);
    printf ("Número de Pontos Turísticos: %d \n", Pontos_Turísticos3);

  // Área de exibição dos dados da Cart 4
    printf ("\n CARTA 4 \n");
    printf ("Estado: %s \n", Estado4);
    printf ("Código: %s \n", Código4);
    printf ("Cidade: %s \n", Cidade4);
    printf ("População: %d \n", População4);
    printf ("Área em km²: %.2f km2 \n", Área4); 
    printf ("PIB: %.2f bilhões de reais \n", PIB4);
    printf ("Número de Pontos Turísticos: %d \n", Pontos_Turísticos4);

  

return 0;
} 
