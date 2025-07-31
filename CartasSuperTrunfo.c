#include <stdio.h>
#include <stdlib.h>

int main() {
   
  //Grupo de variáveis da primeira carta.

  char Estado1;
  char (Carta1) [10];
  char (Cidade1) [25];
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
    scanf("%s", &Carta1);

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


    //Cálculos matemáticos para determinar Densidade demográfica e Pibpercapta.

    Superpoder1 = (float) (Populacao1 + Area1 + Pib1 + Turismo1);
    Densidade1 = (float) (Populacao1 / Area1);
    Pibpercapta1 =  (float) Pib1 / Populacao1; 


    //Comando de apresentação dos valores recebidos-armazenados da primeira carta.

   printf("Carta 1 \n");
   printf("Estado: %c \n Código da carta: %s \n Nome da Cidade: %s \n", Estado1, Carta1, Cidade1);
   printf("População: %lu \n Área (Km²): %.2f \n PIB: %.2f \n Pontos Turísticos: %d \n",Populacao1, Area1, Pib1, Turismo1);
  
   printf("A Densidade populacional é de: %.2f \n", Densidade1);
   printf("O PIB per capita é de: %.2f \n", Pibpercapta1);
   printf("O valor do Super poder é de: %.2f \n", Superpoder1);

    //Grupo de variáveis da segunda carta.

    char Estado2 [15];
    char Carta2 [10];
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
    scanf("%s", &Carta2);

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

  
    //Cálculos matemáticos para determinar Densidade demográfica e Pibpercapta.

    Superpoder2 = (float) (Populacao2 + Area2 + Pib2 + Turismo2);
    Densidade2 = (float) (Populacao2 / Area2);
    Pibpercapta2 =  (float) Pib2 / Populacao2; 
     

    //Comando de apresentação dos valores recebidos-armazenados da segunda carta.

    printf("Carta 2 \n");
    printf("Estado: %s \n Código da carta: %s \n Nome da Cidade: %s \n", Estado2, Carta2, Cidade2);
    printf("População: %lu \n Área (Km²): %.2f \n PIB: %.2f \n Pontos Turísticos: %d \n",Populacao2, Area2, Pib2, Turismo2);
    
    printf("A Densidade populacional é de: %.2f \n", Densidade2);
    printf("O PIB per capita é de: %.2f \n", Pibpercapta2);
    printf("O valor do Super poder é de: %.2f \n", Superpoder2);
   
        //Estrutura do menu interativo

       int escolhadeatributo;
       float diferenca;

        printf(" *** Escolha um atributo para comparação *** \n");
        printf("1. População \n");
        printf("2. Área total KM² \n");
        printf("3. PIB: \n");
        printf("4. Pontos turísticos: \n");
        printf("5. Densidade demográfica: \n");
        printf("Digite sua escolha: \n");
        scanf("%d", &escolhadeatributo);

        switch (escolhadeatributo)
            
        {
          case 1:  
           printf("Você escolheu o atributo POPULAÇÃO.\n");  
           printf("Carta 1: %s \n Carta 2: %s \n",Populacao1, Populacao2);         
           if (Populacao1>Populacao2) {
            diferenca = Populacao1 - Populacao2;

            printf("Carta 1 venceu com %f pontos de vantagem! \n",diferenca); 
           } else if (Populacao2>Populacao1){
            diferenca =Populacao2 - Populacao1;

            printf("Carta 2 venceu com %f pontos de vantagem! \n", diferenca);
           } else {
            printf ("Empate! \n");
           }
          break;

          case 2:  
           printf("Você escolheu o atributo ÁREA TOTAL EM KM².\n");  
           printf("Carta 1: %f \n Carta 2: %f \n",Area1, Area2);         
           if (Area1>Area2) {
            diferenca = Area1 - Area2;

            printf("Carta 1 venceu com %f pontos de vantagem! \n",diferenca); 
           } else if (Area2>Area1){
            diferenca = Area2 -Area1;

            printf("Carta 2 venceu com %f pontos de vantagem! \n", diferenca);
           } else {
            printf ("Empate! \n");
           }
          break;

          case 3:  
           printf("Você escolheu o atributo PIB.\n");  
           printf("Carta 1: %f \n Carta 2: %f \n",Pib1, Pib2);         
           if (Pib1>Pib2) {
            diferenca = Pib1 - Pib2;
            
            printf("Carta 1 venceu com %f pontos de vantagem! \n",diferenca); 
           } else if (Pib2>Pib1){
            diferenca = Pib2 - Pib1;

            printf("Carta 2 venceu com %f pontos de vantagem! \n", diferenca);
           } else {
            printf ("Empate! \n");
           }
          break;
      
          case 4:  
           printf("Você escolheu o atributo PONTOS TURÍSTICOS.\n");  
           printf("Carta 1: %d \n Carta 2: %d \n",Turismo1, Turismo2);         
           if (Turismo1>Turismo2) {
            diferenca = Turismo1 - Turismo2;

            printf("Carta 1 venceu com %f pontos de vantagem! \n",diferenca); 
           } else if (Turismo2>Turismo1){
            diferenca = Turismo2 - Turismo1;

            printf("Carta 2 venceu com %f pontos de vantagem! \n", diferenca);
           } else {
            printf ("Empate! \n");
           }
          break;

          case 5:  
           printf("Você escolheu o atributo DENSIDADE DEMOGRÁFICA.\n");  
           printf("Carta 1: %f \n Carta 2: %f \n",Densidade1, Densidade2);         
           if (Densidade1<Densidade2) {
            diferenca = Densidade1 - Densidade2;

            printf("Carta 1 venceu com %f pontos de vantagem! \n",diferenca); 
           } else if (Densidade2<Densidade1){
            diferenca = Densidade2 - Densidade1;
             
            printf("Carta 2 venceu com %f pontos de vantagem! \n", diferenca);
           } else {
            printf ("Empate! \n");
           }
          break;
          
            
          default:
            printf ("Opção inválida. \n");
          break;
        



        }
        
}
