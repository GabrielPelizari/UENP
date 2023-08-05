#include <stdio.h>
int main()
{
    float distancia, CombustivelGasto, ConsumoMedio;
    printf("Insira a distancia percorrida pelo carro em KM e o total de combustivel gasto em litros: \n");
    scanf("%f", &distancia);
    scanf("%f", &CombustivelGasto);
    ConsumoMedio=(distancia / CombustivelGasto);
    printf("O consumo medio de combustivel do veiculo e: %.2f \n", ConsumoMedio);
    return 0;
}