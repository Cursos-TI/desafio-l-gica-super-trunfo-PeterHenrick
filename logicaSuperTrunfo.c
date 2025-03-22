#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main(){ //nesta linha, cada função é declarada com um tipo de retorno, que é o tipo de dado que a função retorna. No caso, a função main retorna um inteiro.
    printf("\n ***Super Trunfo*** \n\n");

    char estado1[100], estado2[100], nomedacidade1[100], nomedacidade2[100], codigo1[100], codigo2[100]; 
    unsigned int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadedepopulacao1, densidadedepopulacao2, pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;
    int comparacao;

   //entrada de dados da carta 1
   //aqui se usa o printf para imprimir uma mensagem na tela e o scanf para receber um valor digitado pelo usuário, o mesmo vale para as demais entradas de dados
    printf("Carta 1\n");
    printf("Digite o nome do estado:\n");
    scanf("%s", estado1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade1);
    printf("Digite o código da cidade:\n");
    scanf("%s", codigo1);
    printf("Digite a população:\n");
    scanf("%u", &populacao1);
    printf("Digite a área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    //entrada de dados da carta 2
    printf("\n Carta 2 \n");
    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade2);
    printf("Digite o código da cidade:\n");
    scanf("%s", codigo2);
    printf("Digite a população:\n");
    scanf("%u", &populacao2);
    printf("Digite a área:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    //cálculo da densidade de população
    //aqui se faz o cálculo da densidade de população, que é a divisão da população pela área
    densidadedepopulacao1 = (float) populacao1 / area1;
    densidadedepopulacao2 = (float) populacao2 / area2;

    //cálculo do PIB per capita
    //aqui se faz o cálculo do PIB per capita, que é a divisão do PIB pela população
    pibpercapita1 = pib1 / (float) populacao1;
    pibpercapita2 = pib2 / (float) populacao2;

    //cálculo do superpoder
    //aqui se faz o cálculo do superpoder, que é a multiplicação da população, área, pib, pontos turísticos, densidade de população e pib per capita
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + densidadedepopulacao1 + pibpercapita1;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + densidadedepopulacao2 + pibpercapita2;

    //impressão dos superpoderes
    //aqui se usa o printf para imprimir os superpoderes que foram calculados anteriormente e retorná-los na tela
    printf("\n Superpoderes\n");
    printf("Carta 1: %.2f\n", superpoder1);
    printf("Carta 2: %.2f\n", superpoder2);

    
    //impressão dos dados
    //aqui se usa o printf para imprimir os dados que foram digitados pelo usuário anteriormente e retorná-los na tela com a mensagem que foi escrita
    printf("\n  Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("Código da cidade: %s\n", codigo1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2fmilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade de população: %.2fkm²\n", densidadedepopulacao1);
    printf("PIB per capita: %.2fmil\n", pibpercapita1);

    printf("\n Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Código da cidade: %s\n", codigo2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade de população: %.2fkm²\n", densidadedepopulacao2);
    printf("PIB per capita: %.2fmil\n", pibpercapita2);


//Esta parte do código pega uma das variáveis do código, e compara com a outra, se a primeira for maior, a variável comparacao recebe 1, se a segunda for maior, a variável comparacao recebe 2, se forem iguais, a variável comparacao recebe 0
//Então o vencedor é decidido com base no valor da varável de população
    if (populacao1 > populacao2){
        comparacao = 1;
    }else if (populacao1 < populacao2){
        comparacao = 2;
    }else{
        comparacao = 0;
    }

    printf("\n Resultado da partida\n");
   printf("Carta 1 - %s = %d\n", nomedacidade1, populacao1);
    printf("Carta 2 - %s = %d\n", nomedacidade2, populacao2);
    if (comparacao == 1){
        printf("\n Carta 1 (%s) venceu \n", nomedacidade1);
    }else if (comparacao == 2){
        printf("\n Carta 2 (%s) venceu \n", nomedacidade2);
    }else{
        printf("\n Empate\n");
    }
    



return 0;
}

