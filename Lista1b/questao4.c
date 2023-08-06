#include <stdio.h>
int main()
{
    float psg, pcg; //pagamento sem gorgeta e pagamento com gorgeta.
    printf("Insira o valor a se pagar ao restaurante: \n");
    scanf("%f", &psg);
    pcg=(psg*1.1);
    printf("O total a se pagar com gorgeta e de %.2f reais.", pcg);
    return 0;
}