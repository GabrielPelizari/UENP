#include <stdio.h>
int main()
{
    float SalarioBase, SalarioLiquido, imposto, gratificacao;
    printf("Insira o salario base do funcionario: \n");
    scanf("%f", &SalarioBase);
    gratificacao=(50);
    imposto=(SalarioBase*0.12);
    SalarioLiquido=(SalarioBase-imposto+gratificacao);
    printf("O salario-base e: %.2f \n", SalarioLiquido);
    return 0;
}