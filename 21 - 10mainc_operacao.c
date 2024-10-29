#include <stdio.h>
int main(){

char operacao;

printf("a sua operacao e: \n 1 == saldo; \n2 == extrato; \n3 == saque; \n4 == sair; ");
scanf("%c",&operacao);


if (operacao == '1'){
    printf("a sua operacao e: saldo");
}else if (operacao == '2'){
    printf("a sua operacao e: extrato");
}else if (operacao == '3'){
    printf("a sua operacao e: saque");
} else if (operacao == '4'){
    printf("a sua operacao e: sair");
}else{
    printf("a sua operacao invalida");
}
}