#include <stdio.h>
int main() {

    int x, y;
    printf("Digite os valores de X e Y:\n");
    scanf("%d%d", &x, &y);

    if (x<0 && y>0) {
        printf("\nO ponto esta no primeiro quadrante.\n");
    }
    else if (x>0 && y>0) {
        printf("\nO ponto esta no segundo quadrante.\n");
    }
    else if (x<0 && y<0) {
        printf("\nO ponto esta no terceiro quadrante.\n");
    }
    else if (x>0 &&y<0) {
        printf("\nO ponto esta no quarto quadrante.\n");
    }
    else if (x==0 && y!=0) {
        printf("\nO ponto esta no eixo Y.\n");
    }
    else if (x!=0 && y==0) {
        printf("\nO ponto esta no eixo X.\n");
    }
    else if (x==0 && y==0) {
        printf("\nO ponto esta na origem.\n");
    }
    else {
        printf("\nErro!\n");
    }
}