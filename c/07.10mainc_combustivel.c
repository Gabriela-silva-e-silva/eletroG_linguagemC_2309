#include <stdio.h>
int main(){
    float distancia;
    float combustivel;
    float consumo;

    printf("Qual foi a distancia?");
    scanf("%f",&distancia);
    printf("Qual foi a quantidade de combustivel?");
    scanf("%f",&combustivel);
    consumo = distancia/combustivel;
printf("Seu consumo e: %f",consumo);
} 