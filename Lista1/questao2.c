#include <stdio.h>
int main()
{
    int nota1, nota2, nota3, nota4;
    float mediaPonderada;
    printf ("Insira as notas do aluno: \n");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);
    scanf("%d", &nota4);
    mediaPonderada=((nota1*1.5)+(nota2*2)+(nota3*3)+(nota4*3.5))/10;
    printf("Esta e a media do aluno: %.2f \n", mediaPonderada);
    return 0;
}