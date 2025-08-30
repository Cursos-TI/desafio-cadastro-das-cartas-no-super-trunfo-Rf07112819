#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 1
    char estado1;
    char codigo1[10];          
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[10];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Instruções para o usuário - Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Informe o Estado: ");
    scanf(" %c", &estado1); // espaço antes do %c

    printf("Informe o Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1); // espaço antes do % para ignorar '\n'

    printf("Informe a Populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a Area: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // Instruções para o usuário - Carta 2
    printf("Cadastro da Carta 2\n");

    printf("Informe o Estado: ");
    scanf(" %c", &estado2);

    printf("Informe o Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a Area: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    // Exibindo as informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos turisticos: %d\n", pontosturisticos1);

    printf("\n");

    // Exibindo as informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}
