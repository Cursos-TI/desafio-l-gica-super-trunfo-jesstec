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
	densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    printf("Densidade populacional:%.2f\n", densidade1);
    printf("Pib per capito:%.2f\n", pibPerCapita1);
   
   //carta2
   
    printf("\n--- Carta2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    printf("Densidade populacional:%.2f\n", densidade2);
    printf("Pib per capito:%.2f\n", pibPerCapita2);

    //calculos
   densidade1 = (float)populacao1 / area1;
   pibPerCapita1 = pib1 / (float)populacao1;
   densidade2 = (float)populacao2 / area2;
   pibPerCapita2 = pib2 / (float)populacao2;
   
   printf("\n--------MENU ---------\n");
   
   // Comparacao entre a carta 1 e 2
	 printf("Menu = 1- populacao\n");
     printf("Menu = 2- Area\n");
     printf("Menu = 3- Pib\n");
     printf("Menu = 4- pontos turisticos\n");
     printf("Menu = 5- Densidade demografica\n");
     printf("Qual opcao deseja:");
	 scanf("%d", &opcao);
    
     printf("Qual pais deseja incluir no jogo:\n");
      scanf("%c", &pais1);
    printf("Qual outro pais deseja  incluir no jogo:\n");
     scanf("%c", &pais2);
	 
	 switch (opcao){
     
     case 1:
     	printf("Voce escolheu a populacao:\n");
       	if (populacao1>populacao2) {
		 printf("EBA, carta 1 foi a ganhadora!!\n");
		 printf("o pais vencedor foi:%c", pais1);
		 } else if(populacao2>populacao1){
	        printf("EBA, carta 2 foi ganhou!\n");
		    printf("o pais vencedor foi:%c", pais2);
		 } else{
		   printf("Poxa, ambos ficaram empatadas!\n");
	      }
          break;
	 case 2:
	   printf("Voce escolheu a Area\n");
	   if(area1>area2) {
	   printf("A carta 1 ganhou!\n");
	   printf("o pais vencedor foi:%s", pais1);
	   } else if (area2>area1){
	   printf("A carta 2 foi a vencedora\n");
       printf("o pais vencedor foi:%s", pais2);
	   } else{
	  printf("Deu empate a comparacao\n");
	   }
	   break;
	case 3:
	    printf("Voce escolheu o Pib\n");
	    if(pib1>pib2) {
	    printf("O carta 1 ganhou!\n");
	   printf("o pais vencedor foi:%c", pais1);
	   } else if (pib2>pib1){
	   printf("o carta 2 foi a vencedora\n");
       printf("o pais vencedor foi:%c", pais2);
	   } else{
	  printf("Deu empate a comparaca\nn");
	    break;
	     }
	 case 4:
	    printf("Voce escolheu o pontos turisticos\n");
	    if(pontos1>pontos2) {
	    printf("O carta 1 ganhou!\n");
	   printf("o pais vencedor foi:%c", pais1);
	   } else if (pontos2>pontos1){
	   printf("o carta 2 foi a vencedora\n");
       printf("o pais vencedor foi:%c", pais2);
	   } else{
	  printf("Deu empate a comparacao\n");
	  }
	   break; 
		case 5:
	    printf("Voce escolheu a Densidade\n");
	    if(densidade1<densidade2) {
	    printf("O carta 1 ganhou!\n");
	    printf("o pais vencedor foi:%c", pais1);
	   } else if (densidade2>densidade1){
	   printf("o pais vencedor foi:%c", pais2);
	   printf("o carta 2 foi a vencedora\n");
       } else{
	  printf("Deu empate a comparacao\n");
        }
     break;
   }
	    return 0;
        }
	    
	    











   
