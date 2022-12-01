#include<stdio.h>

int somaPA(int priEle, int nEsimo, int n) {

    int soma;

    soma = (n * (priEle + nEsimo)) / 2;

    return soma;
}


int main() {

    int priEle, nEsimo, n;

    scanf("%d %d %d", &priEle, &nEsimo, &n);

    printf("%d", somaPA(priEle, nEsimo, n));

    return 0;
}
