#include <stdio.h>
#include <math.h>

int main(){
float a;
float b;
float resultado;
char y;

printf("Qual e a operaçao?");
scanf("%c",&y);

printf("Informe o primeiro numero:");
scanf("%f",&a);

printf("Informe o segundo numero:");
scanf("%f",&b);

if (y == '+') {
    resultado = a+b;
}
if (y == '-') {
    resultado = a-b;
}
if (y == '/') {
    resultado = a/b;
}
if (y == '*') {
    resultado = a*b;
}
printf("Seu resultado sera:%f",resultado);
}
