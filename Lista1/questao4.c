#include <stdio.h>
int main()
{
    int hora, minuto, segundo, soma;
    printf("Digite a hora, minuto e segundo: \n");
    scanf("%d%d%d", &hora, &minuto, &segundo);
    soma=(hora*3600)+(minuto*60)+segundo;
    printf("Esse horario e equivalente a %d segundos", soma);
    return 0;
}