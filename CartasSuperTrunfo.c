// Desafio Super Trunfo (Novato)
#include <stdio.h>

// Informações carta 1

int main(){
    char Estado1;   //%c
    char CodigoDaCarta1[4];   //%s
    char NomeDaCidade1[50];   //%s
    int Populacao1;   //%d
    float Areaemkm1;   //%f
    float PIB1;   //%f
    int NumeroDePontosTuristicos1;   //%d

    // Entrada de dados (Carta 1)

    printf("\nDigite os dados da carta 1 (cadastro)\n");

    printf("Digite a letra de (A-H) para o estado da carta: ");
    scanf(" %c", &Estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf(" %s", &CodigoDaCarta1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &NomeDaCidade1);
    printf("Digite o número de habitantes da cidade (populacao): ");
    scanf(" %d", &Populacao1);
    printf("Digite a área da cidade em quilometros quadrados (km²): ");
    scanf(" %f", &Areaemkm1);
    printf("Digite o Produto Interno Bruto da cidade (PIB): ");
    scanf(" %f", &PIB1);
    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf(" %d", &NumeroDePontosTuristicos1);

    // Saída de dados (Carta 1)

    printf("\nCarta Super trunfo 1\n");

    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Areaemkm1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", NumeroDePontosTuristicos1);

    // Informações carta 2

    char Estado2;   //%c
    char CodigoDaCarta2[4];   //%s
    char NomeDaCidade2[50];   //%s
    int Populacao2;   //%d
    float Areaemkm2;   //%f
    float PIB2;   //%f
    int NumeroDePontosTuristicos2;   //%d

    // Entrada de dados (Carta 2)

    printf("\nDigite os dados da carta 2 (cadastro)\n");

    printf("Digite a letra de (A-H) para o estado da carta: ");
    scanf(" %c", &Estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf(" %s", &CodigoDaCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &NomeDaCidade2);
    printf("Digite o número de habitantes da cidade (populacao): ");
    scanf(" %d", &Populacao2);
    printf("Digite a área da cidade em quilometros quadrados (km²): ");
    scanf(" %f", &Areaemkm2);
    printf("Digite o Produto Interno Bruto da cidade (PIB): ");
    scanf(" %f", &PIB2);
    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf(" %d", &NumeroDePontosTuristicos2);

    // Saída de dados (Carta 2)

    printf("\nCarta Super trunfo 2\n");

    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Areaemkm2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", NumeroDePontosTuristicos2);

    return 0;
}