#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Variaveis Primeira carta
    char estado_primeira_carta;
    int codigo_cidade_primeira_carta;
    char nome_cidade_primeira_carta[25];
    int populacao_primeira_carta;
    float area_primeira_carta;
    float pib_primeira_carta;
    int numero_pontos_turisticos_primeira_carta;
    
    // Variaveis Segunda carta

    int codigo_cidade_segunda_carta;
    char nome_cidade__segunda_carta[25];
    int populacao_segunda_carta;
    float area_segunda_carta;
    float pib_segunda_carta;
    int numero_pontos_turisticos_segunda_carta;



    // Cadastro das Cartas:

    // Cadastro primeira carta

  
   // Carta 1

    printf("Cadastro da primeira carta...\n");

    printf("Digite o ESTADO da primeira carta (A-H): \n");
    scanf("%c", &estado_primeira_carta);

    printf("Digite o código da cidade: \n");
    scanf("%i", &codigo_cidade_primeira_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade_primeira_carta);

    printf("Digite o numero total da populacao da cidade: \n");
    scanf("%i", &populacao_primeira_carta);

    printf("Digite o numero da area em km^2 da cidade: \n");
    scanf("%f", &area_primeira_carta);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib_primeira_carta);




    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
