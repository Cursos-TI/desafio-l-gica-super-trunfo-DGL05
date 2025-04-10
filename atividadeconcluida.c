#include <stdio.h>

int main () {

    char cod2 [50];
    unsigned long int pop1, pop2;
    int tur1, tur2, escolhadojogador;
    char cod1 [50];
    char estado1 [99];
    char estado2 [99];
    float area1, area2, pib1, pib2;
    char cidade1 [50];
    char cidade2 [50];

    printf("Cadastramento de Cartas\n");
    printf("Primeira Carta\n");
    printf("Digite o nome de um estado: \n");
    scanf("%s", &estado1);
    printf("Digite um código para sua carta (ex:A01, B03): \n");
    scanf("%s", &cod1);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%u", &pop1);
    printf("Digite a Área da cidade (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf("%d",&tur1);


    printf("Segunda Carta\n");
    printf("Digite o nome de um estado: \n");
    scanf("%s", &estado2);
    printf("Digite um código para sua carta (ex:A01, B03): \n");
    scanf("%s", &cod2);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", &cidade2);  
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%u", &pop2);
    printf("Digite a Área da cidade (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &tur2);

    float denpop1= (float)(pop1 + area1) / 2 ,denpop2 = (float)(pop2 + area2) / 2;
    float pibc1= (float)(pop1 + pib1) / 2 ,pibc2 = (float)(pop2 + pib2) / 2;


    printf("Primeira Carta\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u\n", pop1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop1);
    printf("PIB per capita: %.2f reais\n", pibc1);

    printf("Segunda Carta\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %u\n", pop2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf("PIB per capita: %.2f reais\n", pibc2);

    float sp1= (float) pop1 + area1 + pib1 + tur1 + denpop1;
    float sp2= (float) pop2 + area2 + pib2 + tur2 + denpop2;
    
    
    printf("Comparação das Cartas\n");
    printf("População:");
    if (pop1 > pop2)
    printf("Carta 1 Venceu!\n");
    else
    printf("Carta 2 Venceu!\n");

    printf("Área:");
    if (area1 > area2)
    printf("Carta 1 Venceu!\n");
    else
    printf("Carta 2 Venceu!\n");

    printf("PIB:");
    if (pib1 > pib2)
    printf("Carta 1 Venceu!\n");
    else
    printf("Carta 2 Venceu!\n");

    printf("Pontos Turísticos:");
    if (tur1 > tur2)
    printf("Carta 1 Venceu!\n");
    else
    printf("Carta 2 Venceu!\n");

    printf("Densidade Populacional:");
    if (denpop1 < denpop2)
    printf("Carta 1 Venceu!\n");
    else
    printf("Carta 2 Venceu!\n");

    printf("PIB per capita:");
    if (pibc1 > pibc2)
    printf("Carta 1 Venceu!\n");
    else
    printf("Carta 2 Venceu!\n");

    printf("Pontos Turísticos:");
    if (sp1 > sp2)
    printf("Carta 1 Venceu!\n");
    else
    printf("Carta 2 Venceu!\n");

    printf("Escolha qual atributo você deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib per Capita\n");
    scanf("%d", &escolhadojogador);
    printf("%s Vs %s\n", estado1, estado2);

    switch (escolhadojogador)
    {
    case 1:
        printf("O atributo escolhido foi População\n");
        printf("%u Vs %u\n", pop1, pop2);
        if(pop1 > pop2)
        {
            printf("Carta 1 Venceu\n");
        } else if (pop1<pop2)
        {
            printf("Carta 2 Venceu\n");
        } else {
            printf("Empate\n");
        }
        break;
    case 2:
        printf("O atributo escolhido foi Área\n");
        printf("%.1f Vs %.1f\n", area1, area2);
        if(area1>area2){
            printf("Carta 1 Venceu\n");
        } else if (area1<area2)
        {
            printf("Carta 2 Venceu\n");
        }else 
        {
            printf("Empate\n");
        }
    case 3:
        printf("O atributo escolhido foi Pib\n");
        printf("%.1f Vs %.1f\n", pib1, pib2);
        if(pib1>pib2){
            printf("Carta 1 Venceu\n");
        }else if (pib1<pib2)
        {
            printf("Carta 2 Venceu\n");
        }else {
            printf("Empate\n");
        }
    case 4:
        printf("O atributo escolhido foi Pontos Turísticos\n");
        printf("%d Vs %d\n", tur1, tur2);
        if (tur1>tur2)
        {
            printf("Carta 1 Venceu\n");
        } else if (tur1<tur2)
        {
            printf("Carta 2 Venceu\n");
        }else{
            printf("Empate\n");
        }
    case 5:
        printf("O atributo escolhido foi Densidade Populacional\n");
        printf("%.2f Vs %.2f\n", denpop1, denpop2);
        if (denpop1<denpop2)
        {
            printf("Carta 1 Venceu\n");
        }else if (denpop1>denpop2)
        {
            printf("Carta 2 Venceu\n");
        }else{
            printf("Empate\n");
        }
    case 6:
        printf("O atributo escolhido Pib per capita\n");
        printf("%.2f Vs %.2f", pibc1, pibc2);
        if (pibc1>pibc2)
        {
            printf("Carta 1 Venceu\n");
        }else if (pibc1<pibc2)
        {
            printf("Carta 2 Venceu\n");
        }else {
            printf("Empate\n");
        }
        
        
        
    default:
    printf("Opção Inválida\n");
        break;
    }















}