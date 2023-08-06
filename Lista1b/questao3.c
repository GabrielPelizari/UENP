#include <stdio.h>
int main()
{
    float altura, massa, imc;
    printf("Insira sua altura em metros e seu peso em quilos: \n");
    scanf("%f%f", &altura, &massa);
    imc=(massa/(altura*altura));
    printf("Seu IMC e de: %.2f \n", imc);
    return 0;
}