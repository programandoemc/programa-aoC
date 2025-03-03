#include <stdio.h>

int main () {
    char Carta1 [6];
    char Estado [5]= "Ceara";
    char Codigo[3]= "A01";
    char NomedaCidade [12]= "Fortaleza";
    int População=12325000;
    double Area=1521.11;
    double Pib= 699.28;
    int NumerosdePontosTuristicos= 50;

     printf("Carta1: %s \n",Carta1); 
     printf("Estado: %s \n", Estado);
     printf("Codigo: %s \n", Codigo);
     printf("Nome da Cidade: %s \n", NomedaCidade);
     printf("População: %d \n", População);
     printf("Area: %2f km\u00B2 \n", Area);
     printf("Pib  : %2f bilhoes de Reais\n", Pib);
     printf("Numeros de Pontos Turisticos: %d \n",NumerosdePontosTuristicos);

     printf("Digite a Carta:");
     scanf("%s",&Carta1);
     printf("A Carta é: %s \n", Carta1);

     printf("Digite o Estado:");
     scanf("%s", &Estado);
     printf("Estado é: %s \n", Estado);

     printf("Digite o Codigo:");
     scanf("%s", &Codigo);
     printf("O Codigo é: %s \n", Codigo);

     printf("Digite o Nome da Cidade:");
     scanf("%s", &NomedaCidade);
     printf("O Nome da Cidade é: %s \n", NomedaCidade);

     printf("Digite a População:");
     scanf("%d", População);
     printf("A População é: %d \n, População");




     
    return 0;
}
