#include <stdio.h>

int main(){
    char estado[20];
    char estado2[20];
    char cidade[20];
    char cidade2[20];
    char codigo[4];
    char codigo2[4];
    int populacao;
    int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;

    printf("Digite o estado\n");
    scanf("%s", estado);

    printf("Digite a cidade\n");
    scanf("%s", cidade);

    printf("Digite o codigo ex: B01\n");
    scanf("%s", codigo);

    printf("Digite a populacao\n");
    scanf("%d", &populacao);

    printf("Digite a area ex: 120.000\n");
    scanf("%f", &area);

    printf("digite o pib ex: 12.345\n");
    scanf("%f", &pib);

    printf("Dados carta 1\n");
    printf("O estado : %s\n", estado);
    printf("A cidade : %s\n", cidade);
    printf("O codigo : %s\n", codigo);
    printf("A populacao: %d\n", populacao);
    printf("A area: %.3f mil km\n", area);
    printf("O pib: %.3f mi\n", pib);

    printf("Insira dados carta 2\n");

    printf("Digite o estado\n");
    scanf("%s", estado2);

    printf("Digite a cidade\n");
    scanf("%s", cidade2);

    printf("Digite o codigo ex: B01\n");
    scanf("%s", codigo2);

    printf("Digite a populacao\n");
    scanf("%d", &populacao2);

    printf("Digite a area ex: 120.000\n");
    scanf("%f", &area2);

    printf("digite o pib ex: 12.345\n");
    scanf("%f", &pib2);

    printf("Dados carta 2\n");
    printf("O estado : %s\n", estado2);
    printf("A cidade : %s\n", cidade2);
    printf("O codigo : %s\n", codigo2);
    printf("A populacao: %d\n", populacao2);
    printf("A area: %.3f mil km\n", area2);
    printf("O pib: %.3f mi\n", pib2);

    return 0;
}
