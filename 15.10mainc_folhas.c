#include <stdio.h>
#include <math.h>
int main(){
    char copias;
    char valor;
    char total;

    printf("Quantidade de copias:");
    scanf("%f",&copias);
    valor = 0.25;
    total = valor*copias;
    printf("O preço total sera: %f",total);
} 
