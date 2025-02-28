#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado1[1], estado2[1], cidade2[30], cod_carta2[3];
    char cod_carta1[3];
    char cidade1[30];
    int nmr_turistico1, nmr_turistico2;
    unsigned long int pop1, pop2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pib_capita1, pib_capita2, super1, super2;
 
    //Solicitando dados para o usuario, para criar a primeira carta
    printf("Crie a primeira carta!\n");
    printf("Digite a letra representante do estado: \n");
    scanf("%s", &estado1);
 
    printf("Digite o codigo da carta (Letra informada anterior + um numero de 01 a 04): \n");
    scanf("%s", &cod_carta1);
 
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);
 
    printf("Digite a população: \n");
    scanf("%lu", &pop1);
 
    printf("Digite a area(em km²): \n");
    scanf("%f", &area1);
 
    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib1);
 
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nmr_turistico1);
 
    //Realiza calculo de densidade populacional para a carta 1
    densidade1 = (float) pop1/area1;
    //Realiza calculo de PIB per capita para a carta 1
    pib_capita1 = (float) pib1/pop1;
    //Calculo da habilidade super
    super1 = (float) pop1 + area1 + pib1 + nmr_turistico1 + pib_capita1 + (area1/pop1);
 
    //Solicitando dados para o usuario, para criar a segunda carta carta
    printf("Crie a Segunda carta!\n");
    printf("Digite a letra representante do estado: \n");
    scanf("%s", &estado2);
 
    printf("Digite o codigo da carta (Letra informada anterior + um numero de 01 a 04): \n");
    scanf("%s", &cod_carta2);
 
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
 
    printf("Digite a população: \n");
    scanf("%lu", &pop2);
 
    printf("Digite a area(em km²): \n");
    scanf("%f", &area2);
 
    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib2);
 
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &nmr_turistico2);
 
    //Realiza calculo de densidade populacional para a carta 2
    densidade2 = (float) pop2/area2;
    //Realiza calculo de PIB per capita para a carta 2
    pib_capita2 = (float) pib2/pop2;
    //Calculo da habilidade super
    super2 = (float) pop2 + area2 + pib2 + nmr_turistico2 + pib_capita2 + (area2/pop2);

    if(pop1>pop2){
        printf("A carta 1 (%s) possui %d e a carta 2 (%s) %d.\n", cidade1, pop1,cidade2, pop2);
        printf("Portanto, a carta 1 %s é a vencedora!\n", cidade1);
    }else {
        printf("A carta 1 (%s) possui %d e a carta 2 (%s) %d.\n", cidade1, pop1,cidade2, pop2);
        printf("Portanto, a carta 2 %s é a vencedora!\n", cidade2);
    }

    return 0;
}
