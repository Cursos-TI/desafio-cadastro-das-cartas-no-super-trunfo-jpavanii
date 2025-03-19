#include   <stdio.h>
int main (){


char Estado_1[3];
char Número_da_carta_1[3];
char Cidade_1[10];
int População_1;
float Área_1; 
float PIB_1;
int Pontos_Turísticos_1;
float densiade_demografica_1;
float pib_per_capita_1;

int Resultado_área;
int Resultado_população;
int Resultado_pib;
int Resultado_pontos_turísticos;
int Resultado_densidade_demográfica;
int Resultado_pib_per_capita;



printf("Digite os dados da primeira carta \n");


printf("digite o Estado: \n   ");
scanf("%s", Estado_1);

printf("digite o Número da carta: \n   ");
scanf("%s", Número_da_carta_1);

printf("digite a Cidade: \n   ");
scanf("%s", Cidade_1);

printf("digite a População: \n   ");
scanf("%d", &População_1);

printf("digite a Área: \n   ");
scanf("%f", &Área_1);

printf("digite o PIB: \n   ");
scanf("%f", &PIB_1);

printf("digite os Pontos Turísticos: \n   ");
scanf("%d", &Pontos_Turísticos_1);

densiade_demografica_1 = População_1 / Área_1;
pib_per_capita_1 = PIB_1 / População_1;



printf("Carta 1: \n");
printf("Estado: %s \n", Estado_1);
printf("Número da carta: %s \n", Número_da_carta_1); 
printf("Cidade: %s \n", Cidade_1);
printf("População: %d \n", População_1);
printf("Área: %f \n", Área_1);
printf("PIB: %f \n", PIB_1);
printf("Densidade Demográfica: %f \n", densiade_demografica_1);
printf("PIB per capita: %f \n", pib_per_capita_1);


char Estado_2[3];
char Número_da_carta_2[3];
char Cidade_2[80];
int População_2;
float Área_2; 
float PIB_2;
int Pontos_Turísticos_2;
float densiade_demografica_2;
float pib_per_capita_2;



printf("Agora digite os dados da sengunda carta \n");

printf("digite o Estado: \n   ");
scanf("%s", Estado_2);      

printf("digite o Número da carta: \n   ");
scanf("%s", Número_da_carta_2);

printf("digite a Cidade: \n   ");
scanf("%s", Cidade_2);

printf("digite a População: \n   ");
scanf("%d", &População_2);

printf("digite a Área: \n   ");
scanf("%f", &Área_2);

printf("digite o PIB: \n   ");
scanf("%f", &PIB_2);

printf("digite os Pontos Turísticos: \n   ");
scanf("%d", &Pontos_Turísticos_2);

densiade_demografica_2 = População_2 / Área_2;
pib_per_capita_2 = PIB_2 / População_2;


printf("Carta 2: \n");
printf("Estado: %s \n", Estado_2);
printf("Número da carta: %s \n", Número_da_carta_2); 
printf("Cidade: %s \n", Cidade_2);
printf("População: %d \n", População_2);
printf("Área: %f \n", Área_2);
printf("PIB: %f \n", PIB_2);
printf("Densidade Demográfica: %f \n", densiade_demografica_2);
printf("PIB per capita: %f \n", pib_per_capita_2);







printf("Agora é a hora da verdade, quem venceu? \n");

Resultado_área = Área_1 > Área_2;
Resultado_população = População_1 > População_2;
Resultado_pib = PIB_1 > PIB_2;
Resultado_pontos_turísticos = Pontos_Turísticos_1 > Pontos_Turísticos_2;
Resultado_densidade_demográfica = densiade_demografica_1 > densiade_demografica_2;
Resultado_pib_per_capita = pib_per_capita_1 > pib_per_capita_2;

printf("Resultado da Área: %d \n", Resultado_área);
printf("Resultado da População: %d \n", Resultado_população);
printf("Resultado do PIB: %d \n", Resultado_pib);
printf("Resultado dos Pontos Turísticos: %d \n", Resultado_pontos_turísticos);
printf("Resultado da Densidade Demográfica: %d \n", Resultado_densidade_demográfica);
printf("Resultado do PIB per capita: %d \n", Resultado_pib_per_capita);



return 0;




}
