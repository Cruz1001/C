#include <stdio.h>

int main(){
    int a, b, c, total;
    printf("Multiplicarei 3 numeros.\n");
    printf("Insira o primeiro numero:\n");
    scanf("%d", &a);
    printf("Insira o segundo numero:\n");
    scanf("%d", &b);
    printf("Insira o terceiro numero:\n");
    scanf("%d", &c);

    total = a * b * c;

    printf("A Multiplicacao dos tres numeros e: %d", total);
}