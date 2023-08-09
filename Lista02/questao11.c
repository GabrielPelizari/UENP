#include <stdio.h>
int main() {

    float altura;
    int idade;
    printf("Diga sua altura e idade:\n");
    scanf("%f%d", &altura, &idade);

    if (altura>=1.5 && idade>=12) {
        printf("\nVoce pode entrar na Barca Viking.\n");
    }
    if (altura>=1.4 && idade>=14) {
        printf("\nVoce pode entrar em Elevator of death.\n");
    }
    if (altura>=1.7 || idade>=16) {
        printf("\nVoce pode entrar em Final Killer.\n");
    }
}