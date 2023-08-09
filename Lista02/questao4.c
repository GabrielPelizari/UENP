#include <stdio.h>
#include <math.h>
int main() {

    float a, b, c, delta, r1, r2;
    printf("Insira os valores de A, B, e C:\n");
    scanf("%f%f%f", &a, &b, &c);

    delta = b*b - 4 * a * c;
    if (a==0) {
        printf("\nNao e uma equacao de segundo grau.\n");
    }
    else {
        if (delta<0) {
            printf("\nNao existem raizes reais.\n");
        }
        else {
            r1=(-b+sqrt(delta))/2*a;
            r2=(-b+sqrt(delta))/2*a;
            printf("\nAs raizes reais sao %.2f %.2f", r1, r2);
        }
    }
}