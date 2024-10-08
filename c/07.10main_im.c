#include <stdio.h>
int main() {
 float peso;
 float altura;
 float imc; 

 printf("Informe seu peso:");
 scanf("%f",&peso);
 printf("Informe a altura:");
 scanf("%f",&altura);
 imc= peso/(altura*altura);
 printf("Seu IMC e: %f",imc);
} 