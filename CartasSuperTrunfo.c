#include <stdio.h>

// Cartas Super Trunfo - Estados do Brasil

int main()
{
    printf("Desafio: Cartas Super Trunfo - Estados do Brasil\n");

    // --- Carta 1 ---
    printf("\nCarta n°1\n");

    char estado1[] = "São Paulo";
    char codigo1[5] = "SP01";
    char nome1[] = "Ribeirão Preto";
    int populacao1 = 720116;     // número inteiro
    double area_km2_1 = 650.916; // número decimal
    double pib_bilhoes1 = 39.9;  // número decimal
    char pontos_turisticos1[50] = "Pedro II, Parque Curupira";

    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área (km2): %.3f\n", area_km2_1);
    printf("PIB (bilhoes): %.1f\n", pib_bilhoes1);
    printf("Pontos Turísticos: %s\n", pontos_turisticos1);

    // --- Carta 2 ---
    printf("\nCarta n°2\n");

    char estado2[] = "Rio de Janeiro";
    char codigo2[5] = "RJ02";
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6730729;     // número inteiro
    double area_km2_2 = 1200.329; // número decimal
    double pib_trilhoes2 = 1.3;   // número decimal
    char pontos_turisticos2[100] = "Cristo Redentor, Pão de Açúcar";

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área (km2): %.3f\n", area_km2_2);
    printf("PIB (trilhoes): %.1f\n", pib_trilhoes2);
    printf("Pontos Turísticos: %s\n", pontos_turisticos2);

    return 0;
}
