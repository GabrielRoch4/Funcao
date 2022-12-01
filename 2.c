#include<stdio.h>

int maiorN(int x, int y){

    int maior;

    if(x > y){

        maior = x;

    }else{

        maior = y;
    }

    return maior;

}

int main() {

    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", maiorN(x, y));

    return 0;
}
