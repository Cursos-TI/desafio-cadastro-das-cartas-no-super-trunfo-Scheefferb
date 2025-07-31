#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super trunfo!!\n");

    char estado_01 = 'A';
    char codigo_01 [4] = "A01";
    char cidade_01 [20] = "SãoPaulo";
    int populacao_01 = 12325000;
    float area_01 = 1521.11;
    float PIB_01 = 699.28;
    int pontos_01 = 50;

    printf("Qual é a letra da carta 1?  \n");
    scanf("%c", &estado_01);
    printf("O estado é: %c\n", estado_01);

    printf("Qua é o codigo da carta? \n");
    scanf("%s", codigo_01);
    printf("O código da carta é: %s\n", codigo_01);

    printf("Qual é a cidade? \n");
    scanf("%s", cidade_01);
    printf("O nome da cidade é: %s\n", cidade_01);
    
    printf("Qual o numero de habitantes?  \n");
    scanf("%d", &populacao_01);
    printf("A população é: %d\n", populacao_01);

    printf("Qual o tamanho da area da cidade?  \n");
    scanf("%f", &area_01);
    printf("A área é: %.2f\n", area_01);
    

    printf("Qual é o PIB da cidade?");
    scanf("%f", &PIB_01);
    printf("O PIB é: %.2f\n", PIB_01);


    printf("Qual é o número de pontos turisticos na cidade?");
    scanf("%d", &pontos_01);
    printf("O número de pontos turisticos é: %d\n", pontos_01);


    //Estado Numero 2 -  Rio de Janeiro
    char estado_02 = 'B';
    char codigo_02 [4] = "B02";
    char cidade_02 [20] = "RioDeJaneiro";
    int populacao_02 = 6748000;
    float area_02 = 1200.25;
    float PIB_02 = 300.50;
    int pontos_02 = 30;

    printf("Qual é a letra da carta 1?  \n");
    scanf("%c", &estado_02);
    printf("O estado é: %c\n", estado_02);

    printf("Qua é o codigo da carta? \n");
    scanf("%s", codigo_02);
    printf("O código da carta é: %s\n", codigo_02);

    printf("Qual é a cidade? \n");
    scanf("%s", cidade_02);
    printf("O nome da cidade é: %s\n", cidade_02);
    
    printf("Qual o numero de habitantes?  \n");
    scanf("%d", &populacao_02);
    printf("A população é: %d\n", populacao_02);

    printf("Qual o tamanho da area da cidade?  \n");
    scanf("%f", &area_02);
    printf("A área é: %.2f\n", area_02);
    

    printf("Qual é o PIB da cidade?");
    scanf("%f", &PIB_02);
    printf("O PIB é: %.2f\n", PIB_02);


    printf("Qual é o número de pontos turisticos na cidade?");
    scanf("%d", &pontos_02);
    printf("O número de pontos turisticos é: %d\n", pontos_02);


    return 0;
}
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha
