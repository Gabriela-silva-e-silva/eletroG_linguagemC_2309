#include <stdio.h>
int main() {
    int a=0;
    int b=0;
    int c=0;
    char voto;
    int eleitores;
    int i;
  
    printf("Informe a quantidade de eleitores:");
    scanf("%d",&eleitores);

    for(i=1;i<= eleitores;i++){

     printf("Informe o voto do eleitor %d:",i);
     scanf("%c", &voto);
     scanf("%c", &voto);
     
     if(voto== 'a'){
        a++;
     }
     if(voto== 'b'){
        b++;
     }
     if(voto== 'c'){
        c++;
     }
     
    }

    printf("O resultado da eleicao para a: %d\n",a);
    printf("O resultado da eleicao para b: %d\n",b);
    printf("O resultado da eleicao para c: %d",c);

    return 0;

}