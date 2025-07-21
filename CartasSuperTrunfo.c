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

  printf("Digite o código do Estado: \n");
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
  printf("População: %d \n Área (Km²): %f \n PIB: %f \n Pontos Turísticos: %f \n",Populacao, Area, Pib, Turismo);


    return 0;
}
