#include<stdio.h>

// funcao

// tipo nome (parametros){
    //codigo
    //retorno
//}

// funcao do tipo void nao retorna nada


double delta(double a, double b, double c) {

    double delta = (b * b) - (4 * a * c);

    return delta;
}

int main() {

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.2lf\n", delta(a, b, c));

    return 0;
}
