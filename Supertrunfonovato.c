#include <stdio.h>
int main() {
    // --- Declaração de todas as variáveis no início ---
    char estado1[3], estado2[3];
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
   unsigned long long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
	
	// --- Carta 1 ---
    printf("---- Carta 1 ----\n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado1);

    printf("Digite o código do estado: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf ("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

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
    
	// carta1
   
    printf("\n--- Carta1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
	
   
   //carta2
   
    printf("\n--- Carta2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
  
    return 0;

}
