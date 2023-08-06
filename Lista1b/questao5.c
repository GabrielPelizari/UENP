#include <stdio.h>
int main()
{
    int A, B, C, D, AxB, CxD, produto;
    printf("Insira os valores inteiros de A, B, C e D: \n");
    scanf("%d%d%d%d", &A, &B, &C, &D);
    AxB=(A*B);
    CxD=(C*D);
    produto=(AxB-CxD);
    printf("A diferenca entre o produto de A e B e o produto de C e D e de: %d", produto);
    return 0;
}