#include <stdio.h>
int main() {

    int codigo, quantidade;
    float ValorTotal, preco;
    printf("Insira o codigo do produto:\n");
    scanf("%d", &codigo);

    switch(codigo) {
        case 1:
        printf("\nQuantos produtos voce quer comprar?\n");
        scanf("%d", &quantidade);
        preco=(5.3*quantidade);
        break;

        case 2:
        printf("\nQuantos produtos voce quer comprar?\n");
        scanf("%d", &quantidade);
        preco=(6*quantidade);
        break;

        case 3:
        printf("\nQuantos produtos voce quer comprar?\n");
        scanf("%d", &quantidade);
        preco=(3.2*quantidade);
        break;

        case 4:
        printf("\nQuantos produtos voce quer comprar?\n");
        scanf("%d", &quantidade);
        preco=(2.5*quantidade);
        break;

        default:
        printf("\nProduto nao encontrado.\n");
        return 0;
    }
    if (quantidade>=15 || preco>=40) {
        ValorTotal=preco*0.85;
    }
    else {
        ValorTotal=preco;
    }
    printf("\nO valor a pagar e de: %.2f", ValorTotal);
}