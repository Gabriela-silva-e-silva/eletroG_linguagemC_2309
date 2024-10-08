#include <stdio.h>
int main(){
    float tamanho;
    float velocidade;
    float tempo;

    printf("Qual foi o tamanho?");
    scanf("%f",&tamanho);
    printf("Qual foi a velocidade?");
    scanf("%f",&velocidade);
    tempo = tamanho/velocidade;
printf("Seu tempo e: %f",tempo);
} 