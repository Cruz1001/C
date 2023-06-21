#include <stdio.h>

void fibas(int n, int x, int y, int count) {
    if (count > n) {
        return;
    }

    printf("%d - ", x);
    fibas(n, y, x + y, count + 1);
}

int main() {
    int s;
    printf("Quantos números você deseja visualizar? ");
    scanf("%d", &s);

    printf("Sequência de Fibonacci: ");
    fibas(s, 1, 1, 1);

    return 0;
}
