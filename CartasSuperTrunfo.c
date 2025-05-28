
#include <stdio.h>


int main() {

    // Variáveis para a carta 1
    char estado1[50], codigo1[50], cidade1[50];
    float populacao1, area1, pib1;
    float densidade1, pib_per_capita1;
    int pontos_turisticos1;
    float superpoder1, superpoder2; //foram adicionadas novas variáveis, a vairável superpoder1 e superpoder2
    
    


    // Variáveis para a carta 2
    char estado2[50], codigo2[50], cidade2[50];
    float populacao2, area2, pib2;
    float densidade2, pib_per_capita2;
    int pontos_turisticos2, soma;
    float superpoder;

    // Coletando informações da carta 1
    // e fazendo a divisão entre a população e a área, e entre o pib e a população
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%49s", estado1);
    printf("Código da carta: ");
    scanf("%49s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%49s", cidade1);
    printf("População: ");
    scanf("%f", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    densidade1 = populacao1 / area1;  // OBS: a divisão entre a população e a área da cidade da primeira carta.
    pib_per_capita1 = pib1 / populacao1; // OBS: a divisão entre o pib e a população da primeira carta.
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1; // OBS: adicionado o superpoder onde soma todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita.


    // Mostrando os resultados da carta 1
    printf("\n\nResultado da Carta 1\n");
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("super poder: %f\n", superpoder1);  //exibição do print do superpoder


    // Coletando informações da carta 2
    printf("\n\nCarta 2:\n");
    printf("Estado: ");
    scanf("%49s", estado2);
    printf("Código da carta: ");
    scanf("%49s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%49s", cidade2);
    printf("População: ");
    scanf("%f", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    densidade2 = populacao2 / area2;  // OBS: a divisão entre a população e a área da cidade da segunda carta.
    pib_per_capita2 = populacao2 / pib2; // OBS: a divisão entre o pib e a população da segunda carta.
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2; // OBS: adicionado o superpoder onde soma todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita.

    
    // Mostrando os resultados da carta 2
    printf("\n\nResultado da Carta 2\n");
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("super poder: %f\n", superpoder2); //exibição do print do superpoder


    printf("\n\n");  //logo abaixo foram adicionados comparações entres atributos para saber qual é maior, o maior sempre vence, somente a densidade populacional que tem como objetivo ser menor. 
    
    printf("Comparação das cartas:");

    if( populacao1 > populacao2){
        printf("População: Carta 1 venceu\n");
    }else{
        printf("População: Carta 2 venceu\n");
    }

    if( pib1 > pib2){
        printf("PIB: Carta 1 venceu\n");
    }else{
        printf("PIB: Carta 2 venceu\n");
    }
    
    if( pontos_turisticos1 > pontos_turisticos2){
        printf("Pontos Turísticos: Carta 1 venceu\n");
    }else{
        printf("Pontos Turísticos: Carta 2 venceu\n");
    }

    if( pib_per_capita1 > pib_per_capita2){
        printf("PIB per Capita: Carta 1 venceu\n");
    }else{
        printf("PIB per Capita: Carta 2 venceu\n");
    }

    if( superpoder1 > superpoder2){
        printf("Super Poder: Carta 1 venceu\n");
    }else{
        printf("Super Poder: Carta 2 venceu\n");
    }

      
    return 0;
}