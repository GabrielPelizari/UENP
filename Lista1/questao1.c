#include <stdio.h>
int main()
{
    float raio, perimetro, area, pi;
    printf("Insira o raio da circunferencia: \n");
    scanf("%f", &raio);
    pi=(3.14159);
    perimetro=(2*pi*raio);
    area=pi*(raio*raio);
    printf("O perimetro e: %.4f \n", perimetro);
    printf("A area e: %.4f \n", area);
    return 0;
}