#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void main () {

int a, b, c;

scanf ("%d %d %d", &a, &b, &c);

if (a > 10 && b > 10 && c > 10 ){
   printf("todos sao maiores que 10");

}else{
    printf("um dos valores nao e maior que 10");
}

  return 0;

}
