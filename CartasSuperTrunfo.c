#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super trunfo!!\n");

    char estado = 'A';
    char codigo [4] = "A01";
    char cidade [20] = "SãoPaulo";
    int populacao = 12325000;
    float area = 1521.11;
    float PIB = 699.28;
    int pontos = 50;

    printf("O estado é: %c\n", estado);
    printf("O código da carta é: %s\n", codigo);
    printf("O nome da cidade é: %s\n", cidade);
    printf("A população é: %d\n", populacao);
    printf("A área é: %.2f\n", area);
    printf("O PIB é: %.2f\n", PIB);
    printf("O número de pontos turisticos é: %d\n", pontos);
  

    
    

    //Estado Numero 2 -  Rio de Janeiro
    char Estado = 'B';
    char Codigo [4] = "B02";
    char Cidade [20] = "RioDeJaneiro";
    int Populacao = 6748000;
    float Area = 1200.25;
    float pIB = 300.50;
    int Pontos = 30;

    printf("O estado é: %c\n", Estado);
    printf("O código da carta é: %s\n", Codigo);
    printf("O nome da cidade é: %s\n", Cidade);
    printf("A população é: %d\n", Populacao);
    printf("A área é: %.2f\n", Area);
    printf("O PIB é: %.2f\n", pIB);
    printf("O número de pontos turisticos é: %d\n", Pontos);

    return 0;
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
