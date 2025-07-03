#include <stdio.h>

int main(){
    printf(":::::::::: JOGO SUPER TRUNFO ::::::::::\n");
    printf("   - Sistema de Cadastro de cartas -\n\n");

    char estado1[2], estado2[2];
    char codigo1[3], codigo2[3];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int qtd_pontos_turisticos1, qtd_pontos_turisticos2;

    //cadastro da primeira carta

    printf(":::::::::: Carta 1 ::::::::::\n");
    printf("Digite as informações da carta 1\n\n");

    printf("Digite uma letra de A a H referente ao estado: ");
    scanf("%s", &estado1);

    printf("Digite o código sendo entre 01 e 04: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em Km² (apenas números): ");
    scanf("%f", &area1);

    printf("Digite o PIB (apenas numeros): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos1);

    printf("Carta 1 cadastrada com sucesso!!\n\n");


    //cadastro da segunda carta


     printf(":::::::::: Carta 2 ::::::::::\n");
     printf("Digite as informações da carta 2\n\n");

    printf("Digite uma letra de A a H referente ao estado: ");
    scanf("%s", &estado2);

    printf("Digite o código sendo entre 01 e 04: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em Km² (apenas números): ");
    scanf("%f", &area2);

    printf("Digite o PIB (apenas numeros): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos2);

    printf("Carta 2 cadastrada com sucesso!!\n\n");


    //Exibição do resumo do cadastro


    printf(":::::::::: RESUMO ::::::::::\n\n");

    printf("Carta 1\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1); //chamando as duas varáveis formando o código
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$%.2f reais\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", qtd_pontos_turisticos1);

    printf("Carta 2\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2); //chamando as duas varáveis formando o código
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$%.2f reais\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", qtd_pontos_turisticos2);

    printf(":::::::::: TODAS AS CARTAS FORAM CADASTRADAS COM SUCESSO!!! ::::::::::\n\n");




    return 0;

}
