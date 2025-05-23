#include <stdio.h>
#include <ctype.h>

int main() {
  
    // ATRIBUTOS: estado, codigo, cidade, populacao, area, densidade, pib, pib per capita, pontos turisticos, super poder
    
    // Variaveis Primeira carta
    char estado_primeira_carta;
    int codigo_primeira_carta;
    char cidade_primeira_carta[25];
    unsigned long int populacao_primeira_carta;
    float area_primeira_carta;
    float densidade_pop_primeira_carta;
    double pib_primeira_carta;
    double pib_per_capita_primeira_carta;
    int pontos_turisticos_primeira_carta;
    double super_poder_primeira_carta;
    
    // Variaveis Segunda carta
    char estado_segunda_carta;
    int codigo_segunda_carta;
    char cidade_segunda_carta[25];
    unsigned long int populacao_segunda_carta;
    float area_segunda_carta;
    float densidade_pop_segunda_carta;
    double pib_segunda_carta;
    double pib_per_capita_segunda_carta;
    int pontos_turisticos_segunda_carta;
    double super_poder_segunda_carta;

    // Cadastro das cartas
   
    // Carta 1 
    printf("Cadastro da primeira carta...\n");

    // na parte de leitura feita no scanf, é necessario que se ponha um espaço extra antes do %c
    printf("Digite o ESTADO da cidade (A-H): \n");
    scanf(" %c", &estado_primeira_carta);

    printf("Digite o CODIGO da cidade (01-04): \n");
    scanf("%i", &codigo_primeira_carta);

    // %[^\n] no scanf é um tipo de regex pra resolver um erro ao tentar ler uma cidade com mais de 1 nome, ex: sao paulo ou rio de janeiro, o que ele faz basicamente é que o sistema vai ler o nome até que o usuário digite a tecla ENTER
    // e aqui novamente o espaço entra deixando antes desse regex é proposital, e evita um erro de leitura, não entendi completamente o porque mas é algo relacionado a buffer de leitura.
    printf("Digite o NOME da cidade: \n");
    scanf(" %[^\n]", cidade_primeira_carta);
 
    printf("Digite a POPULACAO TOTAL da cidade: \n");
    scanf("%lu", &populacao_primeira_carta);

    printf("Digite a AREA em km^2 da cidade: \n");
    scanf("%f", &area_primeira_carta);

    printf("Digite o PiB da cidade: \n");
    scanf("%lf", &pib_primeira_carta);

    printf("Digite o numero de PONTOS TURISTICOS da cidade: \n");
    scanf("%i", &pontos_turisticos_primeira_carta);

    // CADASTRANDO SEGUNDA CARTA
    printf("Cadastrando segunda carta...\n");
    
    // na parte de leitura feita no scanf, é necessario que se ponha um espaço extra antes do %c
    printf("Digite o ESTADO da cidade (A-H): \n");
    scanf(" %c", &estado_segunda_carta);

    printf("Digite o CODIGO da cidade (01-04): \n");
    scanf("%i", &codigo_segunda_carta);

    // %[^\n] no scanf é um tipo de regex pra resolver um erro ao tentar ler uma cidade com mais de 1 nome, ex: sao paulo ou rio de janeiro, o que ele faz basicamente é que o sistema vai ler o nome até que o usuário digite a tecla ENTER
    // e aqui novamente o espaço entra deixando antes desse regex é proposital, e evita um erro de leitura, não entendi completamente o porque mas é algo relacionado a buffer de leitura.
    printf("Digite o NOME da cidade: \n");
    scanf(" %[^\n]", cidade_segunda_carta);

    printf("Digite a POPULACAO TOTAL da cidade: \n");
    scanf("%lu", &populacao_segunda_carta);

    printf("Digite a AREA em km^2 da cidade: \n");
    scanf("%f", &area_segunda_carta);

    printf("Digite o PiB da cidade: \n");
    scanf("%lf", &pib_segunda_carta);

    printf("Digite o numero de PONTOS TURISTICOS da cidade: \n");
    scanf("%i", &pontos_turisticos_segunda_carta);

   
   
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
    int resultado_pontos_turisticos = pontos_turisticos_primeira_carta > pontos_turisticos_segunda_carta? 1: 2;
    int resultado_densidade_populacao = densidade_pop_primeira_carta < densidade_pop_segunda_carta? 1: 2;
    int resultado_pib_per_capita = pib_per_capita_primeira_carta > pib_per_capita_segunda_carta ? 1: 2;
    int resultado_super_poder = super_poder_primeira_carta > super_poder_segunda_carta? 1: 2;

 

    // Menu de escolha das comparacoes

    int atributo_comparacao[] = {0,0};
    int indice_atributo = 0;
    double soma_atributos_primeira_carta = 0;
    double soma_atributos_segunda_carta = 0;

    // População - area - PiB - Pontos turisticos - densidade demografica
   
    printf("Escolha dois atributos para comparação!\n");
    printf("1. Populacao.\n");
    printf("2. Area.\n");
    printf("3. PiB.\n");
    printf("4. Pontos Turisticos.\n");
    printf("5. Densidade demográfica.\n");


    while (indice_atributo < 2)
  {
    int aux_variavel = 0;

    printf("Escolha do %i° atributo: \n", indice_atributo + 1);
    
    scanf("%i", &aux_variavel);
    
    if( aux_variavel < 1 || aux_variavel > 5)
    {
        printf("Escolha inválida, escolha os atributos entre 1 e 5...\n");
        continue;
    }

    if(indice_atributo == 1 && aux_variavel == atributo_comparacao[0])
    {
        printf("Erro, esse atributo já foi escolhido, por favor escolha outro!\n");
        continue;
    }

    switch (aux_variavel)
    {
      case 1:
        
        printf("Atributo de comparação: População! O MAIOR VENCE! \n");
        printf("%s  x %s\n", cidade_primeira_carta, cidade_segunda_carta);

        // Checa empate, e se for empate pula a parte de comparação maior/menor
        if(populacao_primeira_carta == populacao_segunda_carta)
        {
          printf("%s e %s empataram em POPULACAO !\n", cidade_primeira_carta, cidade_segunda_carta);
          break;
        }
        
        // soma atributo selecionado das cartas para soma total que vai definir o vencedor definitivo. 
        soma_atributos_primeira_carta += populacao_primeira_carta;
        soma_atributos_segunda_carta += populacao_segunda_carta;

        // Compara atributo atual entre as duas cartas, soma o
        populacao_primeira_carta > populacao_segunda_carta
        ? printf("%s vence com a população de: %lu. \n", cidade_primeira_carta, populacao_primeira_carta)
        : printf("%s vence com a população de: %lu.\n", cidade_segunda_carta, populacao_segunda_carta);
    break;

      case 2:
        printf("Atributo de comparação: Area! O MAIOR VENCE!\n");
        printf("%s  x %s\n", cidade_primeira_carta, cidade_segunda_carta);

        // Checa empate, e se for empate pula a parte de comparação maior/menor
        if(area_primeira_carta == area_segunda_carta)
        {
          printf("%s e %s empataram em AREA!\n", cidade_primeira_carta, cidade_segunda_carta);
          break;
        }
        
        // soma atributo selecionado das cartas para soma total que vai definir o vencedor definitivo. 
        soma_atributos_primeira_carta += area_primeira_carta; 
        soma_atributos_segunda_carta += area_segunda_carta;

        // compara atributos e imprime o vencedor do atributo especifico.
        area_primeira_carta > area_segunda_carta
        ? printf("%s vence com a de Area de: %lf Km ^ 2! ", cidade_primeira_carta, area_primeira_carta)
        : printf("%s vence com a de Area de: %lf Km ^ 2! ", cidade_segunda_carta, area_segunda_carta);
         
      case 3:
        printf("Atributo de comparação: PiB! O MAIOR VENCE!\n");
        printf("%s  x %s\n", cidade_primeira_carta, cidade_segunda_carta);

        // Checa empate, e se for empate pula a parte de comparação maior/menor
        if( pib_primeira_carta == pib_segunda_carta)
        {
          printf("%s e %s empataram em PiB!\n", cidade_primeira_carta, cidade_segunda_carta);
          break;
        }

        // soma atributo selecionado das cartas para soma total que vai definir o vencedor definitivo. 
        soma_atributos_primeira_carta += pib_primeira_carta;
        soma_atributos_segunda_carta += pib_per_capita_segunda_carta;

        // compara atributos e imprime o vencedor do atributo especifico.
        pib_primeira_carta > pib_segunda_carta 
        ? printf("%s vence com o PiB de: %lf \n", cidade_primeira_carta, pib_primeira_carta)
        : printf("%s vence com o PiB de: %lf \n", cidade_segunda_carta, pib_segunda_carta);

      break;
      case 4: 
        printf("Atributo de comparação: Pontos turisticos! O MAIOR VENCE!\n");
        printf("%s  x %s\n", cidade_primeira_carta, cidade_segunda_carta);

        // Checa empate, e se for empate pula a parte de comparação maior/menor
        if(pontos_turisticos_primeira_carta == pontos_turisticos_segunda_carta)
        {
          printf("%s e %s empataram em PONTOS TURISTICOS!\n", cidade_primeira_carta, cidade_segunda_carta);
        }

        // soma atributo selecionado das cartas para soma total que vai definir o vencedor definitivo. 
        soma_atributos_primeira_carta += pontos_turisticos_primeira_carta;
        soma_atributos_segunda_carta += pontos_turisticos_segunda_carta;

        // compara atributos e imprime o vencedor do atributo especifico.
        pontos_turisticos_primeira_carta > pontos_turisticos_segunda_carta 
        ? printf("%s vence com %i pontos turisticos!\n", cidade_primeira_carta, pontos_turisticos_primeira_carta) 
        : printf("%s vence com %i pontos turisticos!\n", cidade_segunda_carta, pontos_turisticos_segunda_carta);

      break;
      case 5: 
        printf("Atributo de comparação: Densidade demografica!\n");
        printf("%s  x %s\n", cidade_primeira_carta, cidade_segunda_carta);

        // Checa empate, e se for empate pula a parte de comparação maior/menor
        if(densidade_pop_primeira_carta == densidade_pop_segunda_carta)
        {
          printf("%s e %s empataram em DENSIDADE DEMOGRAFICA!\n", cidade_primeira_carta, cidade_segunda_carta);
        }

        // soma atributo selecionado das cartas para soma total que vai definir o vencedor definitivo. 
        soma_atributos_primeira_carta -= densidade_pop_primeira_carta;
        soma_atributos_segunda_carta -= densidade_pop_segunda_carta; 

        // compara atributos e imprime o vencedor do atributo especifico.
        densidade_pop_primeira_carta < densidade_pop_segunda_carta
        ? printf("%s vence com a densidade demográfica de: %.2f\n", cidade_primeira_carta, densidade_pop_primeira_carta)
        : printf("%s vence com a densidade demográfica de: %.2f\n", cidade_segunda_carta, densidade_pop_segunda_carta);
      break;

      default:
        ("Atributo não encontrado!\n");
      break;
    }
    
    indice_atributo++;
  }

  // Define o vencedor Definitivo
  if(soma_atributos_primeira_carta > soma_atributos_segunda_carta)
  {
    printf("PRIMEIRA CARTA VENCE A RODADA!\n");
  }
  else 
  {
    printf("SEGUNDA CARTA VENCE A RODADA!\n");
  }
    
  return 0;
}

