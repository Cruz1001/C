#include <stdio.h>

int main(){
    int A, B, soma, subtr, mult, divis, teste;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);
    printf("Digite um terceiro valor.\n");
    scanf("%d", &teste);

    soma = A + B;
    subtr= A - B;
    mult= A * B;
    divis= A/ B;
    teste =  teste + 10;
    

    printf("Resultados:\n");
    printf("Soma: %d.\n", soma);
    printf("Subtração: %d.\n", subtr);
    printf("Multiplicação: %d.\n", mult);
    printf("Divisão: %d.\n", divis);
    printf("Teste: %d.\n", teste);
}