#include <stdio.h>

int main () {
    char Carta1 [6];
    char Estado [5]= "Ceara";
    char Codigo[3]= "A01";
    char NomedaCidade [12]= "Fortaleza";
    int Populacao=12325000;
    double Area=1521.11;
    double Pib= 699.28;
    int NumerosdePontosTuristicos= 50;

     printf("Carta1: %s \n",Carta1); 
     printf("Estado: %s \n", Estado);
     printf("Codigo: %s \n", Codigo);
     printf("Nome da Cidade: %s \n", NomedaCidade);
     printf("Populacao: %d \n", Populacao);
     printf("Area: %2f km\u00B2 \n", Area);
     printf("Pib  : %2f bilhoes de Reais\n", Pib);
     printf("Numeros de Pontos Turisticos: %d \n",NumerosdePontosTuristicos);

    return 0;
}
