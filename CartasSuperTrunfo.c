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
    unsigned long int populacao_primeira_carta;
    float area_primeira_carta;
    float densidade_pop_primeira_carta;
    double pib_primeira_carta;
    double pib_per_capita_primeira_carta;
    int numero_pontos_turisticos_primeira_carta;
    double super_poder_primeira_carta;
    
    // Variaveis Segunda carta
    char estado_segunda_carta;
    int codigo_cidade_segunda_carta;
    char nome_cidade_segunda_carta[25];
    unsigned long int populacao_segunda_carta;
    float area_segunda_carta;
    double pib_segunda_carta;
    float densidade_pop_segunda_carta;
    double pib_per_capita_segunda_carta;
    int numero_pontos_turisticos_segunda_carta;
    double super_poder_segunda_carta;

    // Cadastro das cartas
   
    // Carta 1 ####

    printf("Cadastro da primeira carta...\n");

    // na parte de leitura feita no scanf, é necessario que se ponha um espaço extra antes do %c
    printf("Digite o ESTADO da cidade (A-H): \n");
    scanf(" %c", &estado_primeira_carta);

    printf("Digite o CODIGO da cidade (01-04): \n");
    scanf("%i", &codigo_cidade_primeira_carta);
    
    // %[^\n] no scanf é um tipo de regex pra resolver um erro ao tentar ler uma cidade com mais de 1 nome, ex: sao paulo ou rio de janeiro, o que ele faz basicamente é que o sistema vai ler o nome até que o usuário digite a tecla ENTER
    // e aqui novamente o espaço entra deixando antes desse regex é proposital, e evita um erro de leitura, não entendi completamente o porque mas é algo relacionado a buffer de leitura.
    printf("Digite o NOME da cidade: \n");
    scanf(" %[^\n]", nome_cidade_primeira_carta);
 
    printf("Digite a POPULACAO TOTAL da cidade: \n");
    scanf("%lu", &populacao_primeira_carta);

    printf("Digite a AREA em km^2 da cidade: \n");
    scanf("%f", &area_primeira_carta);

    printf("Digite o PiB da cidade: \n");
    scanf("%lf", &pib_primeira_carta);

    printf("Digite o numero de PONTOS TURISTICOS da cidade: \n");
    scanf("%i", &numero_pontos_turisticos_primeira_carta);

    // cadastrando segunda carta [Estado, codigo, nome, populacao, area, pib]

    printf("Cadastrando segunda carta...\n");
    
    // na parte de leitura feita no scanf, é necessario que se ponha um espaço extra antes do %c
    printf("Digite o ESTADO da cidade (A-H): \n");
    scanf(" %c", &estado_segunda_carta);

    printf("Digite o CODIGO da cidade (01-04): \n");
    scanf("%i", &codigo_cidade_segunda_carta);

    // %[^\n] no scanf é um tipo de regex pra resolver um erro ao tentar ler uma cidade com mais de 1 nome, ex: sao paulo ou rio de janeiro, o que ele faz basicamente é que o sistema vai ler o nome até que o usuário digite a tecla ENTER
    // e aqui novamente o espaço entra deixando antes desse regex é proposital, e evita um erro de leitura, não entendi completamente o porque mas é algo relacionado a buffer de leitura.
    printf("Digite o NOME da cidade: \n");
    scanf(" %[^\n]", nome_cidade_segunda_carta);

    printf("Digite a POPULACAO TOTAL da cidade: \n");
    scanf("%lu", &populacao_segunda_carta);

    printf("Digite a AREA em km^2 da cidade: \n");
    scanf("%f", &area_segunda_carta);

    printf("Digite o PiB da cidade: \n");
    scanf("%lf", &pib_segunda_carta);

    printf("Digite o numero de PONTOS TURISTICOS da cidade: \n");
    scanf("%i", &numero_pontos_turisticos_segunda_carta);

   
   
    // calculo densidade e pib per capita

    // PRIMEIRA CARTA
    densidade_pop_primeira_carta = populacao_primeira_carta / area_primeira_carta;
    pib_per_capita_primeira_carta = pib_primeira_carta / populacao_primeira_carta;
    super_poder_primeira_carta = (populacao_primeira_carta + area_primeira_carta + pib_per_capita_primeira_carta + (densidade_pop_primeira_carta * -1));
    
    // SEGUNDA CARTA

    densidade_pop_segunda_carta = populacao_segunda_carta / area_segunda_carta;
    pib_per_capita_segunda_carta = pib_segunda_carta / populacao_segunda_carta;
    super_poder_segunda_carta = (populacao_segunda_carta + area_segunda_carta + pib_per_capita_segunda_carta +  (densidade_pop_segunda_carta * -1));
    
    
    // Calculando vencedor

    int resultado_populacao = populacao_primeira_carta > populacao_segunda_carta? 1: 2;
    int resultado_area = area_primeira_carta > area_segunda_carta? 1: 2;
    int resultado_pib = pib_primeira_carta > pib_segunda_carta? 1: 2;
    int resultado_pontos_turisticos = numero_pontos_turisticos_primeira_carta > numero_pontos_turisticos_segunda_carta? 1: 2;
    int resultado_densidade_populacao = densidade_pop_primeira_carta < densidade_pop_segunda_carta? 1: 2;
    int resultado_pib_per_capita = pib_per_capita_primeira_carta > pib_per_capita_segunda_carta ? 1: 2;
    int resultado_super_poder = super_poder_primeira_carta > super_poder_segunda_carta? 1: 2;
    
    

    
    
    // Exibição dos Dados das Cartas:
   
    //Exibindo dados da primeira carta
    printf("\n\n\n###### Primeira carta ######\n");
    printf("Estado: %c\n", estado_primeira_carta);
    // o 0 entre os especificadores de formato é apenas pra ficar formatado conforme o exemplo do exercicio, ficará assim: A01 = /estado0codigo/ = /%c0%i/
    printf("Codigo: %c0%i\n", estado_primeira_carta, codigo_cidade_primeira_carta);
    printf("Nome: %s\n", nome_cidade_primeira_carta);
    printf("Populacao: %lu\n", populacao_primeira_carta);
    printf("Area: %f\n", area_primeira_carta);
    printf("PiB: %lf\n", pib_primeira_carta);
    printf("Densidade Populacional: %.2f\n", densidade_pop_primeira_carta);
    printf("PiB per Capita: %.2lf\n", pib_per_capita_primeira_carta);
    
    
    // apenas pra dar um espaço e ficar mais legível quando for imprimir no terminal
    printf("\n\n\n");
    
    // Exibindo dados da segunda carta
    printf("###### Segunda carta ######\n");
    printf("Estado: %c\n",estado_segunda_carta);
    printf("Codigo: %c0%i\n",estado_segunda_carta, codigo_cidade_segunda_carta);
    printf("Nome: %s\n", nome_cidade_segunda_carta);
    printf("Populacao: %luA\n", populacao_segunda_carta);
    printf("Area: %f\n", area_segunda_carta);
    printf("PiB: %lf\n", pib_segunda_carta);
    printf("Densidade Populacional: %.2f\n", densidade_pop_segunda_carta);
    printf("PiB per Capita: %.2lf\n\n\n\n\n", pib_per_capita_segunda_carta);


    // MOSTRANDO VENCENDOR
    printf("Comparação das cartas: \n");
    printf("População:Carta %i venceu (%i)\n", resultado_populacao, resultado_populacao == 1? 1 : 2);
    printf("Área: Carta %i venceu (%i) \n", resultado_area, resultado_area == 1? 1 : 2); 
    printf("PiB: Carta %i venceu (%i) \n", resultado_pib, resultado_pib == 1? 1 : 2);
    printf("Pontos turisticos: Carta %i venceu (%i) \n", resultado_pontos_turisticos, resultado_pontos_turisticos == 1? 1 : 2);
    printf("Densidade populacional: Carta %i venceu (%i)\n", resultado_densidade_populacao, resultado_densidade_populacao == 1? 1 : 0);
    printf("PiB per capita: Carta %i venceu (%i) \n", resultado_pib_per_capita, resultado_pib_per_capita == 1 ? 1 : 0);
    printf("super poder: Carta %i venceu (%i)\n", resultado_super_poder, resultado_super_poder == 1? 1 : 2);
    
    return 0;
}

