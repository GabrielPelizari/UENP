#include <stdio.h>
#include <ctype.h>
int main() {

    char input, vogal;
    printf("Digite uma letra:\n");
    scanf("%c", &input);

    vogal = tolower(input);
    if (vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u') {
        printf("Letra e vogal.\n");
    }
    else {
        printf("Letra e consoante.\n");
    }
    return 0;
}