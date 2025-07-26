#include <stdio.h>

int main() {
   
  //Grupo de variáveis da primeira carta.

  char Estado1;
  char Codigo1 [10];
  char Cidade1 [25];
  unsigned long int Populacao1;
  float Area1;
  float Pib1;
  int Turismo1;
  float Densidade1;
  float Pibpercapta1;
  float Superpoder1;



  //Início do código de entrada-saída de dados da primeira carta.

    printf(" Carta 1 \n");

    printf("Digite a letra do Estado: \n");
    scanf("%c", &Estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite o tamanho da população: \n");
    scanf("%lu", &Populacao1);

    printf("Digite o tamanho da área (km²) da Cidade: \n ");
    scanf("%f", &Area1);

    printf("Digite o valor do PIB da Cidade: \n");
    scanf("%f", &Pib1);

    printf("Digite a quantidade de pontos turísticos que existem na cidade: \n");
    scanf("%d", &Turismo1);


  //Cálculos matemáticos 

    Superpoder1 = (float) (Populacao1 + Area1 + Pib1 + Turismo1);
    Densidade1 = (float) (Populacao1 / Area1);
    Pibpercapta1 =  (float) Pib1 / Populacao1; 


  //Comando de apresentação dos valores recebidos-armazenados.

   printf("Carta 1 \n");
   printf("Estado: %c \n Código da carta: %s \n Nome da Cidade: %s \n", Estado1, Codigo1, Cidade1);
   printf("População: %lu \n Área (Km²): %.2f \n PIB: %.2f \n Pontos Turísticos: %d \n",Populacao1, Area1, Pib1, Turismo1);
  
   printf("A Densidade populacional é de: %.2f \n", Densidade1);
   printf("O PIB per capita é de: %.2f \n", Pibpercapta1);
   printf("O valor do Super poder é de: %.2f \n", Superpoder1);

  //Grupo de variáveis da segunda carta.

    char Estado2 [15];
    char Codigo2 [10];
    char Cidade2 [25];
    unsigned long int Populacao2;
    float Area2;
    float Pib2;
    int Turismo2;
    float Densidade2;
    float Pibpercapta2;
    float Superpoder2;
    float Resultado2;

  //Início do código de entrada-saída de dados da segunda carta.

    printf(" Carta 2 \n");

    printf("Digite a letra do Estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite o tamanho da população: \n");
    scanf("%lu", &Populacao2);

    printf("Digite o tamanho da área (km²) da Cidade: \n ");
    scanf("%f", &Area2);

    printf("Digite o valor do PIB da Cidade: \n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turísticos que existem na cidade: \n");
    scanf("%d", &Turismo2);

  
  //Cálculos matemáticos 

    Superpoder2 = (float) (Populacao2 + Area2 + Pib2 + Turismo2);
    Densidade2 = (float) (Populacao2 / Area2);
    Pibpercapta2 =  (float) Pib2 / Populacao2; 
     

  //Comando de apresentação dos valores recebidos-armazenados.

    printf("Carta 2 \n");
    printf("Estado: %s \n Código da carta: %s \n Nome da Cidade: %s \n", Estado2, Codigo2, Cidade2);
    printf("População: %lu \n Área (Km²): %.2f \n PIB: %.2f \n Pontos Turísticos: %d \n",Populacao2, Area2, Pib2, Turismo2);
    
    printf("A Densidade populacional é de: %.2f \n", Densidade2);
    printf("O PIB per capita é de: %.2f \n", Pibpercapta2);
    printf("O valor do Super poder é de: %.2f \n", Superpoder2);
   
 //Estrutura de decisão-Comparação entre as cartas

   if (Superpoder1 > Superpoder2) {
       printf("A carta 1 Vence o jogo!!! \n");
   } else {
       printf("A carta 2 Vence o jogo!!! \n");

   }
   
    
      






    return 0;

    }
