 #include <stdio.h>
    #include <stdio.h>

int main() {
    // --- Declaração de variáveis ---
    char estado1[50], estado2[50];
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma_carta1, soma_carta2;

    // --- Carta 1 ---
    printf("---- Carta 1 ----\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado1);
    printf("Digite o código do estado: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);
    printf("Digite a densidade populacional: ");
    scanf("%f", &densidade1);
    printf("Digite o PIB per capita: ");
    scanf("%f", &pibPerCapita1);

    // --- Carta 2 ---
    printf("\n---- Carta 2 ----\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);
    printf("Digite o código do estado: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);
    printf("Digite a densidade populacional: ");
    scanf("%f", &densidade2);
    printf("Digite o PIB per capita: ");
    scanf("%f", &pibPerCapita2);

    // --- Menu de atributos ---
    printf("\nAtributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");

    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    do {
        printf("Escolha o segundo atributo: ");
        scanf("%d", &opcao2);
        if(opcao2 == opcao1) 
        printf("Erro! Você não pode escolher o mesmo atributo duas vezes.\n");
        
    } while(opcao2 == opcao1);
    // --- Pegar valores do primeiro atributo ---
    switch(opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; 
        break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; 
        break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; 
        break;
        case 4: valor1_carta1 = pontos1; valor1_carta2 = pontos2;
        break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2;
        break;
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; 
        break;
    }

    // --- Pegar valores do segundo atributo ---
    switch(opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2;
        break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; 
        break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2;
        break;
        case 4: valor2_carta1 = pontos1; valor2_carta2 = pontos2; 
        break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; 
        break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; 
        break;
    }

    // --- Soma dos atributos ---
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("Soma da primeira carta: %.2f\n", soma_carta1);
    printf("Soma da segunda carta: %.2f\n", soma_carta2);

    float carta1_total = soma_carta1;
    float carta2_total = soma_carta2;

    
    if(opcao1 == 5) {
        if(valor1_carta1 < valor1_carta2) carta1_total += 1; 
        else carta2_total += 1;
    }
    if(opcao2 == 5) {
        if(valor2_carta1 < valor2_carta2) carta1_total += 1; 
        else carta2_total += 1;
    }

    if(carta1_total > carta2_total) 
    printf("Resultado: a primeira carta venceu!\n");
    else if(carta2_total > carta1_total) 
    printf("Resultado: a segunda carta venceu!\n");
    else printf("Empate!\n");

    return 0;
}