#include <stdio.h>

int soma(int num) {
    static int total = 0;
    total += num;
    printf("Total até agora: %d\n", total);
    return total;
}

int main() {
    int i, v[20];

    for (i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
        soma(v[i]);
    }

    return 0;
}
