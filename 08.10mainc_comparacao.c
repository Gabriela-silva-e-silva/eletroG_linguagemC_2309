#include <stdio.h>
#include <math.h>

int main(){
float nota1;
float nota2;
float nota3;
float nota4;
float media;

printf("Informe a nota1:");
scanf("%f",&nota1);
printf("Informe a nota2:");
scanf("%f",&nota2);
printf("Informe a nota3:");
scanf("%f",&nota3);
printf("Informe a nota4:");
scanf("%f",&nota4);
media = (nota1 + nota2 + nota3 + nota4)/ 4; 
printf("A media do aluno:%f",media);
if (media>= 7){
    printf("O aluno esta aprovado!");
}
if (media>4 && media<7){
    printf("O aluno esta de final!");
}
if (media<4){
    printf("O aluno esta reprovado!");
}
}