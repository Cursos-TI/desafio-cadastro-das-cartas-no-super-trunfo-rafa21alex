#include <stdio.h>

int main(){
    //base do projeto, declaração das caixas
printf("Super Trunfo! \n");

    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacão1, população2;
    int pontos1, pontos2;
    float Area1, Area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float capita1, capita2;
    float superpoder1, superpoder2;
    int atributo, atributo2;
    char comparacao[10];
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma_carta1 = 0, soma_carta2 = 0;


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

  // atributo 1

  printf("\nEscolha o atributo para comparar:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  printf("Opção: ");
  scanf("%d", &atributo);
   
  do
  {
    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo2);
    if (atributo2 == atributo)
    {
        printf("voce ja escolheu esse atributo, escolha outro!!\n");
    }
    
  } while (atributo2 == atributo);
  
// Função para pegar o valor de cada atributo por carta
switch (atributo) {
    case 1:
        valor1_carta1 = populacão1;
        valor1_carta2 = população2;
        break;
    case 2:
        valor1_carta1 = Area1;
        valor1_carta2 = Area2;
        break;
    case 3:
        valor1_carta1 = PIB1;
        valor1_carta2 = PIB2;
        break;
    case 4:
        valor1_carta1 = pontos1;
        valor1_carta2 = pontos2;
        break;
    case 5:
        valor1_carta1 = densidade1;
        valor1_carta2 = densidade2;
        break;
}

switch (atributo2) {
    case 1:
        valor2_carta1 = populacão1;
        valor2_carta2 = população2;
        break;
    case 2:
        valor2_carta1 = Area1;
        valor2_carta2 = Area2;
        break;
    case 3:
        valor2_carta1 = PIB1;
        valor2_carta2 = PIB2;
        break;
    case 4:
        valor2_carta1 = pontos1;
        valor2_carta2 = pontos2;
        break;
    case 5:
        valor2_carta1 = densidade1;
        valor2_carta2 = densidade2;
        break;
}

// Para o primeiro atributo
if (atributo == 5) { // Densidade: menor é melhor
    soma_carta1 += (valor1_carta1 < valor1_carta2) ? 1 : 0;
    soma_carta2 += (valor1_carta2 < valor1_carta1) ? 1 : 0;
} else {
    soma_carta1 += (valor1_carta1 > valor1_carta2) ? 1 : 0;
    soma_carta2 += (valor1_carta2 > valor1_carta1) ? 1 : 0;
}

// Para o segundo atributo
if (atributo2 == 5) {
    soma_carta1 += (valor2_carta1 < valor2_carta2) ? 1 : 0;
    soma_carta2 += (valor2_carta2 < valor2_carta1) ? 1 : 0;
} else {
    soma_carta1 += (valor2_carta1 > valor2_carta2) ? 1 : 0;
    soma_carta2 += (valor2_carta2 > valor2_carta1) ? 1 : 0;
}

printf("\nResultado Final da Comparação:\n");
printf("Carta 1: %.2f (atributo 1) + %.2f (atributo 2) = %.2f\n", valor1_carta1, valor2_carta1, valor1_carta1 + valor2_carta1);
printf("Carta 2: %.2f (atributo 1) + %.2f (atributo 2) = %.2f\n", valor1_carta2, valor2_carta2, valor1_carta2 + valor2_carta2);

if ((valor1_carta1 + valor2_carta1) > (valor1_carta2 + valor2_carta2)) {
    printf("Vencedor: Carta 1\n");
} else if ((valor1_carta1 + valor2_carta1) < (valor1_carta2 + valor2_carta2)) {
    printf("Vencedor: Carta 2\n");
} else {
    printf("Empate!\n");
}

  return 0;
}
