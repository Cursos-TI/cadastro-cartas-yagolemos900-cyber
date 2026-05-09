#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1[10];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Novas propriedades Carta 1
    float densidade1;
    float pibPerCapita1;

    // Declaração das variáveis da Carta 2
    char estado2[10];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Novas propriedades Carta 2
    float densidade2;
    float pibPerCapita2;

    // ====== ENTRADA DE DADOS CARTA 1 ======
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // ====== CÁLCULOS CARTA 1 ======
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;


    // ====== ENTRADA DE DADOS CARTA 2 ======
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // ====== CÁLCULOS CARTA 2 ======
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;


    // ====== SALVAR AS CARTAS ======
    FILE *arquivo;

    arquivo = fopen("cartas.txt", "w");

    if (arquivo != NULL) {

        fprintf(arquivo, "===== CARTAS CADASTRADAS =====\n");

        // Carta 1
        fprintf(arquivo, "\nCarta 1:\n");
        fprintf(arquivo, "Estado: %c\n", estado1);
        fprintf(arquivo, "Codigo: %s\n", codigo1);
        fprintf(arquivo, "Nome da Cidade: %s\n", cidade1);
        fprintf(arquivo, "Populacao: %d\n", populacao1);
        fprintf(arquivo, "Area: %.2f km²\n", area1);
        fprintf(arquivo, "PIB: %.2f bilhões de reais\n", pib1);
        fprintf(arquivo, "Numero de Pontos Turisticos: %d\n", pontos1);
        fprintf(arquivo, "Densidade Populacional: %.2f hab/km²\n", densidade1);
        fprintf(arquivo, "PIB per Capita: R$ %.2f\n", pibPerCapita1);

        // Carta 2
        fprintf(arquivo, "\nCarta 2:\n");
        fprintf(arquivo, "Estado: %c\n", estado2);
        fprintf(arquivo, "Codigo: %s\n", codigo2);
        fprintf(arquivo, "Nome da Cidade: %s\n", cidade2);
        fprintf(arquivo, "Populacao: %d\n", populacao2);
        fprintf(arquivo, "Area: %.2f km²\n", area2);
        fprintf(arquivo, "PIB: %.2f bilhões de reais\n", pib2);
        fprintf(arquivo, "Numero de Pontos Turisticos: %d\n", pontos2);
        fprintf(arquivo, "Densidade Populacional: %.2f hab/km²\n", densidade2);
        fprintf(arquivo, "PIB per Capita: R$ %.2f\n", pibPerCapita2);

        fclose(arquivo);
    }

    // ====== SAÍDA FORMATADA ======
    printf("\n===== CARTAS CADASTRADAS =====\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    printf("\nCartas salvas no arquivo cartas.txt\n");

    return 0;
}
