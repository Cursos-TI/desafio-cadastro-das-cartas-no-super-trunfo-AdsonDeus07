#include <stdio.h>

int main(){
    // Variáveis da Carta 01
    char estado_1;
    char codigo_1[4];
    char cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    float densidade_populacional_1;
    float pib_perCapita_1;

    // Variáveis da Carta 02

    char estado_2;
    char codigo_2[4];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_populacional_2;
    float pib_perCapita_2;

    // Entrada de dados da Carta 01

    printf("Cadastro da Carta 01:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da Carta: ");
    scanf("%s", codigo_1);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", cidade_1);

    printf("Digite a quantidade de população: ");
    scanf("%d", &populacao_1);

    printf("Digite a área (em Km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    densidade_populacional_1 = populacao_1 / area_1;

    pib_perCapita_1 = (pib_1 * 1000000000) / populacao_1;

    // Entrada de dados da Carta 02

    printf("Cadastro da Carta 02:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da Carta: ");
    scanf("%s", codigo_2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", cidade_2);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao_2);

    printf("Digite a área (em Km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    densidade_populacional_2 = populacao_2 / area_2;

    pib_perCapita_2 = (pib_2 * 1000000000) / populacao_2;

    // Exibiçao dos dados

    printf("\n--- CARTA 01 ---\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f Km²\n", area_1);
    printf("PIB: %.2f Bilhões de Reais\n", pib_1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_1);
    printf("PIB Per Capita: %.2f\n", pib_perCapita_1);

    printf("\n --- CARTA 02 ---\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f Km²\n", area_2);
    printf("PIB: %.2f Bilhões de Reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_2);
    printf("PIB Per Capita: %.2f\n", pib_perCapita_2);

    return 0;

}