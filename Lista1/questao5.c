#include <stdio.h>
#include <math.h>
int main()
{
    int xB, xA, yB, yA;
    float distancia;
    printf("De as coordenadas x e y de A e B no plano cartesiano: \n");
    scanf("%d%d", &xA, &yA);
    scanf("%d%d", &xB, &yB);
    distancia=sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA));
    printf("A distancia entre A e B e: %.2f \n", distancia);
    return 0;
}