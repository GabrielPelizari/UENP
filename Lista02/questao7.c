#include <stdio.h>
int main() {

    int codigo;
    float salario, SalarioComAumento;
    printf("Insira o codigo do seu trabalho e o seu salario:\n");
    scanf("%d%f", &codigo, &salario);

    switch(codigo) {
        case 1:
        SalarioComAumento=(salario*1.1);
        break;

        case 2:
        SalarioComAumento=(salario*1.07);
        break;

        case 3:
        SalarioComAumento=(salario*1.12);
        break;

        case 4:
        SalarioComAumento=(salario*1.11);
        break;
        
        default:
        printf("Codigo nao encontrado.\n");
        return 0;
    }
    printf("Seu salario com ajuste e de: %.2f", SalarioComAumento);
}