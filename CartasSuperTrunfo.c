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
    
   printf("SUPER TRUNFO\n\n"); //titulo do trabalho
   printf("novo commit\n");

   printf("CARTA 1\n\n"); //primeira carta

   printf("qual é o país?\n");
   scanf("%s",&país);

   printf("nome da cidade?\n");//nome da cidade 
   scanf("%s",cidade);

   printf("qual é o estado?\n");//estado 
   scanf("%s",&estado);

   printf("qual é o codigo da carta?\n");//codigo da carta
   scanf("%s",&codigo);

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
   scanf("%s",&país2);

   printf("nome da cidade?\n"); //segundo nome da cidade 
   scanf("%s",cidade2);
   

   printf("qual é o estado?\n"); //segundo estado 
   scanf("%s",&estado2);
   

   printf("qual é o codigo da carta?\n"); //codigo da segunda carta
   scanf("%s",&codigo2);
  

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
   printf("pais: %s",país2);
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
   
   printf("escolha o atributo a ser comparado:\n\n");
   printf("1.população\n");
   printf("2.área em km²\n");
   printf("3.pib\n");
   printf("4.pontos turisticos\n");
   printf("5.densidade populacional\n");
   printf("6.pib per capita\n");
   printf("7.super poder\n\n");
   scanf("%d",&decisão);
   
   switch (decisão)
   {
   case 1:
     if (população > população2)
     {
      printf("\n\n**você escolheu população**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: população, carta 1: %lu habitantes --- carta 2: %lu habitantes\n",população,população2); 
      printf("\n***carta 1 venceu***\n");
    } else if (população < população2)
    {
      printf("\n\n**você escolheu população**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: população, carta 1: %lu habitantes --- carta 2: %lu habitantes\n",população,população2); 
      printf("\n***carta 2 venceu***\n");
    } else{
      printf("***empate!***");
    }
     break;
   case 2:
      if (km² > km²2)
      {
      printf("\n\n**você escolheu área em km²**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: área em km², carta 1: %.2f km² --- carta 2: %.2f km²\n",km²,km²2); 
      printf("\n***carta 1 venceu***\n");
      } else if (km² < km²2)
      {
      printf("\n\n**você escolheu área em km²**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: área em km², carta 1: %.2f km² --- carta 2: %.2f km²\n",km²,km²2); 
      printf("\n***carta 2 venceu***\n");
      } else{
        printf("***empate!***");
      }
       break;
   case 3:
     if (pib > pib2)
     {
      printf("\n\n**você escolheu pib**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: pib, carta 1:r$ %.2f bilhões de reais --- carta 2:r$ %.2f bilhões de reais\n",pib,pib2); 
      printf("\n***carta 1 venceu***\n");
     } else if (pib < pib2)
     {
      printf("\n\n**você escolheu pib**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: pib, carta 1:r$ %.2f bilhões de reais --- carta 2:r$  %.2f bilhões de reais\n",pib,pib2); 
      printf("\n***carta 2 venceu***\n");
     } else{
       printf("***empate!***");
     }
    break;
     case 4:
       if (pt > pt2)
       {
      printf("\n\n**você escolheu pontos turisticos**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: pontos turisticos, carta 1: %d pontos turisticos --- carta 2: %d pontos turisticos\n",pt,pt2); 
      printf("\n***carta 1 venceu***\n");
       } else if (pt < pt2)
       {
      printf("\n\n**você escolheu pontos turisticos**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: pontos turisticos, carta 1: %d pontos turisticos --- carta 2: %d pontos turisticos\n",pt,pt2); 
      printf("\n***carta 2 venceu***\n");
       } else{
         printf("***empate!***");
       }
       break;
    case 5:
      if (denpopulacional < denpopulacional2)
      {
      printf("\n\n**você escolheu densidade populacional**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: densidade populacional, carta 1: %.2f hab/km² --- carta 2: %.2f hab/km²\n",denpopulacional,denpopulacional2); 
      printf("\n***carta 1 venceu***\n");
      } else if (denpopulacional > denpopulacional2)
      {
      printf("\n\n**você escolheu densidade populacional**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: densidade populacional, carta 1: %.2f hab/km² --- carta 2: %.2f hab/km²\n",denpopulacional,denpopulacional2); 
      printf("\n***carta 2 venceu***\n");
      } else{
        printf("***empate!***");
      }
    break;
     case 6:
      if (pibpercapita > pibpercapita2)
      {
      printf("\n\n**você escolheu pib per capita**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: pib per capita, carta 1: %.2f reais --- carta 2: %.2f reias\n",pibpercapita,pibpercapita2); 
      printf("\n***carta 1 venceu***\n");
      } else if (pibpercapita < pibpercapita2)
      {
        printf("\n\n**você escolheu pib per capita**\n\n");
        printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
        printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
        printf("o atributo é: pib per capita, carta 1: %.2f reais --- carta 2: %.2f reais\n",pibpercapita,pibpercapita2); 
        printf("\n***carta 2 venceu***\n");
      } else{
        printf("***empate!***");
      } 
       break;
    case 7:
     if (superpoder > superpoder2)
     {
      printf("\n\n**você escolheu super poder**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: super poder, carta 1: %.0f de força --- carta 2: %.0f de força\n",superpoder,superpoder2); 
      printf("\n***carta 1 venceu***\n");
     } else if (superpoder < superpoder2)
     {
      printf("\n\n**você escolheu super poder**\n\n");
      printf("país-carta 1: %s --- país-carta 2: %s\n",país,país2);
      printf("cidade-carta 1: %s --- cidade-carta 2: %s\n",cidade,cidade2);
      printf("o atributo é: super poder, carta 1: %.0f de força --- carta 2: %.0f de força\n",superpoder,superpoder2); 
      printf("\n***carta 2 venceu***\n");
     } else{
      printf("***empate!***");
     }
     break;
        default:{
          printf("\nopção invalida,digite novamente\n");
        } break;
   }
  } 
 