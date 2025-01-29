#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#define ESTADOS 8
#define CIDADES 4

typedef struct {
    char cod_cidade[4];
    char nome_cidade[57];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

const char ESTADOS_LETRAS[ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    Cidade matriz[ESTADOS][CIDADES];
    float densidadePopulacional;
    float pibPerCapita;

    printf("Digite os dados das cidades:\n");
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 0; j < CIDADES; j++) {
            snprintf(matriz[i][j].cod_cidade, sizeof(matriz[i][j].cod_cidade), "%c%02d", ESTADOS_LETRAS[i], j + 1);
            
            printf("\nCidade [%s]:\n", matriz[i][j].cod_cidade);
            printf("Nome da cidade: ");
            getchar(); // Limpa buffer para fgets
            fgets(matriz[i][j].nome_cidade, sizeof(matriz[i][j].nome_cidade), stdin);
            printf("População: ");
            scanf("%d", &matriz[i][j].populacao);
            printf("Área (km²): ");
            scanf("%f", &matriz[i][j].area);
            printf("PIB (em bilhões): ");
            scanf("%f", &matriz[i][j].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &matriz[i][j].pontos_turisticos);
        }
    }

    printf("\nDados das cidades:\n");
    for (int i = 0; i < ESTADOS; i++) {
        printf("\n=== Estado %c ===\n", ESTADOS_LETRAS[i]);
        for (int j = 0; j < CIDADES; j++) {
            printf("\nCidade [%s]:\n", matriz[i][j].cod_cidade);
            printf("Nome: %s", matriz[i][j].nome_cidade);
            printf("População: %d\n", matriz[i][j].populacao);
            printf("Área: %.2f km²\n", matriz[i][j].area);
            printf("PIB: %.2f bilhões\n", matriz[i][j].pib);
            printf("Pontos turísticos: %d\n", matriz[i][j].pontos_turisticos);
            
            densidadePopulacional = (float)matriz[i][j].populacao /  matriz[i][j].area;
            pibPerCapita = matriz[i][j].pib / (float)matriz[i][j].populacao;

            printf("Densidade Populacional: %.2f pessoas por km²\n", densidadePopulacional);
            printf("PIB per Capita: %.2f bilhão por pessoa\n", pibPerCapita);
            printf("------------------------------\n");
        }
    }

    return 0;
}

