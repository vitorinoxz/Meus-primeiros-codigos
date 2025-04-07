#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>



int main () {

int a = 0;
int b = 0;

while (!(a > 5 && a<10) || !(b > .5 && b < 10)){
    printf("Digite dois valores maiores que dez:");

    printf("digite um valor para a:");
    scanf("%d", &a);

    printf("digite um valor para b:");
    scanf("%d", &b);
}

printf("Soma: %d", a + b);

return 0;
}

// ! = N A O - EX:  (NAO(b > .5 && b < 10))