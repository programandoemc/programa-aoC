#include <stdio.h>

int main(){
    char Carta1[7];
    char Estado[6]= "Ceara";
    char Codigo[5]= "A01";
    char NomedaCidade[12]= "Fortaleza";
    double Populacao=12325000;
    double Area= 1521.11;

    printf("Carta1: %s \n", Carta1);
    printf("Estado: %s \n", Estado);
    printf("Codigo: %s \n", Codigo);
    printf("Nome da Cidade: %s \n", NomedaCidade);
    printf("População: %d \n", Populacao);
    printf("Área: %2f km \n", Area);

    printf("Digite a Carta:");
    scanf("%s", &Carta1);
    printf("A Carta é: %s \n", Carta1);

    printf("Digite o Estado:");
    scanf("%s", &Estado);
    printf("O Estado é: %s \n", Estado);

    printf("Digite o Codigo:");
    scanf("%s", &Codigo);
    printf("O Codigo é: %s \n", Codigo);

    printf("Digite O Nome da Cidade:");
    scanf("%s",&NomedaCidade);
    printf("O Nome da Cidade é: %s \n", NomedaCidade);

    printf("Digite a Populacao:");
    scanf("%d", &Populacao);
    printf("A População é: %d \n", Populacao);

    printf("Digite a Área:");
    scanf("%d", &Area);
    printf("A Área é: %.2lf Km \n", Area);

return 0;
}