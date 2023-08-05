#include <stdio.h>
int main()
{
    int valor, troco;
    printf("Insira a quantidade em dinheiro: \n");
    scanf("%d", &valor);
    troco=(valor%7);
    printf("O prejuizo será de %d reais", troco);
    return 0;
}