#include <stdio.h>
int main() {

    float lado1, lado2, lado3;
    printf("Insira os valores do lado do triangulo:\n");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

    if (((lado1+lado2)<=lado3) || ((lado1+lado3)<=lado2) || ((lado2+lado3)<=lado1)) {
        printf("\nEsses valores nao satisfazem a condicao de existencia de um triangulo, portanto, o triangulo nao existe.\n");
    }
    else {
        if (lado1==lado2 && lado1==lado3) {
        printf("\nO triangulo e equilatero.\n");
    }
    else if(lado1==lado2 || lado1==lado3 || lado2==lado3) {
        printf("\nO triangulo e isosceles.\n");
    }
    else {
        printf("\nO triangulo e escaleno.\n");
    }
    }
}