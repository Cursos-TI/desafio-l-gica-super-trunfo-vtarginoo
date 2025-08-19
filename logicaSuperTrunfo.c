#include <stdio.h>
#include <string.h>


/// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

float calculaDensidade (unsigned long populacao, int area){

    return (float) populacao/area;
}

float calculaDensidadeInversa (unsigned long populacao, int area){

    return (float) area/populacao;
}


float calculaPibPerCapita (int pib, unsigned long populacao){

    return (float) pib/populacao;
}

float calculaSuperPoder (unsigned long populacao,int pib, int area, int pontosTuristicos ) {

        float popfloat = (float) populacao;
        float pibfloat = (float) pib;
        float areafloat = (float) area;
        float pontosTuristicosfloat = (float) pontosTuristicos;

        float inversoDensidade = calculaDensidadeInversa(populacao,area);
        float pibPerCapita  = calculaPibPerCapita(pib,populacao);

        
        return popfloat + pibfloat + areafloat + pontosTuristicosfloat + inversoDensidade + pibPerCapita;
}


int main() {
    
    printf("*********** seja bem vindo ao super trunfo ***********\n");
    printf("\n");

    // Declaração das variaveis do cidade 1
    char cidade1;
    char codigoDaCarta1[20];
    char nome1[50];
    unsigned long populacao1;
    float areaKm1;
    float pib1;
    int pontosTuristicos1;
    char numeroDaCarta1 = '1'; 

    // Declaração das variaveis do cidade 2
    char cidade2;
    char codigoDaCarta2[20];
    char nome2[50];
    unsigned long populacao2;
    float areaKm2;
    float pib2;
    int pontosTuristicos2;
    char numeroDaCarta2 = '2'; 


    printf("Chegou a hora de declarar a primeira carta: ***********\n");


    // --- Introdução dos Dados da Cidade 1 ---
    printf("Digite o caracter do cidade 1:\n");
    scanf(" %c", &cidade1);
    getchar();

    printf("Digite o nome da cidade 1:\n");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("Digite a populacao da cidade1:\n");
    scanf("%lu", &populacao1);

    printf("Digite a area em km2 do cidade 1:\n");
    scanf("%f", &areaKm1);

    printf("Digite o PIB do cidade 1:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos do cidade 1:\n");
    scanf("%d", &pontosTuristicos1);

    // -- Criacao do codigo 1
    sprintf(codigoDaCarta1, "%c0%c", cidade1, numeroDaCarta1);
    
    // Calculo Densidade Populacional e PIB Percapita 1
    float densidade1 = calculaDensidade(populacao1,areaKm1);
    float pibPerCapita1 = calculaPibPerCapita(pib1,populacao1);
    float superPoder1 = calculaSuperPoder(populacao1,pib1,areaKm1,pontosTuristicos1);


////////////////////////////////////////////////////////////////

printf("Chegou a hora de declarar a segunda carta: ***********\n");

    // --- Introdução dos Dados da Cidade 2 ---
    printf("Digite o caracter da cidade 2:\n");
    scanf(" %c", &cidade2);
    getchar();

    printf("Digite o nome da cidade 2:\n");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("Digite a populacao da cidade 2:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km2 da cidade 2:\n");
    scanf("%f", &areaKm2);

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2:\n");
    scanf("%d", &pontosTuristicos2);
     // -- Criacao do codigo 
    sprintf(codigoDaCarta2, "%c0%c", cidade2, numeroDaCarta2);

    // Calculo Densidade Populacional e PIB Percapita 2
    float densidade2 = calculaDensidade(populacao2,areaKm2);
    float pibPerCapita2 = calculaPibPerCapita(pib2,populacao2);
    float superPoder2 = calculaSuperPoder(populacao2,pib2,areaKm2,pontosTuristicos2);



     // --- Exibicao dos Dados da Cidade 1 ---
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Cidade: %c\n", cidade1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1); // Exemplo de como usar a precisao no printf
    printf("PIB:  %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita:   %.2f reais \n", pibPerCapita1);
    printf("Super Poder:   %.2f\n", superPoder1);

     // --- Exibicao dos Dados da Cidade 2 ---
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Cidade: %c\n", cidade2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2); 
    printf("PIB:  %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita:   %.2f reais \n", pibPerCapita2);
    printf("Super Poder:   %.2f\n", superPoder2);   

    ///Comparações de atributo 

    // Exibe Menu de comparação 
   printf("***** Chegou a hora de escolher o atributo de comparação *****  \n");
    printf("\n");

    int opcao;
    printf("Antes de iniciarmos, escolha qual atributo será o de comparação?\n");
    printf("1. Populacão\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
    printf("5. PIB Per Capita\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);
    printf("\n");

    int cartaVencedora =0;
    char categoria[40];
    float valor1;
    float valor2;

    switch (opcao){

        case 1: cartaVencedora = populacao1==populacao2?0:populacao1>populacao2?1:2;
        sprintf(categoria, "população");
        valor1 = populacao1;
        valor2 = populacao2;
        break; 

        case 2: cartaVencedora = areaKm1==areaKm2?0:areaKm1>areaKm2?1:2;
        sprintf(categoria, "Área (Km²)");
        valor1 = areaKm1;
        valor2 = areaKm2;
        break; 

        case 3:  cartaVencedora = pib1==pib2? 0 : pib1>pib2?1:2;
        sprintf(categoria, "PIB (em Bilhões de reais)");
        valor1 = pib1;
        valor2 = pib2;
        break;

        case 4: cartaVencedora = densidade1==densidade2? 0 : densidade1<densidade2?1:2; 
        sprintf(categoria, "densidade demográfica (em hab/km² )");
        valor1 = densidade1;
        valor2 = densidade2;
        break;

        case 5:cartaVencedora = pibPerCapita1==pibPerCapita2? 0 : pibPerCapita1>pibPerCapita2?1:2;
        sprintf(categoria, "PIB per Capita");
        valor1 = pibPerCapita1;
        valor2 = pibPerCapita2;
        break;

        default: 
        printf("Escolha Inválida - Super Trunfo Encerrado");
        return 0;
        break;
    }


    /// Exibição da comparação
    printf("========== Comparação das Cartas ========== \n");
    printf("O Atributo usado na comparação foi: %s\n", categoria);
    printf("Carta 1 - %s: %.2f \n",nome1, valor1);
    printf("Carta 2 - %s: %.2f \n",nome2, valor2);


    if(cartaVencedora == 0) {
    printf("Resultado: Empate!!!\n" );
    } else{
    printf("Resultado: Carta %d (%s) venceu!\n", cartaVencedora, cartaVencedora == 1 ? nome1:nome2 );
    }





   
    return 0;
}
