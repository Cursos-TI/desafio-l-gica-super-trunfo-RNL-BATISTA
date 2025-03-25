#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado1[1], estado2[1], cidade2[30], cod_carta2[3];
    char cod_carta1[3];
    char cidade1[30];
    int nmr_turistico1, nmr_turistico2, opcao1, opcao2;
    unsigned long int pop1, pop2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pib_capita1, pib_capita2, super1, super2, resultado1, resultado2;
 
    //Solicitando dados para o usuario, para criar a primeira carta
    printf("Crie a primeira carta!\n");
    printf("Digite a letra representante do estado: \n");
    scanf("%s", estado1);
 
    printf("Digite o codigo da carta (Letra informada anterior + um numero de 01 a 04): \n");
    scanf("%s", cod_carta1);
 
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
 
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
    scanf("%s", estado2);
 
    printf("Digite o codigo da carta (Letra informada anterior + um numero de 01 a 04): \n");
    scanf("%s", cod_carta2);
 
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
 
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

    printf("## Escolha um atributo para comparar! ##\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        if(pop1==pop2){
            printf("Está rodada empatou\n");
        }else if(pop1>pop2){
            printf("A carta 1 ganhou esta rodada!\n");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = pop1;
        resultado2 = pop2;
    break;

    case 2:
        if(area1==area2){
            printf("Está rodada empatou\n");
        }else if(area1>area2){
            printf("A carta 1 ganhou esta rodada!\n");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = area1;
        resultado2 = area2;
    break;

    case 3:
        if(pib1==pib2){
            printf("Está rodada empatou\n");
        }else if(pib1>pib2){
            printf("A carta 1 ganhou esta rodada\n!");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = pib1;
        resultado2 = pib2;
    break;

    case 4:
        if(nmr_turistico1==nmr_turistico2){
            printf("Está rodada empatou\n");
        }else if(nmr_turistico1>nmr_turistico2){
            printf("A carta 1 ganhou esta rodada!\n");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = nmr_turistico1;
        resultado2 = nmr_turistico2;
    break;

    case 5:
        if(densidade1==densidade2){
            printf("Está rodada empatou\n");
        }else if(densidade1<densidade2){
            printf("A carta 1 ganhou esta rodada!\n");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = densidade1;
        resultado2 = densidade2;
    break;
    
    default:
        printf("Opção incorreta\n");
    break;
    }

    printf("## Escolha outro atributo para comparar! ##\n");
    opcao1==1 ? printf("") : printf("1. População\n");
    opcao1==2 ? printf("") : printf("2. Area\n");
    opcao1==3 ? printf("") : printf("3. PIB\n");
    opcao1==4 ? printf("") : printf("4. Pontos turisticos\n");
    opcao1==5 ? printf("") : printf("5. Densidade populacional\n");
    scanf("%d", &opcao2);

    if(opcao1==opcao2){
        opcao2= opcao1 + 10;
    }

    switch (opcao2)
    {
    case 1:
        if(pop1==pop2){
            printf("Está rodada empatou\n");
        }else if(pop1>pop2){
            printf("A carta 1 ganhou esta rodada!\n");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = resultado1 + pop1;
        resultado2 = resultado2 + pop2;
    break;

    case 2:
        if(area1==area2){
            printf("Está rodada empatou\n");
        }else if(area1>area2){
            printf("A carta 1 ganhou esta rodada!\n");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = resultado1 + area1;
        resultado2 = resultado2 + area2;
    break;

    case 3:
        if(pib1==pib2){
            printf("Está rodada empatou\n");
        }else if(pib1>pib2){
            printf("A carta 1 ganhou esta rodada\n!");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = resultado1 + pib1;
        resultado2 = resultado2 + pib2;
    break;

    case 4:
        if(nmr_turistico1==nmr_turistico2){
            printf("Está rodada empatou\n");
        }else if(nmr_turistico1>nmr_turistico2){
            printf("A carta 1 ganhou esta rodada!\n");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = resultado1 + nmr_turistico1;
        resultado2 = resultado2 + nmr_turistico2;
    break;

    case 5:
        if(densidade1==densidade2){
            printf("Está rodada empatou\n");
        }else if(densidade1<densidade2){
            printf("A carta 1 ganhou esta rodada!\n");
        }else{
            printf("A carta 2 ganhou esta rodada!\n");
        }
        resultado1 = resultado1 + densidade1;
        resultado2 = resultado2 + densidade2;
    break;
    
    default:
        printf("Opção incorreta\n");
    break;
    }

    printf("## STATS ##\n");
    printf("Os atributos utilizados na comparação foram os:\n");
    if(opcao1==1 || opcao2==1){
        printf("A população da carta %s é: %d.\n", cidade1, pop1);
        printf("A população da carta %s é: %d.\n", cidade2, pop2); 
    }
    if(opcao1==2 || opcao2==2){
        printf("A area da carta %s é: %.2f.\nA area da carta %s é: %.2F.\n", cidade1, area1, cidade2, area2);
    }
    if(opcao1==3 || opcao2==3){
        printf("O PIB da carta %s é: %.2f.\nO PIB da carta %s é: %.2F.\n", cidade1, pib1, cidade2, pib2);
    }
    if(opcao1==4 || opcao2==4){
        printf("Os pontos turisticos da carta %s é: %.2f.\nOs pontos turisticos %s é: %.2F.\n", cidade1,nmr_turistico1,cidade2,nmr_turistico2);
    }
    if(opcao1==5 || opcao2==5){
        printf("A densidade populacional da carta %s é: %.2f.\nA densidade populacional da carta %s é: %.2F.\n", cidade1, densidade1, cidade2, densidade2);
    }

    if(resultado1>resultado2){
        printf("A soma da carta %s é %.2f.\n Enquanto o da carta %s é %.2f.\nPortanto a carta %s é a vencedora!\n", cidade1, resultado1,cidade2, resultado2, cidade1);
    }else if(resultado1<resultado2){
        printf("A soma da carta %s é %.2f.\n Enquanto o da carta %s é %.2f.\nPortanto a carta %s é a vencedora!\n",cidade1, resultado1,cidade2, resultado2, cidade2);
    }else{
        printf("A soma da carta %s é %.2f.\n Enquanto o da carta %s é %.2f.\nPortanto é um empate!\n", cidade1, resultado1,cidade2, resultado2);
    }

    return 0;
}
