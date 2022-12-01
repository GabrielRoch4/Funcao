#include<stdio.h>

int RetOuTri(int b, int h) {

    int result;

    if(b == h) {

        result = 1;

    }else {

        result = 0;

    }

    return result;
}

int main() {

    int b, h;

    scanf("%d %d", &b, &h);

    printf("%d\n", RetOuTri(b, h));

    return 0;

}
