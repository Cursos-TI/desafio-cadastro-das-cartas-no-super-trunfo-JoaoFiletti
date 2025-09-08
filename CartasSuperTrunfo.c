#include <stdio.h>

//Início da função principal.
int main(){
    // Daria pra simplificar as variáveis mas preferi separar por tipo e assunto.
    // Declaração de variáveis.
    char estado1, estado2; // Define "Estado" 1 e 2 como caractere.
    char codigo_carta1[5], codigo_carta2[5]; // Define "Código Carta" como cadeia de caracteres.
    char nome_cidade1[50], nome_cidade2[50]; // Define "Nome da Cidade" como cadeia de caracteres.
    int populacao1, populacao2; // Define "População" como inteiro.
    int ponto_turistico1, ponto_turistico2; // Define "Ponto Turistico" como inteiro.
    float area1, area2; // Define "Área" como Ponto Flutuante
    float PIB1, PIB2, PIBpC1, PIBpC2; // Define "PIB" e "PIB per Capita" 1 e 2 como Ponto Flutuante.
    float densidade1, densidade2; // Define "Densidade" 1 e 2 como ponto flutuante.

    //Leitura dos dados da primeira Carta.
    printf("Insira os dados da primeira carta.\n"); //"Cabeçalho".
    printf("\n"); // Pula uma linha para melhor visualização.

    printf("Digite a inicial do Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);

    // Pula uma linha antes do separador para melhorar a visualização.
    printf("\n");
    printf("===========================================\n");

    //Leitura dos dados da segunda Carta.
    printf("Insira os dados da segunda carta.\n"); //"Cabeçalho".
    printf("\n"); // Pula uma linha.

    printf("Digite a inicial do Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);

    // Calcula a Densidade Populacional da Carta 1.
    densidade1 = populacao1 / area1;

    // Calcula a Densidade Populacioanl da Carta 2.
    densidade2 = populacao2 / area2;

    // Calcula o PIB per Capita da Carta 1.
    PIBpC1 = PIB1 / populacao1;

    // Calcula o PIB per Capita da Carta 2.
    PIBpC2 = PIB2 / populacao2;

    // Pula uma linha para melhor visualização.    
    printf("\n");
    printf("===========================================\n");

    //Impressão das informações da primeira carta.
    printf("CARTA 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f km²\n",area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais", PIBpC1);

    // Pula uma linha antes e depois do separador para melhorar a visualização.
    printf("\n");
    printf("===========================================\n");
    printf("\n");

    //Impressão das informações da segunda carta.
    printf("CARTA 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km² \n",area2);
    printf("PIB: %.2f bilhoes de reais \n", PIB2);
    printf("Numero de Pontos Turisticos: %d \n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais", PIBpC2);
    
    // Pula uma linha para melhor visualização.
    printf("\n");
    printf("===========================================\n");

    //Resultado esperado.
    return 0;
}
