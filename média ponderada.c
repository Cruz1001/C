#include <stdio.h>

int main(){
    float n1, n2, total;
    printf("Primeiro numero: (peso 2)\n");
    scanf("%f", &n1);
    printf("Segundo numero: (peso 5)\n");
    scanf("%f", &n2);

    n1 = n1 * 2;
    n2 = n2 * 5;
    total = (n1 + n2)/7;

    printf("O média ponderada é %.2f", total);
}