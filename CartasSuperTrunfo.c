#include <stdio.h>

    int main (){
        
    char estado[50], cidade[50], codigo_da_carta[20];
    int populaçao, numero_de_pontos_turisticos;
    float area, pib;


    printf("codigo da carta\n");
    scanf("%s", &codigo_da_carta);

    printf("estado\n");
    scanf("%s", &estado);

    printf("nome da cidade\n");
    scanf("%s", cidade);

    printf("populaçao\n");
    scanf("%d", &populaçao);

    printf("area\n");
    scanf("%f", &area);

    printf("pib\n");
    scanf("%f", &pib);

    printf("numero de pontos turisticos\n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("carta 1");
    printf("codigo da carta: %s - estado: %s - cidade: %s\n ", codigo_da_carta, estado, cidade);
    printf("populaçao: %d - area: %f - pib: %f\n", populaçao, area, pib);
    printf("numero de pontos turisticos: %d\n");

    }



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
