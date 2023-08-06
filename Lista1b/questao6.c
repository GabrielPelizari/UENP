#include <stdio.h>
int main()
{
    int NumeroDoFuncionario, HorasTrabalhadas, SalarioPorHora, SalarioDoFuncionario;
    printf("Insira o numero do funcionario, seu numero de horas trabalhadas no dia e seu salario por hora: \n");
    scanf("%d%d%d", &NumeroDoFuncionario, &HorasTrabalhadas, &SalarioPorHora);
    SalarioDoFuncionario=((HorasTrabalhadas*20)*SalarioPorHora); //supondo que o funcionario trabalhe o mesmo tanto de horas 5 dias por semana e 4 semanas por mes, por isso as horas são multiplicadas por 20.
    printf("O funcionario de numero %d recebe um salario de %d reais por mes. \n", NumeroDoFuncionario, SalarioDoFuncionario);
    return 0;
}