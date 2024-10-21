#include <stdio.h>
int main(){

char estadocivil;

printf("Informe seu estado civil:");
scanf("%c",&estadocivil);


if (estadocivil == 's'){
    printf("Estado civil: solteiro");
}
if (estadocivil == 'c'){
    printf("Estado civil: casado");
}
if (estadocivil == 'd' ){
    printf("Estado civil: divorciado");
}
if (estadocivil == 'v'){
    printf ("Estado civil: viuvo");
}
}