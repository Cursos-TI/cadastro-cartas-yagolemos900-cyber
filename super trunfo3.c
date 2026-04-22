#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    int opcao;

    // ====== CARTA 1 ======
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);


    // ====== CARTA 2 ======
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);


    // ====== EXIBIÇÃO ======
    printf("\n===== CARTAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);


    // ====== ESCOLHA DO ATRIBUTO ======
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("Opcao: ");
    scanf("%d", &opcao);


    // ====== RESULTADO ======
    printf("\n===== RESULTADO =====\n");

    switch(opcao) {
        case 1:
            printf("Comparando Populacao...\n");
            if(populacao1 > populacao2)
                printf("%s venceu!\n", cidade1);
            else if(populacao2 > populacao1)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Area...\n");
            if(area1 > area2)
                printf("%s venceu!\n", cidade1);
            else if(area2 > area1)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB...\n");
            if(pib1 > pib2)
                printf("%s venceu!\n", cidade1);
            else if(pib2 > pib1)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turisticos...\n");
            if(pontos1 > pontos2)
                printf("%s venceu!\n", cidade1);
            else if(pontos2 > pontos1)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}