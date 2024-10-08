#include <stdio.h>
#include <math.h>

int main(){
    float capital;
    float juros;
    float meses;
    float montante;

    printf ("Qual foi a capital?");
    scanf("%f",&capital);
    printf("Qual foi o juros?");
    scanf("%f",&juros);
    printf("Qual foi a quantidade de meses?");
    scanf("%f",&meses);
    montante = capital*pow((1+juros/100),meses);
    printf("Qual foi o montante total? %f",montante);
}



   