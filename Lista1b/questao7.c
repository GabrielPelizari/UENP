#include <stdio.h>
int main()
{
    float dias, KmsRodados, ValorTotalComDesconto;
    printf("Insira quantos dias a pessoa ficou com o carro e quantos quilometros ela rodou: \n");
    scanf("%f%f", &dias, &KmsRodados);
    ValorTotalComDesconto=(((dias*30)+(KmsRodados*0.01))*0.9);
    printf("A pessoa deve pagar %.2f reais pelo aluguel do carro \n", ValorTotalComDesconto);
    return 0;
}