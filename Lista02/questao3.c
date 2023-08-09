#include <stdio.h>
int main() {

    float n1, n2, n3, media;
    printf("Insira tres numeros:\n");
    scanf("%f%f%f", &n1, &n2, &n3);

    media=((n1+n2+n3)/3);

    if (n1>media) {
        printf("\n%.2f e maior que a media.\n", n1);
    }
    if (n2>media) {
        printf("\n%.2f e maior que a media.\n", n2);
    }
    if (n3>media) {
        printf("\n%.2f e maior que a media.\n", n3);
    }

    return 0;
}