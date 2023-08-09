#include <stdio.h>
int main() {

    float SaldoMedio, ValorDoCredito;
    printf("Insira o valor do seu saldo medio do ano passado:\n");
    scanf("%f", &SaldoMedio);

    if (SaldoMedio>400) {
        ValorDoCredito=(SaldoMedio*0.3);
    }
    else if (SaldoMedio>300 && SaldoMedio<=400) {
        ValorDoCredito=(SaldoMedio*0.25);
    }
    else if (SaldoMedio>200 && SaldoMedio<=300) {
        ValorDoCredito=(SaldoMedio*0.2);
    }
    else {
        ValorDoCredito=(SaldoMedio*0.1);
    }
    printf("\nO valor do credito especial a ser recebido e de %.2f.\n", ValorDoCredito);
}