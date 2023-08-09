#include <stdio.h>
int main() {

    int codigo;
    float x, y, equacao;
    printf("De acordo com a a tabela, qual operacao deseja realizar?\n");
    scanf("%d", &codigo);

    switch (codigo) {
    case 1:
        printf("\nDigite os valores de X e Y:\n");
        scanf("%f%f", &x, &y);
        equacao=((x + y)/2);
        break;

    case 2:
        printf("\nDigite os valores de X e Y:\n");
        scanf("%f%f", &x, &y);
        if (x>=y) {
            equacao=(x-y);
        }
        else {
            equacao=(y-x);
        }
        break;

    case 3:
        printf("\nDigite os valores de X e Y:\n");
        scanf("%f%f", &x, &y);
        equacao=(x*y);
        break;

    case 4:
        printf("\nDigite os valores de X e Y:\n");
        scanf("%f%f", &x, &y);
        if (y!=0) {
            equacao=(x/y);
        }
        else {
            printf("\nDivisao por zero nao e permitida.\n");
            return 0;
        }
        break;

    default:
        printf("\nOperacao nao encontrada.\n");
        return 0;
    }
    printf("\nO resultado da equacao e de: %.2f", equacao);
}