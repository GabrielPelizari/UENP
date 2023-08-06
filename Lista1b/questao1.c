#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, formulaA, formulaB, formulaC, formulaD;
    printf("Insira os valores de A, B e C: \n");
    scanf("%f%f%f", &a, &b, &c);
    formulaA=((a*b)/c);
    formulaB=((a*a)+b+(5*c));
    formulaC=((a*b*c)+b+(c/3)*5-1);
    formulaD=(pow((a*b*c),3)/2);
    printf("O resultado da formula A e: %f \n", formulaA);
    printf("O resultado da formula B e: %f \n", formulaB);
    printf("O resultado da formula C e: %f \n", formulaC);
    printf("O resultado da formula D e: %f \n", formulaD);
    return 0;
}