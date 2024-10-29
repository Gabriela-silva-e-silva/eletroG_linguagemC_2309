#include <stdio.h>
#include <math.h>

int main(){
int a;
int b;
float r;
int soma;

printf("Informe os 2 primeiros numeros da sua data de nascimento:");
scanf("%d",&a);

printf("Informe os 2 ultimos numeros da sua data de nascimento:");
scanf("%d",&b);

soma = a+b;
printf ("A soma dos numeros e %d", soma);

r = soma %5;
printf("A soma dos seus numeros e %d/5 = %f",soma, r);


if (r == 0) {
    printf ("Timido");
}
if (r == 1) {
    printf ("Sonhador");
}
if (r == 2) {
    printf ("Paquerador");
}
    if (r == 3) {
    printf ("Atraente");
}
if (r == 4) {
    printf ("Irresistivel");
}
printf("Voce e:%f",r);
}


