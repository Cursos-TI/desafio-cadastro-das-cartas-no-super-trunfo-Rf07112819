#include <stdio.h>
#include <string.h> // Para remover o '\n' do fgets()

int main() {
    // variáveis para a carta 1
    char estado1[50];
    char codigo1[10];          
    char nomecidade1[50];
    float populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // variáveis para a carta 2
    char estado2[50];
    char codigo2[10];
    char nomecidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Cadastro da Carta 1\n");

    printf("Informe o Estado: ");
    scanf("%s", estado1);

    printf("Informe o Codigo da Carta: ");
    scanf("%s", codigo1);

    getchar(); // limpa o '\n' deixado no buffer
    printf("Informe o Nome da Cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = 0; // remove '\n'

    printf("Informe a Populacao: ");
    scanf("%f", &populacao1);

    printf("Informe a Area: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\nCadastro da Carta 2\n");

    printf("Informe o Estado: ");
    scanf("%s", estado2);

    printf("Informe o Codigo da Carta: ");
    scanf("%s", codigo2);

    getchar(); // limpa o '\n' do buffer
    printf("Informe o Nome da Cidade: ");
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    nomecidade2[strcspn(nomecidade2, "\n")] = 0; // remove '\n'

    printf("Informe a Populacao: ");
    scanf("%f", &populacao2);

    printf("Informe a Area: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Saída
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Populacao: %.2f\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos turisticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populacao: %.2f\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}
