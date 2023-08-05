#include <stdio.h>
int main()
{
    float real, dolar, euro;
    printf("Insira o valor em reais que voce quer converter: \n");
    scanf("%f", &real);
    dolar=(real*0.20);
    euro=(real*0.18);
    printf("O valor em dolar e: %.2f \n", dolar);
    printf("O valor em euro e: %.2f \n", euro);
    return 0;
}