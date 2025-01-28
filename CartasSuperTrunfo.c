#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    char cod_cidade[4];
    char nome_cidade[57]; // considerado maior nome de cidade do mundo com 58 letras para determinar tamanho do char
    
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    
    printf("Cadastro de Cartas\n");
    printf("__________________\n\n");

    printf("Digite o código da Cidade:\n");
    scanf(" %s", cod_cidade);
    
    printf("Digite o nome da Cidade:\n");
    scanf(" %s", nome_cidade);

    printf("Digite a população da Cidade:\n");
    scanf(" %d", &populacao);

    while (getchar() != '\n');

    printf("Digite a área da Cidade:\n");
    scanf(" %f", &area);

    while (getchar() != '\n');

    printf("Digite o PIB da Cidade:\n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos da Cidade:\n");
    scanf(" %d", &pontos_turisticos);
    

    printf("\n------------------------------------\n");
    printf("Código da carta: %s;\n", cod_cidade);
    printf("Cidade: %s;\n", nome_cidade);
    printf("População: %d;\n", populacao);
    printf("Cidade: %f;\n", area);
    printf("PIB: %f;\n", pib);
    printf("Número de pontos turísticos: %d;\n", pontos_turisticos);
    printf("------------------------------------\n");


    return 0;
}

