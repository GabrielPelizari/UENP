#include <stdio.h>
int main() {

    int r1, r2, r3, r4, r5; //Requisito1, Requisito2...
    printf("Insira o numero dos requisitos, 1 caso o trabalho possui e requisito e 0 caso nao possua:\n");
    scanf("%d%d%d%d%d", &r1, &r2, &r3, &r4, &r5);

    if (r1==0 && r2==0) {
        printf("\nO trabalho nao sera aceito e o aluno recebera 0.\n");
    }
    else if (r3==0 || r4==0 || r5==0) {
        printf("\nO trabalho nao sera aceito e o aluno recebera 0.\n");
    }
    else {
        printf("\nO trabalho foi aceito e sera avaliado!\n");
    }
}