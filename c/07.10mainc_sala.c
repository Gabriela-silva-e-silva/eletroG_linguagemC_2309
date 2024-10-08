#include <stdio.h>
int main(){
    float medida;
    float preco;
    float custo;

 printf("Qual foi a medida?");
    scanf("%f",&medida);
    printf("Qual foi o preco?");
    scanf("%f",&preco);
    custo = medida*preco;
printf("Seu custo e: %f",custo);
} 