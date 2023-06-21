#include <stdio.h>
#include <locale.h>

int par(int num) {
    if (num % 2 == 0) {
        return 1; // retorna 1 se o número for par
    } else {
        return 0; // retorna 0 se o número for ímpar
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int v[20];
    int i;
    int p = 0;

    for (i = 0; i < 20; i++) {
        printf("Digite um número: ");
        scanf("%d", &v[i]);

        if (par(v[i])) {
            p++;
        }

        printf("Pares até agora: %d\n", p);
    }

    return 0;
}
