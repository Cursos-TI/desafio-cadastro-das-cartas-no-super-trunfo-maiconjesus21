#include <stdio.h>
   int main(){

    char estado[3];  //inicio das variaveis da primeira carta
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
    int decisao2;
    int resultado;
    int resultado2;

   printf("SUPER TRUNFO\n\n"); //titulo do trabalho
   printf("novo commit\n");

   printf("CARTA 1\n\n"); //primeira carta

   printf("qual é o país?\n");
   scanf("%s",país);

   printf("nome da cidade?\n");//nome da cidade 
   scanf("%s",cidade);

   printf("qual é o estado?\n");//estado 
   scanf("%s",estado);

   printf("qual é o codigo da carta?\n");//codigo da carta
   scanf("%s",codigo);

   printf("qual é o tamanho da população?\n");//tamanho da população
   scanf("%lu",&população);

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
   scanf("%s",país2);

   printf("nome da cidade?\n"); //segundo nome da cidade 
   scanf("%s",cidade2);
   

   printf("qual é o estado?\n"); //segundo estado 
   scanf("%s",estado2);
   

   printf("qual é o codigo da carta?\n"); //codigo da segunda carta
   scanf("%s",codigo2);
  

   printf("qual é o tamanho da população?\n"); //tamanho da populacao segunda carta
   scanf("%lu",&população2);

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
   printf("país: %s\n",país);
   printf("cidade: %s\n",cidade);
   printf("estado: %s\n",estado);
   printf("codigo da carta: %s\n",codigo);
   printf("população: %lu pessoas\n",população);
   printf("tamanho da cidade: %.3f m²\n",km²);
   printf("pib da cidade: r$ %.2f bilhões de reais\n",pib);
   printf("número de pontos turisticos: %d\n",pt);
   printf("a densidade populacional: %.2f hab/km²\n",denpopulacional);
   printf("pib per capita : %.2f reais\n",pibpercapita);
   printf("super poder: %.0f de força\n",superpoder);

   printf("\nCARTA 2\n\n");   //envio de informações da segunda carta
   printf("pais: %s\n",país2);
   printf("cidade: %s\n",cidade2);
   printf("estado: %s\n",estado2);
   printf("codigo da carta: %s\n",codigo2);
   printf("população: %lu pessoas\n",população2);
   printf("tamanho da cidade: %.3f km²\n",km²2);
   printf("pib da cidade: r$ %.2f bilhões de reais\n",pib2);
   printf("número de pontos turisticos: %d\n",pt2);
   printf("a densidade populacional: %.2f hab/km²\n",denpopulacional2);
   printf("pib per capita: %.2f reais\n",pibpercapita2);
   printf("super poder: %.0f de força\n\n",superpoder2);
   
   printf("\n***duelo entre atributos***\n");
   
   printf("escolha o primeiro atributo a ser comparado:\n\n");
   printf("1.população\n");
   printf("2.área em km²\n");
   printf("3.pib\n");
   printf("4.pontos turisticos\n");
   printf("5.densidade populacional\n");
   printf("6.pib per capita\n");
   printf("7.super poder\n\n");
   scanf("%d",&decisão);

   
   switch (decisão){
   case 1:
      printf("\n\n***digite o segundo atributo***\n\n");
      printf("2.área em km²\n");   
      printf("3.pib\n");
      printf("4.pontos turisticos\n");
      printf("5.densidade populacional\n");
      printf("6.pib per capita\n");
      printf("7.super poder\n");
      scanf("%d",&decisao2);
      break;
      case 2:
      printf("\n\n***digite o segundo atributo***\n\n");
      printf("1.população\n");      
      printf("3.pib\n");   
      printf("4.pontos turisticos\n");
      printf("5.densidade populacional\n");
      printf("6.pib per capita\n");
      printf("7.super poder\n");
      scanf("%d",&decisao2);   
      break;
      case 3:
      printf("\n\n***digite o segundo atributo***\n\n");
      printf("1.população\n");   
      printf("2.área em km²\n");
      printf("4.pontos turisticos\n");
      printf("5.densidade populacional\n");
      printf("6.pib per capita\n");
      printf("7.super poder\n");
      scanf("%d",&decisao2);
      break;
      case 4:
      printf("\n\n***digite o segundo atributo***\n\n");
      printf("1.população\n");   
      printf("2.área em km²\n");
      printf("3.pib\n");
      printf("5.densidade populacional\n");
      printf("6.pib per capita\n");
      printf("7.super poder\n");
      scanf("%d",&decisao2);
      break;
      case 5:
      printf("\n\n***digite o segundo atributo***\n\n");
      printf("1.população\n");   
      printf("2.área em km²\n");
      printf("3.pib\n");
      printf("4.pontos turisticos\n");
      printf("6.pib per capita\n");
      printf("7.super poder\n");
      scanf("%d",&decisao2);
      break;
      case 6:
      printf("\n\n***digite o segundo atributo***\n\n");
      printf("1.população\n");
      printf("2.área em km²\n");   
      printf("3.pib\n");
      printf("4.pontos turisticos\n");
      printf("5.densidade populacional\n");
      printf("7.super poder\n");
      scanf("%d",&decisao2);
      break;
      case 7:
      printf("\n\n***digite o segundo atributo***\n\n");
      printf("1.população\n");
      printf("2.área em km²\n");   
      printf("3.pib\n");
      printf("4.pontos turisticos\n");
      printf("5.densidade populacional\n");
      printf("6.pib per capita\n");
      scanf("%d",&decisao2);
       break;
      case 9:(decisao2 > 7 && decisao2 < 1);
      printf("***número invalido,tente novamente!***\n");
      break;
}
     if (decisão == 1 && decisao2 == 2 || decisão == 2 && decisao2 == 1)
     {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = população --- atributo 2 = área em km²\n");
            printf("carta 1: população : %lu --- área em km²: %.2f\n",população,km²);
            printf("carta 2: população : %lu --- área em km²: %.2f\n",população2,km²2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(população+km²),(população2+km²2));
            (população+km²) > (população2+km²2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
     } else if (decisão == 1 && decisao2 == 3 || decisão == 3 && decisao2 == 1)
     {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = população --- atributo 2 = pib\n");
            printf("carta 1: população : %lu --- pib: %.2f\n",população,pib);
            printf("carta 2: população : %lu --- pib: %.2f\n",população2,pib2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(população+pib),(população2+pib2));
            (população+pib) > (população2+pib2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
     } else if (decisão == 1 && decisao2 == 4 || decisão == 4 && decisao2 == 1)
     {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = população --- atributo 2 = pontos turisticos\n");
            printf("carta 1: população : %lu --- :pontos turisticos %d\n",população,pt);
            printf("carta 2: população : %lu --- pontos turisticos: %d\n",população2,pt2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(população+pt),(população2+pt2));
            (população+pt) > (população2+pt2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
     } else if (decisão == 1 && decisao2 == 5 || decisão == 5 && decisao2 == 1)
       {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = população --- atributo 2 = densidade populacional\n");
            printf("carta 1: população : %lu --- densidade populacional: %.2f\n",população,denpopulacional);
            printf("carta 2: população : %lu --- densidade populacional: %.2f\n",população2,denpopulacional2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(população+denpopulacional),(população2+denpopulacional2));
            (população+denpopulacional) < (população2+denpopulacional2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
       } else if (decisão == 1 && decisao2 == 6 || decisão == 6 && decisao2 == 1)
         {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = população --- atributo 2 = pib per capita\n");
            printf("carta 1: população : %lu --- pib per capita: %.2f\n",população,pibpercapita);
            printf("carta 2: população : %lu --- pib per capita: %.2f\n",população2,pibpercapita2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(população+pibpercapita),(população2+pibpercapita2));
            (população+pibpercapita) > (população2+pibpercapita2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
         } else if (decisão == 1 && decisao2 == 7 || decisão == 7 && decisao2 == 1)
         {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = população --- atributo 2 = super poder\n");
            printf("carta 1: população : %lu --- super poder: %.2f\n",população,superpoder);
            printf("carta 2: população : %lu --- super poder: %.2f\n",população2,superpoder2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(população+superpoder),(população2+superpoder2));
            (população+superpoder) > (população2+superpoder2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
         } else if (decisão == 2 && decisao2 == 3 || decisão == 3 && decisao2 == 2)
           {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = área em km² --- atributo 2 = pib\n");
            printf("carta 1: área em km² : %.2f --- pib: %.2f\n",km²,pib);
            printf("carta 2: área em km² : %.2f --- pib: %.2f\n",km²2,pib2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(km²+pib),(km²2+pib2));
            (km²+pib) > (km²2+pib2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
           }  else if (decisão == 2 && decisao2 == 4 || decisão == 4 && decisao2 == 2)
           {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = área em km² --- atributo 2 = pontos turisticos\n");
            printf("carta 1: área em km² : %.2f --- pontos turisticos: %d\n",km²,pt);
            printf("carta 2: área em km² : %.2f --- pontos turisticos: %d\n",km²2,pt2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(km²+pt),(km²2+pt2));
            (km²+pt) > (km²2+pt2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
           }  else if (decisão == 2 && decisao2 == 5 || decisão == 5 && decisao2 == 2)
           {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = área em km² --- atributo 2 = densidade populacional\n");
            printf("carta 1: área em km² : %.2f --- densidade populacional: %.2f\n",km²,denpopulacional);
            printf("carta 2: área em km² : %.2f --- densidade populacional: %.2f\n",km²2,denpopulacional2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(km²+denpopulacional),(km²2+denpopulacional2));
            (km²+denpopulacional) < (km²2+denpopulacional2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
           }  else if (decisão == 2 && decisao2 == 6 || decisão == 6 && decisao2 == 2)
           {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = área em km² --- atributo 2 = pib per capita\n");
            printf("carta 1: área em km² : %.2f --- pib per capita: %.2f\n",km²,pibpercapita);
            printf("carta 2: área em km² : %.2f --- pib per capita: %.2f\n",km²2,pibpercapita2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(km²+pibpercapita),(km²2+pibpercapita2));
            (km²+pibpercapita) > (km²2+pibpercapita2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
           }  else if (decisão == 2 && decisao2 == 7 || decisão == 7 && decisao2 == 2)
           {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = área em km² --- atributo 2 = super poder\n");
            printf("carta 1: área em km² : %.2f --- super poder: %.2f\n",km²,superpoder);
            printf("carta 2: área em km² : %.2f --- super poder: %.2f\n",km²2,superpoder2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(km²+superpoder),(km²2+superpoder2));
            (km²+superpoder) > (km²2+superpoder2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
         }  else if (decisão == 3 && decisao2 == 4 || decisão == 4 && decisao2 == 3)
           {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = pib --- atributo 2 = pontos turisticos\n");
            printf("carta 1: pib : %.2f --- pontos turisticos: %.2f\n",pib,pt);
            printf("carta 2: pib : %.2f --- pontos turisticos: %.2f\n",pib2,pt2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(pib+pt),(pib2+pt2));
            (pib+pt) > (pib2+pt2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
           }  else if (decisão == 3 && decisao2 == 5 || decisão == 5 && decisao2 == 3)
           {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = pib --- atributo 2 = densidade populacional\n");
            printf("carta 1: pib : %.2f --- densidade populacional: %.2f\n",pib,denpopulacional);
            printf("carta 2: pib : %.2f --- densidade populacional: %.2f\n",pib2,denpopulacional2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(pib+denpopulacional),(pib2+denpopulacional2));
            (pib+denpopulacional) < (pib2+denpopulacional2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
           }  else if (decisão == 3 && decisao2 == 6 || decisão == 6 && decisao2 == 3)
           {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = pib --- atributo 2 = pib per capita\n");
            printf("carta 1: pib : %.2f --- pib per capita: %.2f\n",pib,pibpercapita);
            printf("carta 2: pib : %.2f --- pib per capita: %.2f\n",pib2,pibpercapita2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(pib+pibpercapita),(pib2+pibpercapita2));
            (pib+pibpercapita) > (pib2+pibpercapita2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
           }  else if (decisão == 3 && decisao2 == 7 || decisão == 7 && decisao2 == 3)
           {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = pib --- atributo 2 = super poder\n");
            printf("carta 1: pib : %.2f --- super poder: %.2f\n",pib,superpoder);
            printf("carta 2: pib : %.2f --- super poder: %.2f\n",pib2,superpoder2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(pib+superpoder),(pib2+superpoder2));
            (pib+superpoder) > (pib2+superpoder2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
           }  else if (decisão == 4 && decisao2 == 5 || decisão == 5 && decisao2 == 4)
            {
            printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
            printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
            printf("atributo 1 = pontos turisticos --- atributo 2 = densidade populacional\n");
            printf("carta 1: pontos turisticos : %d --- densidade populacional: %.2f\n",pt,denpopulacional);
            printf("carta 2: pontos turisticos : %d --- densidade populacional: %.2f\n",pt2,denpopulacional2);
            printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(pt+denpopulacional),(pt2+denpopulacional2));
            (pt+denpopulacional) < (pt2+denpopulacional2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
           }  else if (decisão == 4 && decisao2 == 6 || decisão == 6 && decisao2 == 4)
           {
           printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
           printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
           printf("atributo 1 = pontos turisticos --- atributo 2 = pib per capita\n");
           printf("carta 1: pontos turisticos : %d --- pib per capita: %.2f\n",pt,pibpercapita);
           printf("carta 2: pontos turisticos : %d --- pib per capita: %.2f\n",pt2,pibpercapita2);
           printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(pt+pibpercapita),(pt2+pibpercapita2));
           (pt+pibpercapita) > (pt2+pibpercapita2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
          }  else if (decisão == 4 && decisao2 == 7 || decisão == 7 && decisao2 == 4)
          {
          printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
          printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
          printf("atributo 1 = pontos turisticos --- atributo 2 = super poder\n");
          printf("carta 1: pontos turisticos : %d --- super poder: %.2f\n",pt,superpoder);
          printf("carta 2: pontos turisticos : %d --- super poder: %.2f\n",pt2,superpoder2);
          printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(pt+superpoder),(pt2+superpoder2));
          (pt+superpoder) > (pt2+superpoder2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
         }  else if (decisão == 5 && decisao2 == 6 || decisão == 6 && decisao2 == 5)
         {
         printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
         printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
         printf("atributo 1 = densidade populacional --- atributo 2 = pib per capita\n");
         printf("carta 1: densidade populacional : %.2f --- pib per capita: %.2f\n",denpopulacional,pibpercapita);
         printf("carta 2: densidade populacional : %.2f --- pib per capita: %.2f\n",denpopulacional2,pibpercapita2);
         printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(denpopulacional+pibpercapita),(denpopulacional2+pibpercapita2));
         (denpopulacional+pibpercapita) < (denpopulacional2+pibpercapita2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
        }  else if (decisão == 5 && decisao2 == 7 || decisão == 7 && decisao2 == 5)
        {
        printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
        printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
        printf("atributo 1 = densidade populacional --- atributo 2 = super poder\n");
        printf("carta 1: densidade populacional : %.2f --- super poder: %.2f\n",denpopulacional,superpoder);
        printf("carta 2: densidade populacional : %.2f --- super poder: %.2f\n",denpopulacional2,superpoder2);
        printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(denpopulacional+superpoder),(denpopulacional2+superpoder2));
        (denpopulacional+superpoder) < (denpopulacional2+superpoder2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
       }  else if (decisão == 6 && decisao2 == 7 || decisão == 7 && decisao2 == 6)
       {
       printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
       printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
       printf("atributo 1 = pib per capita --- atributo 2 = super poder\n");
       printf("carta 1: pib per capita : %d --- super poder: %.2f\n",pibpercapita,superpoder);
       printf("carta 2: pib per capita : %d --- super poder: %.2f\n",pibpercapita2,superpoder2);
       printf("valor total-carta 1: %.2f --- valor total-carta 2: %.2f\n",(pibpercapita+superpoder),(pibpercapita2+superpoder2));
       (pibpercapita+superpoder) > (pibpercapita2+superpoder2) ? printf("\n***carta 1 venceu***\n") : printf("\n***carta 2 venceu***\n");
      } else{
         printf("***número invalido,tente novamente!***\n");
      }
   }
     