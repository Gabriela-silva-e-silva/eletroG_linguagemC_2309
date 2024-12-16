#include <stdio.h> 
void regressiva(int n) { 
 int i; 
 for(i=n; i>=0; i--) 
 printf("%d\n", i); 
} 
int main(void) { 
 int n; 
 printf("Informe o numero desejado:"); 
 scanf("%d",&n); 
 regressiva(n); 
 return 0; 
} 