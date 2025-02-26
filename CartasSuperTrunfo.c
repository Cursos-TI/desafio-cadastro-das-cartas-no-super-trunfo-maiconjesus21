#include <stdio.h>
   int main(){

    char estado[3];  //inicio das variaveis da primeira carta
    char codigo[20];
    char cidade[20];
    int população;
    float km²;
    float pib;
    int pt;
    float denpopulacional;
    float pibpercapita;


   printf("SUPER TRUNFO\n\n"); //titulo do trabalho
   printf("novo commit\n");

   printf("CARTA 1\n\n"); //primeira carta

   printf("nome da cidade?\n");//nome da cidade 
   scanf("%s",cidade);

   printf("qual é o estado?\n");//estado 
   scanf("%s",&estado);

   printf("qual é o codigo da carta?\n");//codigo da carta
   scanf("%s",&codigo);

   printf("qual é o tamanho da população?\n");//tamanho da população
   scanf("%d",&população);

   printf("qual é o tamanho da cidade em m²?\n");//tamanho da cidade em metros quadrados
   scanf("%f",&km²);

   printf("qual é o pib?\n");//pib da cidade
   scanf("%f",&pib);

   printf("quantos pontos turisticos essa cidade possuí?\n");//quantidade de pontos turisticos
   scanf("%d",&pt);
    
   denpopulacional =  população / km²; //calculo do pib per capita e dencidade populacional
   pibpercapita =  pib / população;
   
   //primeira carta concluida
   
   char estado2[4];      //variaveis da segunda carta
   char codigo2[21];
   char cidade2[21];
   int população2;  
   float km²2;
   float pib2;
   int pt2;
   float denpopulacional2;
   double pibpercapita2;

   printf("CARTA 2\n\n");
   
   printf("nome da cidade?\n"); //segundo nome da cidade 
   scanf("%s",cidade2);
   

   printf("qual é o estado?\n"); //segundo estado 
   scanf("%s",estado2);
   

   printf("qual é o codigo da carta?\n"); //codigo da segunda carta
   scanf("%s",&codigo2);
  

   printf("qual é o tamanho da população?\n"); //tamanho da populacao segunda carta
   scanf("%d",&população2);

   printf("qual o tamanho da cidade em m²?\n"); //tamanho da cidade em m² segunda carta
   scanf("%f",&km²2);

   printf("qual é o pib?\n"); //pib da cidade segunda carta
   scanf("%f",&pib2);

   printf("quantos pontos turisticos essa cidade possui?\n"); //quantidade de pontos turisticos segunda carta
   scanf("%d",&pt2);
   
   denpopulacional2 =  população2 / km²2;  //calculo do pib per capita e dencidade populacional segunda carta
   pibpercapita2 =  pib2 / população2;


   printf("\n\nCARTA 1\n\n");   //envio de informações da primeira carta
   printf("cidade: %s\n",cidade);
   printf("estado: %s\n",estado);
   printf("codigo da carta: %s\n",codigo);
   printf("população: %d\n",população);
   printf("tamanho da cidade: %.2f m²\n",km²);
   printf("pib da cidade: r$ %.2f bilhões de reais\n",pib);
   printf("número de pontos turisticos: %d\n",pt);
   printf("a densidade populacional: %.2f\n",denpopulacional);
   printf("pib per capita : %.2f\n",pibpercapita);


   printf("\nCARTA 2\n\n");   //envio de informações da segunda carta
   printf("cidade: %s\n",cidade2);
   printf("estado: %s\n",estado2);
   printf("codigo da carta: %s\n",codigo2);
   printf("população: %d\n",população2);
   printf("tamanho da cidade: %.2f km²\n",km²2);
   printf("pib da cidade: r$ %.2f bilhões de reais\n",pib2);
   printf("número de pontos turisticos: %d\n",pt2);
   printf("a densidade populacional: %.2f\n",denpopulacional2);
   printf("pib per capita: %.2f\n",pibpercapita2);

   
   return 0;








}  
