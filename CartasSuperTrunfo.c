#include <stdio.h>

int main() {
   
  //Grupo de variáveis da primeira carta.

  char Estado;
  char Codigo [10];
  char Cidade [25];
  int Populacao;
  float Area;
  float Pib;
  int Turismo;

  //Início do código de entrada-saída de dados da primeira carta.

  printf(" Carta 1 \n");

  printf("Digite a letra do Estado: \n");
  scanf("%c", &Estado);

  printf("Digite o Código da Carta: \n");
  scanf("%s", &Codigo);

  printf("Digite o nome da Cidade: \n");
  scanf("%s", &Cidade);

  printf("Digite o tamanho da população: \n");
  scanf("%d", &Populacao);

  printf("Digite o tamanho da área (km²) da Cidade: \n ");
  scanf("%f", &Area);

  printf("Digite o valor do PIB da Cidade: \n");
  scanf("%f", &Pib);

  printf("Digite a quantidade de pontos turísticos que existem na cidade: \n");
  scanf("%d", &Turismo);

  //Comando de apresentação dos valores recebidos-armazenados.

  printf("Carta 1 \n");
  printf("Estado: %c \n Código da carta: %s \n Nome da Cidade: %s \n", Estado, Codigo, Cidade);
  printf("População: %d \n Área (Km²): %f \n PIB: %f \n Pontos Turísticos: %d \n",Populacao, Area, Pib, Turismo);

  //Grupo de variáveis da segunda carta.

  char estado [15];
  char Codigo2 [10];
  char Cidade2 [25];
  int Populacao2;
  float Area2;
  float Pib2;
  int Turismo2;

   //Início do código de entrada-saída de dados da segunda carta.

    printf(" Carta 2 \n");

    printf("Digite a letra do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &Populacao2);

    printf("Digite o tamanho da área (km²) da Cidade: \n ");
    scanf("%f", &Area2);

    printf("Digite o valor do PIB da Cidade: \n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turísticos que existem na cidade: \n");
    scanf("%d", &Turismo2);


   //Comando de apresentação dos valores recebidos-armazenados.

    printf("Carta 2 \n");
    printf("Estado: %s \n Código da carta: %s \n Nome da Cidade: %s \n", estado, Codigo2, Cidade2);
    printf("População: %d \n Área (Km²): %f \n PIB: %f \n Pontos Turísticos: %d \n",Populacao2, Area2, Pib2, Turismo2);
   


    return 0;

    }
