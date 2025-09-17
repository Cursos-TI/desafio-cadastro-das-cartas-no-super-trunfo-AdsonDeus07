#include <stdio.h>

int main(){
    // Variáveis da Carta 01
    char estado_01;
    char codigo_01[4];
    char cidade_01[50];
    unsigned long int populacao_01;
    float area_01;
    float pib_01;
    int pontos_turisticos_01;
    float densidade_populacional_01;
    float pib_perCapita_01;
    float super_poder_01;

    // Variáveis da Carta 02
    char estado_02;
    char codigo_02[4];
    char cidade_02[50];
    unsigned long int populacao_02;
    float area_02;
    float pib_02;
    int pontos_turisticos_02;
    float densidade_populacional_02;
    float pib_perCapita_02;
    float super_poder_02;

    // Enstrada de dados da Carta 01
    printf("Cadastro da Carta 01:\n\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado_01);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_01);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_01);

    printf("Digite a quantidade de população: ");
    scanf("%lu", &populacao_01);

    printf("Digite a área (em Km²): ");
    scanf("%f", &area_01);

    printf("Figite o PIB (em bilhões): ");
    scanf("%f", &pib_01);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_01);

    densidade_populacional_01 = (float)populacao_01 / area_01;
    pib_perCapita_01 = (pib_01 * 1000000000.0f) / populacao_01;
    super_poder_01 = (float)populacao_01 + area_01 + pib_01 + pontos_turisticos_01 + pib_perCapita_01 + (1.0f / densidade_populacional_01);

    // Entrada de dados da Carta 02
    printf("\nCadastro da Carta 02:\n\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado_02);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_02);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_02);

    printf("Digite a quantidade de população: ");
    scanf("%lu", &populacao_02);

    printf("Digite a área (em Km²): ");
    scanf("%f", &area_02);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_02);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_02);

    densidade_populacional_02 = (float)populacao_02 / area_02;
    pib_perCapita_02 = (pib_02 * 1000000000.0f) / populacao_02;
    super_poder_02 = (float)populacao_02 + area_02 + pib_02 + pontos_turisticos_02 + pib_perCapita_02 + (1.0f / densidade_populacional_02);

    // Exibição dos dados
    printf("\n\n--- CARTA 01 ---\n\n");
    printf("Estado: %c\n", estado_01);
    printf("Código: %s\n", codigo_01);
    printf("Nome da Cidade: %s\n", cidade_01);
    printf("População: %lu\n", populacao_01);
    printf("Área: %.2f Km²\n", area_01);
    printf("PIB: %.2f bilhões de reais\n", pib_01);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_01);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_01);
    printf("PIB Per Capita: %.2f\n", pib_perCapita_01);
    printf("Super Poder: %.2f\n", super_poder_01);

    printf("\n\n--- CARTA 02 ---\n\n");
    printf("Estado: %c\n", estado_02);
    printf("Código: %s\n", codigo_02);
    printf("Nome da Cidade: %s\n", cidade_02);
    printf("População: %lu\n", populacao_02);
    printf("Área: %.2f Km²\n", area_02);
    printf("PIB: %.2f bilhões de reais\n", pib_02);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_02);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_02);
    printf("PIB Per Capita: %.2f\n", pib_perCapita_02);
    printf("Super Poder: %.2f\n", super_poder_02);

    // Comparação das Cartas
    printf("\n\n=== COMPARAÇÃO DE CARTAS ===\n\n");
    printf("População: Carta 1 venceu (%d)\n", populacao_01 > populacao_02);
    printf("Área: Carta 1 venceu (%d)\n", area_01 > area_02);
    printf("PIB: Carta 1 venceu (%d)\n", pib_01 > pib_02);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos_01 > pontos_turisticos_02);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional_01 > densidade_populacional_02);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_perCapita_01 > pib_perCapita_02);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_01 > super_poder_02);

    return 0;

}