#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    char estado1[3], estado2[3], codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1, pib2;
    printf("Carta 1: \n"); // Entrada de dados da Carta 1
    printf("Estado (uma letra de 'A' a 'H' - representando um dos oito estados): ");
    scanf("%2s", estado1);
    printf("Código da Carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): ");
    scanf("%4s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%49s", cidade1);
    printf("População (número de habitantes da cidade): ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (o Produto Interno Bruto da cidade): ");
    scanf("%f", &pib1);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &turismo1);
    printf("\nCarta 2: \n"); // Entrada de dados da Carta 2
    printf("Estado (uma letra de 'A' a 'H' - representando um dos oito estados): ");
    scanf("%2s", estado2);
    printf("Código da Carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): ");
    scanf("%4s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%49s", cidade2);
    printf("População (número de habitantes da cidade): ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (o Produto Interno Bruto da cidade): ");
    scanf("%f", &pib2);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &turismo2);
    printf("\n--- Dados da Carta 1 --\n"); // Saída de dados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", turismo1);
    printf("\n--- Dados da Carta 2 --\n"); // Saída de dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", turismo2);
    getchar ();

    return 0; 
}
