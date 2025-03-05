#include <stdio.h>

int main() {
    // Declaração da primeira carta
    char estado[3];
    char codigo[4];
    char país[21];
    char cidade[21];
    unsigned long int população;
    float km²;
    float pib;
    int pt;
    float denpopulacional;
    float pibpercapita;
    float superpoder;
    int decisão;
    
    printf("SUPER TRUNFO\n\n"); // título do trabalho
    printf("novo commit\n");

    printf("CARTA 1\n\n"); // primeira carta

    printf("qual é o país?\n");
    scanf("%s", país);

    printf("nome da cidade?\n"); // nome da cidade 
    scanf("%s", cidade);

    printf("qual é o estado?\n"); // estado 
    scanf("%s", estado);

    printf("qual é o código da carta?\n"); // código da carta
    scanf("%s", codigo);

    printf("qual é o tamanho da população?\n"); // tamanho da população
    scanf("%lu", &população);  // Corrigido para %lu (para unsigned long int)

    printf("qual é o tamanho da cidade em m²?\n"); // tamanho da cidade em metros quadrados
    scanf("%f", &km²);

    printf("qual é o pib?\n"); // pib da cidade
    scanf("%f", &pib);

    printf("quantos pontos turísticos essa cidade possui?\n"); // quantidade de pontos turísticos
    scanf("%d", &pt);
   
    denpopulacional = população / km²; // cálculo do pib per capita/densidade populacional/superpoder
    pibpercapita = pib / população;
    pib = pib / 1000000000;
    superpoder = (float)(população + km² + pib + pt + denpopulacional + pibpercapita);

    // Declaração da segunda carta
    char estado2[3];      // variáveis da segunda carta
    char codigo2[4];
    char país2[21];
    char cidade2[30];
    unsigned long int população2;
    float km²2;
    float pib2;
    int pt2;
    float denpopulacional2;
    double pibpercapita2;
    float superpoder2;

    printf("\nCARTA 2\n\n");
   
    printf("qual é o país?\n");
    scanf("%s", país2);

    printf("nome da cidade?\n"); // segundo nome da cidade 
    scanf("%s", cidade2);

    printf("qual é o estado?\n"); // segundo estado 
    scanf("%s", estado2);

    printf("qual é o código da carta?\n"); // código da segunda carta
    scanf("%s", codigo2);

    printf("qual é o tamanho da população?\n"); // tamanho da população segunda carta
    scanf("%lu", &população2);  // Corrigido para %lu (para unsigned long int)

    printf("qual o tamanho da cidade em m²?\n"); // tamanho da cidade em m² segunda carta
    scanf("%f", &km²2);

    printf("qual é o pib?\n"); // pib da cidade segunda carta
    scanf("%f", &pib2);

    printf("quantos pontos turísticos essa cidade possui?\n"); // quantidade de pontos turísticos segunda carta
    scanf("%d", &pt2);

    denpopulacional2 = população2 / km²2;  // cálculo do pib per capita/densidade populacional/superpoder/ segunda carta
    pibpercapita2 = pib2 / população2;
    pib2 = pib2 / 1000000000;
    superpoder2 = (float)(população2 + km²2 + pib2 + pt2 + denpopulacional2 + pibpercapita2);

    // Comparação de populações
    printf("\n***duelo entre atributos***\n");
   
    printf("escolha o atributo a ser comparado:\n\n");
    printf("1. população\n");
    printf("2. área em km²\n");
    printf("3. pib\n");
    printf("4. pontos turísticos\n");
    printf("5. densidade populacional\n");
    printf("6. pib per capita\n");
    printf("7. super poder\n\n");
    scanf("%d", &decisão);

    // Comparação de acordo com a escolha do usuário
    if (decisão == 1) {
        printf("você escolheu população\n");
        if (população > população2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: população = carta 1: %lu -- carta 2: %lu\n", população, população2);
            printf("\n***carta 1 ganhou***\n");
        } else if (população < população2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: população = carta 1: %lu -- carta 2: %lu\n", população, população2);
            printf("***carta 2 ganhou***\n");
        } else {
            printf("empate!\n");
        }
    } else if (decisão == 2) {
        printf("você escolheu área em km²\n");
        if (km² > km²2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: área em km² = carta 1: %.3f -- carta 2: %.3f\n", km², km²2);
            printf("***carta 1 ganhou***\n");
        } else if (km² < km²2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: área em km² = carta 1: %.3f -- carta 2: %.3f\n", km², km²2);
            printf("***carta 2 ganhou***\n");
        } else {
            printf("empate!\n");
        }
    } else if (decisão == 3) {
        printf("você escolheu pib\n");
        if (pib > pib2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: pib = carta 1: %.2f -- carta 2: %.2f\n", pib, pib2);
            printf("***carta 1 ganhou***\n");
        } else if (pib < pib2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: pib = carta 1: %.2f -- carta 2: %.2f\n", pib, pib2);
            printf("***carta 2 ganhou***\n");
        } else {
            printf("empate!\n");
        }
    } else if (decisão == 4) {
        printf("você escolheu pontos turísticos\n");
        if (pt > pt2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: pontos turísticos = carta 1: %d -- carta 2: %d\n", pt, pt2);
            printf("***carta 1 ganhou***\n");
        } else if (pt < pt2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: pontos turísticos = carta 1: %d -- carta 2: %d\n", pt, pt2);
            printf("***carta 2 ganhou***\n");
        } else {
            printf("empate!\n");
        }
    } else if (decisão == 5) {
        printf("você escolheu densidade populacional\n");
        if (denpopulacional > denpopulacional2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: densidade populacional = carta 1: %.2f -- carta 2: %.2f\n", denpopulacional, denpopulacional2);
            printf("***carta 1 ganhou***\n");
        } else if (denpopulacional < denpopulacional2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: densidade populacional = carta 1: %.2f -- carta 2: %.2f\n", denpopulacional, denpopulacional2);
            printf("***carta 2 ganhou***\n");
        } else {
            printf("empate!\n");
        }
    } else if (decisão == 6) {
        printf("você escolheu pib per capita\n");
        if (pibpercapita > pibpercapita2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: pib per capita = carta 1: %.2f -- carta 2: %.2f\n", pibpercapita, pibpercapita2);
            printf("***carta 1 ganhou***\n");
        } else if (pibpercapita < pibpercapita2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: pib per capita = carta 1: %.2f -- carta 2: %.2f\n", pibpercapita, pibpercapita2);
            printf("***carta 2 ganhou***\n");
        } else {
            printf("empate!\n");
        }
    } else if (decisão == 7) {
        printf("você escolheu super poder\n");
        if (superpoder > superpoder2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: super poder = carta 1: %.2f -- carta 2: %.2f\n", superpoder, superpoder2);
            printf("***carta 1 ganhou***\n");
        } else if (superpoder < superpoder2) {
            printf("país 1: %s -- país 2: %s\n", país, país2);
            printf("cidade 1: %s -- cidade 2: %s\n", cidade, cidade2);
            printf("o atributo é: super poder = carta 1: %.2f -- carta 2: %.2f\n", superpoder, superpoder2);
            printf("***carta 2 ganhou***\n");
        } else {
            printf("empate!\n");
        }
    }

    return 0;
}
