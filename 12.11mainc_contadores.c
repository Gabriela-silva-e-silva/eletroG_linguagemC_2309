#include <stdio.h>
int main(void) {
 int a, b, c;
 printf("Numero? ");
 scanf("%d", &a);
 printf("\nTabuada do %d\a\a", a);
 for(b=1 ; b<=10 ; b++) {
 c = a*b;
 printf("%d x %2d = %3d\a", a, b, c);
 }
 return 0;
} 