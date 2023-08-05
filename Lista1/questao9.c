#include <stdio.h>
int main()
{
    float DSD, DCD, Q2, Q3; //DSD = Diaria Sem Desconto, DCD = Diaria com Desconto, Q2 e Q3 = Questao 2 e 3.
    printf("Insira o valor da diaria normal: \n");
    scanf("%f", &DSD);
    DCD=(DSD*0.7);
    Q2=(DCD*45*0.7);
    Q3=(DSD*45*0.35);
    printf("1: o valor da diaria com desconto e: %.2f \n", DCD);
    printf("2: o total arrecadado com o dobro de ocupacao e diaria com desconto e: %.2f \n", Q2);
    printf("3: o total arrecadado com 35 porcento de ocupacao e diaria normal e: %.2f \n", Q3);
    return 0;
}