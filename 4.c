#include<stdio.h>

int qtdPares(int a, int b, int c) {

    int qtd = 0;

    if(a % 2 == 0){

        qtd++;
    }

    if(b % 2 == 0){

        qtd++;
    }

    if(c % 2 == 0){

        qtd++;
    }

    return qtd;

}

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", qtdPares(a, b, c));

    return 0;
}
