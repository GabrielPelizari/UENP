#include <stdio.h>
int main()
{
    float base, altura, area;
    printf("Insira a base e a altura do triangulo: \n");
    scanf("%f%f", &base, &altura);
    area=((base*altura)/2);
    printf("A area do triangulo e: %f \n", area);
    return 0;
}