#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Insira o valor de X e Y: \n");
    scanf("%d%d", &x, &y);
    z=x;
    x=y;
    y=z;
    printf("Agora o valor de X e Y sao %d e %d", x, y);
    return 0;
}