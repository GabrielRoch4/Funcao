#include<stdio.h>

int somaMaiorMenor(int a, int b , int c) {

    int maior, menor, soma;

    if((a > b) && (a > c)){

        maior = a;

    }else if((b > a) && (b > c)) {

        maior = b;

    }else {

        maior = c;

    }

    if((a < b) && (a < c)){

        menor = a;

    }else if((b < a) && (b < c)) {

        menor = b;

    }else {

        menor = c;

    }

    soma = maior + menor;

    return soma;

}

int main() {

    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    printf("%d", somaMaiorMenor(n1, n2, n3));

    return 0;

}
