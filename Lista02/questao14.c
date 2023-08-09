#include <stdio.h>
int main() {

    int codigo;
    float km, LitrosGastos;

    printf("Diga o tipo de veiculo e quantos quilometros ele percorreu:\n");
    scanf("%d%f", &codigo, &km);

    switch(codigo) {
        case 1:
        LitrosGastos=(km/15);
        break;

        case 2:
        LitrosGastos=(km/12);
        break;

        case 3:
        LitrosGastos=(km/10);
        break;

        default:
        printf("\nVeiculo desconhecido.\n");
        return 0;
    }
    printf("\nO veiculo gastou %.2f litros de combustivel.\n", LitrosGastos);
}