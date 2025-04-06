#include <stdio.h>

int main(){
    //base do projeto, declaração das caixas
printf("Super Trunfo! \n");

    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacão1, população2;
    int pontos1, pontos2;
    float Area1, Area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float capita1, capita2;
    float superpoder1, superpoder2;

    //entrada de dados da primeira carta
    
    printf("estado:\n");
    scanf("%s", &estado1);

    printf("codigo da carta:\n");
    scanf("%s", &codigo1);

    printf("digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("população:\n");
    scanf("%lu", &populacão1);

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
   
    printf("população: %lu\n",populacão1);
    printf("Área: %.2f\n",Area1);
   
    printf("PIB: %.2f\n",PIB1);
    printf("pontos turisticos: %d\n", pontos1);

    densidade1 = (float)(populacão1 / Area1);
    
    printf("densidade populacional: %.2f\n", densidade1);

    capita1 = (float)(populacão1 / PIB1);

    printf("pib per capita: %.2f\n", capita1);

    // cadastro do superpoder

    superpoder1 = (float)(populacão1 + Area1 + PIB1 + pontos1 + capita1 + 1 / densidade1);
   
    printf("super poder da primeira carta: %.3f\n", superpoder1);
 // entrada de dados segunda carta

    printf("estado:\n");
    scanf("%s", &estado2);

    printf("codigo da carta:\n");
    scanf("%s", &codigo2);

    printf("cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("população:\n");
    scanf("%lu", &população2);

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

  printf("população: %lu\n",população2);
  printf("Área: %.2f\n",Area2);

  printf("PIB: %.2f\n",PIB2);
  printf("Pontos turisticos: %d\n",pontos2);

  densidade2 = (float)(população2 / Area2);

  printf("Densidade populacional: %.2f\n", densidade2);

  capita2 = (float)(população2 / PIB2);

  printf("PIB per capita: %.2f\n", capita2);

  //cadastro do super poder das segunda carta

  superpoder2 = (float)(população2 + Area2 + PIB2 + pontos2 + capita2 + 1 / densidade2);
  
  printf("super poder da segunda carta: %.3f\n", superpoder2);

  //comparações de valores 

  if (populacão1 > população2){
   printf("populaçao: carta 1 venceu\n");
  }
   else if (população2 > populacão1){
      printf("população: carta 2 venceu\n");
   }
  
  if (Area1 > Area2){ 
   printf("area: carta 1 venceu\n");
  }
  else if (Area2 > Area1){ 
   printf("area: carta 2 venceu\n");
  }

  if (PIB1 > PIB2)
  {
   printf("PIB: carta 1 venceu\n");
  }
  else if (PIB2 > PIB1)
  {
   printf("PIB: carta 2 venceu\n");
  }

  if (pontos1 > pontos2)
  {
   printf("Pontos turisticos: carta 1 venceu\n");
  }
  
  else if (pontos2 > pontos1)
  {
   printf("Pontos turisticos: carta 2 venceu\n");
  }

  if (densidade1 > densidade2)
  {
   printf("Densidade populacional: carta 1 venceu\n");
  }
  
  else if (densidade2 > densidade1)
  {
    printf("Densidade populacional: carta 2 venceu\n");
  }
  
  if (capita1 > capita2)
  {
   printf("PIB per capita: carta 1 venceu\n");
  }
  
  else if (capita2 > capita1)
  {
   printf("PIB per capita: carta 2 venceu\n");
  }
  
  if (superpoder1 > superpoder2)
  {
   printf("Superpoder: carta 1 venceu\n");
  }
  
  else if (superpoder2 > superpoder1)
  {
   printf("superpoder: carta 2 venceu\n");
  }
  
  return 0;

   
}
