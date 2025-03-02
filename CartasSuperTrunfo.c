#include <stdio.h>
   int main(){

    char estado[3];  //inicio das variaveis da primeira carta
    char codigo[4];
    char cidade[21];
    unsigned long int população;
    float km²;
    float pib;
    int pt;
    float denpopulacional;
    float pibpercapita;
    float superpoder;

   printf("SUPER TRUNFO\n\n"); //titulo do trabalho

   printf("CARTA 1\n\n"); //primeira carta

   printf("nome da cidade?\n");//nome da cidade 
   scanf("%s",cidade);

   printf("qual é o estado?\n");//estado 
   scanf("%s",&estado);

   printf("qual é o codigo da carta?\n");//codigo da carta
   scanf("%s",&codigo);

   printf("qual é o tamanho da população?\n");//tamanho da população
   scanf("%u",&população);

   printf("qual é o tamanho da cidade em m²?\n");//tamanho da cidade em metros quadrados
   scanf("%f",&km²);

   printf("qual é o pib?\n");//pib da cidade
   scanf("%f",&pib);

   printf("quantos pontos turisticos essa cidade possuí?\n");//quantidade de pontos turisticos
   scanf("%d",&pt);
   
   
   denpopulacional = população / km²; //calculo do pib per capita/dencidade populacional/super poder
   pibpercapita = pib / população;
   pib = pib / 1000000000;
   superpoder = (float)(população + km² + pib + pt + denpopulacional + pibpercapita);


   //primeira carta concluida
   
   char estado2[3];      //variaveis da segunda carta
   char codigo2[4];
   char cidade2[30];
   unsigned long int população2;  
   float km²2;
   float pib2;
   int pt2;
   float denpopulacional2;
   double pibpercapita2;
   float superpoder2;

   printf("\nCARTA 2\n\n");
   
   printf("nome da cidade?\n"); //segundo nome da cidade 
   scanf("%s",cidade2);
   

   printf("qual é o estado?\n"); //segundo estado 
   scanf("%s",&estado2);
   

   printf("qual é o codigo da carta?\n"); //codigo da segunda carta
   scanf("%s",&codigo2);
  

   printf("qual é o tamanho da população?\n"); //tamanho da populacao segunda carta
   scanf("%u",&população2);

   printf("qual o tamanho da cidade em m²?\n"); //tamanho da cidade em m² segunda carta
   scanf("%f",&km²2);

   printf("qual é o pib?\n"); //pib da cidade segunda carta
   scanf("%f",&pib2);

   printf("quantos pontos turisticos essa cidade possui?\n"); //quantidade de pontos turisticos segunda carta
   scanf("%d",&pt2);


   denpopulacional2 =  população2 / km²2;  //calculo do pib per capita/dencidade populacional/super poder/ segunda carta
   pibpercapita2 =  pib2 / população2;
   pib2 = pib2 / 1000000000;
   superpoder2 = (float)(população2 + km²2 + pib2 + pt2 + denpopulacional2 + pibpercapita2);


   //segunda carta concluida

   printf("\n\nCARTA 1\n\n");   //envio de informações da primeira carta
   printf("cidade: %s\n",cidade);
   printf("estado: %s\n",estado);
   printf("codigo da carta: %s\n",codigo);
   printf("população: %d pessoas\n",população);
   printf("tamanho da cidade: %.3f m²\n",km²);
   printf("pib da cidade: r$ %.2f bilhões de reais\n",pib);
   printf("número de pontos turisticos: %d\n",pt);
   printf("a densidade populacional: %.2f hab/km²\n",denpopulacional);
   printf("pib per capita : %.2f reais\n",pibpercapita);
   printf("super poder: %.0f de força\n",superpoder);

   printf("\nCARTA 2\n\n");   //envio de informações da segunda carta
   printf("cidade: %s\n",cidade2);
   printf("estado: %s\n",estado2);
   printf("codigo da carta: %s\n",codigo2);
   printf("população: %d pessoas\n",população2);
   printf("tamanho da cidade: %.3f km²\n",km²2);
   printf("pib da cidade: r$ %.2f bilhões de reais\n",pib2);
   printf("número de pontos turisticos: %d\n",pt2);
   printf("a densidade populacional: %.2f hab/km²\n",denpopulacional2);
   printf("pib per capita: %.2f reais\n",pibpercapita2);
   printf("super poder: %.0f de força\n\n",superpoder2);
   
   //resultado do duelo 

   printf("***numero(1)=carta 1 vencedora,numero(0)=carta 2 vencedora***\n\n");

   printf("***resultado do duelo***\n\n");

   printf("comparação das cartas:\n\n");      // exibição do resultado do duelo
   printf("população: %d\n",(população > população2));
   printf("área: %d\n",(km² > km²2));
   printf("pib: %d\n",(pib > pib2));
   printf("pontos turisticos: %d\n",(pt > pt2));
   printf("densidade populacional: %d\n",(denpopulacional < denpopulacional2));
   printf("pib per capita: %d\n",(pibpercapita > pibpercapita2));
   printf("super poder: %d\n\n",(superpoder > superpoder2));
   
   printf("carta 1: %s- %.2f km²\n",cidade,km²);   //comparação de um atributo unico 
   printf("carta 2: %s- %.2f km²\n",cidade2,km²2);
    if (km² > km²2){
       printf("\n***carta 1- %s venceu***\n",cidade);
    }
    else{
      printf("\n***carta 2-%s venceu***\n",cidade2);
    }

    //fim do codigo
   
   return 0;








}  
