#include<stdio.h>

double juros(double c, double m, double t) {

    double j;

    j = c * m * t;

    return j;

}

int main() {

    double c, m, t;

    scanf("%lf %lf %lf", &c, &m, &t);

    printf("%lf", juros(c, m, t));

    return 0;
}
