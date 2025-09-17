#include <stdio.h>

int main(){
    // Variáveis da Carta 1
    char estado_1;
    char codigo_1[4];
    char cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    // Variáveis da Carta 2
    char estado_2;
    char codigo_2[4];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

    // Entrada de dados da Carta 1

    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade_1);

    printf("Digite a quantidade de população: ");
    scanf("%d", &populacao_1);

    printf("Digite a área (em Km2): ");
    scanf("%f", &area_1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    // Entrada de dados da Carta 2

    printf("Cadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade_2);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao_2);

    printf("Digite a área (em Km2): ");
    scanf("%f", &area_2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    // Exibição dos dados

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f Km2\n", area_1);
    printf("PIB: %.2f Bilhôes de reais\n", pib_1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f Km2\n", area_2);
    printf("PIB: %.2f Bilhôes de reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_2);

    return 0; 

}
