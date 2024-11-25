#include <stdio.h>
#include <math.h>

int main(){
    float capital;
    float juros;
    float periodo;
    float montante;
    int i;

    printf ("Qual foi a capital?");
    scanf("%f",&capital);
    printf("Qual foi o juros?");
    scanf("%f",&juros);
   
    printf("Qual foi o periodo?");
    scanf("%f", &periodo);
    for(i=1;i<=periodo;i++){
    montante = capital*pow((1+juros/100),i);
    printf("Informe o montante do %d mes = %.2f\n",i,montante);
}
}
