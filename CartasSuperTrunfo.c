#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
    //Dados carta 1
    char estado [50];
    char codigo [10];
    char cidade [50];
    unsigned long int populacao;
    float area;
    float PIB;
    int npt;
    float dp;
    float PpC;
    float sp;

    //Dados carta 2
    char estado2 [50];
    char codigo2 [10];
    char cidade2 [50];    
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int npt2;
    float dp2;
    float PpC2;
    float sp2;

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

    //para limpar o buffer
    getchar();

    dp = populacao / area;
    PpC = PIB / populacao;

    printf ("Ótimo! Suas informações foram armazenadas!\n");

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", dp);
    printf("PIB per Capita: %.2f\n", PpC);

    sp = populacao + area + PIB + PpC + dp;

    //calculo do super poder e depois a amostra
    printf("O Super Poder é: %.2f\n", sp);

    printf ("Agora Insira as informações da Carta 2\n");

    printf("Insira o Estado:");
    fgets(estado2, sizeof(estado2),stdin);
    estado2[strcspn(estado2,"\n")] = '\0';

    printf ("Insira o código: (Coloque a primeira letra do estado e um número correspondente á sequência, de 01 á 04)");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf ("Insira o nome da cidade: ");
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

    dp2 = populacao2 / area2;
    PpC2 = PIB2 / populacao2;

    printf ("Ótimo! Suas informações foram armazenadas!\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", dp2);
    printf("PIB per Capita: %.2f\n", PpC2);

     sp2 = populacao2 + area2 + PIB2 + PpC2 + dp2;
     //calculo do super poder e depois a amostra
    printf("O Super Poder é: %.2f\n", sp2);

    printf("Agora será a batalha final!\n");
    
    //resultado das comparações
    printf("População: %s\n", 
    (populacao > populacao2) ? "Carta 1 venceu a rodada!" :
    (populacao < populacao2) ? "Carta 2 venceu a rodada!" :
     "Empate!");

     printf("Área: %s\n", 
    (area > area2) ? "Carta 1 venceu a rodada!" :
    (area < area2) ? "Carta 2 venceu a rodada!" :
     "Empate!");

     printf("PIB: %s\n", 
    (PIB > PIB2) ? "Carta 1 venceu a rodada!" :
    (PIB < PIB2) ? "Carta 2 venceu a rodada!" :
     "Empate!");

     printf("Número de pontos turísticos: %s\n", 
    (npt > npt2) ? "Carta 1 venceu a rodada!" :
    (npt < npt2) ? "Carta 2 venceu a rodada!" :
     "Empate!");

     printf("Densidade Populacional: %s\n", 
    (PIB < PIB2) ? "Carta 1 venceu a rodada!" :
    (PIB > PIB2) ? "Carta 2 venceu a rodada!" :
     "Empate!");

     printf("PIB per Capita: %s\n", 
    (PpC > PpC2) ? "Carta 1 venceu a rodada!" :
    (PpC < PpC2) ? "Carta 2 venceu a rodada!" :
     "Empate!");

     printf("Super Poder: %s\n", 
    (sp > sp2) ? "Carta 1 venceu a rodada!" :
    (sp < sp2) ? "Carta 2 venceu a rodada!" :
     "Empate!");


    return 0;

}
