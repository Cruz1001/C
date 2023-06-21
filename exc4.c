#include <stdio.h>

int main(){

    int qo = 0, qb = 0, qr = 0, i = 0, mi = 0, pb = 0, si = 0, n = 0;
    int count = 1;

    do
    {
        printf("Qual a sua idade?");
        scanf("%d", &i);
        si = i + si;
        printf("Classifique sua experiência:\n");
        printf("[1] Regular\n");
        printf("[2] Bom\n");
        printf("[3] Ótimo\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            qr = qr + 1;
            break;
        case 2:
            qb = qb + 1;
            break;
        case 3:
            qo = qo + 1;
            break;
        }
        count++;
    } while (count <= 5);

    mi = si / 5;
    pb = (qb/5) * 100;

    printf("A média da idade do público foi de %d\n", mi);
    printf("%d pessoas acharam o filme regular.\n", qr);
    printf("%d das pessoas acharam o filme bom. ", pb);
}