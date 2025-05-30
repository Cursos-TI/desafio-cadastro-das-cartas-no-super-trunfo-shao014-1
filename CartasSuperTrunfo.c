#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main() {

    // Variáveis para a carta 1
    char estado1[50], pais1[50], codigo1[50], cidade1[50];
    float populacao1, area1, pib1;
    float densidade1, pib_per_capita1;
    int pontos_turisticos1;
    float superpoder1, superpoder2; //foram adicionadas novas variáveis, a vairável superpoder1 e superpoder2
    int resultado1, resultado2, escolhajogador, escolhacomputador, primeiroatributo, segundoatributo;
    
    


    // Variáveis para a carta 2
    char estado2[50], pais2[50], codigo2[50], cidade2[50];
    float populacao2, area2, pib2;
    float densidade2, pib_per_capita2;
    int pontos_turisticos2, soma;
    float superpoder;

    // Coletando informações da carta 1
    // e fazendo a divisão entre a população e a área, e entre o pib e a população
    printf("Carta 1:\n");
    printf("País: ");
    scanf("%49s", pais1);
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
    printf("País: %s\n", pais1);
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
    printf("País: ");
    scanf("%49s", pais2);
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
    printf("País: %s\n", pais2);
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


    printf("\n\n");  //logo abaixo você pode escolher qual atributo comparar, e foram adicionados comparações entres atributos para saber qual é maior, o maior sempre vence, somente a densidade populacional que tem como objetivo ser menor. 
    

    srand (time(0));
    

    printf("***    Jogo Super Trunfo   ***\n");
    printf(" * Escolha o primeiro atributo:\n");
    printf("1 - população:\n");
    printf("2 - Área:\n");
    printf("3 - PIB:\n");
    printf("4 - Pontos turísticos:\n");
    printf("5 - Densidade populacional:\n");
    

    printf("Escolha a comparação\n");
    scanf("%d", &primeiroatributo);


    switch (primeiroatributo)
    {
     case 1:
            printf("País: %s\n", pais1);
            printf("Carta 1 - População: %.f\n", populacao1);
            printf("Carta 2 - População: %.f\n", populacao2);
            if (populacao1 == populacao2){
                printf("Empate!\n");
            }else {
                resultado1 = populacao1 > populacao2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
        break;
         
    case 2:          
           printf("País: %s\n", pais1);
           printf("Carta 1 - Área: %.2f km²\n", area1);
           printf("Carta 2 - Área: %.2f km²\n", area2);
           if (area1 == area2){
                printf("Empate!\n");
            }else {
                resultado1 = area1 > area2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
        break; 

    case 3: 
        printf("País: %s\n", pais1);
        printf("Carta 1 - PIB: %.2f bilhões de reais\n", pib1);
        printf("Carta 2 - PIB: %.2f bilhões de reais\n", pib2);
        if (pib1 == pib2){
            printf("Empate!\n");
            }else {
                resultado1 = pib1 > pib2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
        break; 
         
     case 4:           
           printf("País: %s\n", pais1);
           printf("Carta 1 - Número de Pontos Turísticos: %d\n", pontos_turisticos1);
           printf("Carta 2 - Número de Pontos Turísticos: %d\n", pontos_turisticos2);
           printf("Resultado: Carta 1 Venceu!\n");
           if (pontos_turisticos1 == pontos_turisticos2){
            printf("Empate!\n");
            }else {
           resultado1 = pontos_turisticos1 > pontos_turisticos2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
           break; 

     case 5:            
           printf("País: %s\n", pais1);
           printf("Carta 1 - Densidade Populacional: %.2f hab/km²\n", densidade1);
           printf("Carta 2 - Densidade Populacional: %.2f hab/km²\n", densidade2);
           printf("Resultado: Carta 1 Venceu!\n");
           if (densidade1 == densidade2){
            printf("Empate!\n");
            }else {
           resultado1 = densidade1 < densidade2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
           break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }
 
    printf(" * Escolha o primeiro atributo:\n");
    printf("1 - população:\n");
    printf("2 - Área:\n");
    printf("3 - PIB:\n");
    printf("4 - Pontos turísticos:\n");
    printf("5 - Densidade populacional:\n");
    

    printf("Escolha a comparação\n");
    scanf("%d", &segundoatributo);

    if (primeiroatributo == segundoatributo)
    {
        printf("Você escolheu o mesmo atributo!");
    }else{
        switch (segundoatributo)
    {
    
        case 1:
            printf("País: %s\n", pais2);
            printf("Carta 1 - População: %.f\n", populacao1);
            printf("Carta 2 - População: %.f\n", populacao2);
            if (populacao1 == populacao2){
                printf("Empate!\n");
            }else {
                resultado2 = populacao1 > populacao2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
        break;
         
    case 2:          
           printf("País: %s\n", pais2);
           printf("Carta 1 - Área: %.2f km²\n", area1);
           printf("Carta 2 - Área: %.2f km²\n", area2);
           if (area1 == area2){
                printf("Empate!\n");
            }else {
                resultado2 = area1 > area2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
        break; 

    case 3: 
        printf("País: %s\n", pais2);
        printf("Carta 1 - PIB: %.2f bilhões de reais\n", pib1);
        printf("Carta 2 - PIB: %.2f bilhões de reais\n", pib2);
        if (pib1 == pib2){
            printf("Empate!\n");
            }else {
                resultado2 = pib1 > pib2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
        break; 
         
     case 4:           
           printf("País: %s\n", pais2);
           printf("Carta 1 - Número de Pontos Turísticos: %d\n", pontos_turisticos1);
           printf("Carta 2 - Número de Pontos Turísticos: %d\n", pontos_turisticos2);
           printf("Resultado: Carta 1 Venceu!\n");
           if (pontos_turisticos1 == pontos_turisticos2){
            printf("Empate!\n");
            }else {
           resultado2 = pontos_turisticos1 > pontos_turisticos2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
           break; 

     case 5:            
           printf("País: %s\n", pais2);
           printf("Carta 1 - Densidade Populacional: %.2f hab/km²\n", densidade1);
           printf("Carta 2 - Densidade Populacional: %.2f hab/km²\n", densidade2);
           printf("Resultado: Carta 1 Venceu!\n");
           if (densidade1 == densidade2){
            printf("Empate!\n");
            }else {
           resultado2 = densidade1 < densidade2 ? printf("Resultado: Carta 1 Venceu!\n") : printf("Resultado: Carta 2 Venceu!\n");
            }
           break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }
  }

 

}