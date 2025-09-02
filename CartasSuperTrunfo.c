#include <stdio.h>

//Início da função principal.
int main(){

    // Declaração de variáveis.
    char estado1, estado2;
    char codigo_carta1[5], codigo_carta2[5];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    int ponto_turistico1, ponto_turistico2;
    float area1, area2;
    float PIB1, PIB2;

    //Leitura dos dados da primeira Carta.
    printf("Inisira os dados da primeira carta.\n"); //"Cabeçalho".

    printf("Digite a inicial do Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta:\n");
    scanf(" %s", codigo_carta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nome_cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &ponto_turistico1);

    printf("===========================================\n");

    //Leitura dos dados da segunda Carta.
    printf("Inisira os dados da segunda carta.\n"); //"Cabeçalho".

    printf("Digite a inicial do Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta:\n");
    scanf(" %s", codigo_carta2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nome_cidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &ponto_turistico2);

    //Impressão das informações da primeira carta.
    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n",area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", ponto_turistico1);

    printf("===========================================\n");

    //Impressão das informações da segunda carta.
    printf("CARTA 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km² \n",area2);
    printf("PIB: %.2f bilhoes de reais \n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", ponto_turistico2);

    printf("===========================================\n");

    //Resultado esperado.
    return 0;
}
