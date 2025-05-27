#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
    char estado [50];
    char codigo [10];
    char cidade [50];
    int populacao;
    float area;
    float PIB;
    int npt;

    char estado2 [50];
    char codigo2 [10];
    char cidade2 [50];
    int populacao2;
    float area2;
    float PIB2;
    int npt2;

    printf ("Bem vindo! Para criar sua carta, insira as informações.\n");

    printf ("Carta 1\nInsira o Estado: ");
    fgets (estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf ("Insira o código: (Coloque a primeira letra do estado e um número correspondente á sequência, de 01 á 04)");
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = '\0';

    printf ("Insira o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf ("Insira o número da população: ");
    scanf ("%d",&populacao);

    printf ("Insira a área total: ");
    scanf ("%f",&area);

    printf ("Insira o PIB: ");
    scanf ("%f",&PIB);

    printf ("Insira o número de pontos turísticos: ");
    scanf ("%d",&npt);

    printf ("Ótimo! Suas informações foram armazenadas!\n");

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", npt);

    printf ("Agora Insira as informações da Carta 2\n");

    printf ("Carta 2\n");

    printf ("Insira o Estado:");
    fgets (estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf ("Insira o código: (Coloque a primeira letra do estado e um número correspondente á sequência, de 01 á 04)");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf ("Insira o nome da cidade:");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf ("Insira o número da população:");
    scanf ("%d",&populacao2);

    printf ("Insira a área total:");
    scanf ("%f",&area2);

    printf ("Insira o PIB:");
    scanf ("%f",&PIB2);

    printf ("Insira o número de pontos turísticos:");
    scanf ("%d",&npt2);

    printf ("Ótimo! Suas informações foram armazenadas!\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", npt);

}