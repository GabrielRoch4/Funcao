#include<stdio.h>

int somaPares(int a, int b) {

    int i, primeiro, segundo, soma = 0;

    if(a > b) {

       primeiro = a;
       segundo = b;

    }else {

       primeiro = b;
       segundo = a;

    }

    for(i = primeiro; i < segundo; i++) {

       if(i % 2 == 0) {

            soma += i;

       }

    }

    return soma;

}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", somaPares(a, b));

    return 0;

}
