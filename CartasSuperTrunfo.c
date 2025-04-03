#include <stdio.h>

int main(){
    //base do projeto, declaração das caixas
printf("Super Trunfo! \n");

    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacão1, população2;
    int pontos1, pontos2;
    float Area1, Area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float capita1, capita2;

    //entrada de dados da primeira carta
    
    printf("estado:\n");
    scanf("%s", &estado1);

    printf("codigo da carta:\n");
    scanf("%s", &codigo1);

    printf("digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("população:\n");
    scanf("%d", &populacão1);

    printf("Area:\n");
    scanf("%f", &Area1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("pontos turisticos:\n");
    scanf("%d", &pontos1);

 //saida de dados da primeira carta
    
    printf("carta 1:\n");
    printf("estado: %c\n",estado1);
   
    printf("codigo: %s\n",codigo1);
    printf("cidade: %s\n",cidade1);
   
    printf("população: %d\n",populacão1);
    printf("Área: %.2f\n",Area1);
   
    printf("PIB: %.2f\n",PIB1);
    printf("pontos turisticos: %d\n", pontos1);

    densidade1 = (float)(populacão1 / Area1);
    
    printf("densidade populacional: %.2f\n", densidade1);

    capita1 = (float)(populacão1 / PIB1);

    printf("pib per capita: %.2f\n", capita1);
   
 // entrada de dados segunda carta

    printf("estado:\n");
    scanf("%s", &estado2);

    printf("codigo da carta:\n");
    scanf("%s", &codigo2);

    printf("cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("população:\n");
    scanf("%d", &população2);

    printf("Área:\n");
    scanf("%f", &Area2);

    printf("PIB:\n");
    scanf("%f", &PIB2);

    printf("Pontos turisticos:\n");
    scanf("%d", &pontos2);

 // saida de dados da segunda carta

  printf("carta 2:\n");
  printf("estado: %c\n",estado2);

  printf("codigo: %s\n",codigo2);
  printf("cidade: %s\n",cidade2);

  printf("população: %d\n",população2);
  printf("Área: %.2f\n",Area2);

  printf("PIB: %.2f\n",PIB2);
  printf("Pontos turisticos: %d\n",pontos2);

  densidade2 = (float)(população2 / Area2);

  printf("Densidade populacional: %.2f\n", densidade2);

  capita2 = (float)(população2 / PIB2);

  printf("PIB per capita: %.2f\n", capita2);

  return 0;


   
}
