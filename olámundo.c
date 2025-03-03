#include <stdio.h>

int main () {
    char Carta1 [6];
    char Estado [5]= "Ceara";
    char Codigo[3]= "A01";
    char NomedaCidade [12]= "Fortaleza";
    int Populacao=2000000;
    int Area=10000000;
    float Pib= 699.28;
    int NumerosdePontosTuristicos= 50;

     printf("Carta1: %s \n",Carta1); 
     printf("Estado: %s \n", Estado);
     printf("Codigo: %s \n", Codigo);
     printf("Nome da Cidade: %s \n", NomedaCidade);
     printf("Populacao: %d \n", Populacao);
     printf("Area: %d \n", Area);
     printf("Pib : %2f \n", Pib);
     printf("Numeros de Pontos Turisticos: %d \n",NumerosdePontosTuristicos);

    return 0;
}
