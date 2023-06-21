#include <stdio.h>

int main(){

    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int c;

    c = 0;

    printf("Imprimindo linha 1\n");

    do
    {
        printf("%d ", mat[0][c]);
        c++;
    } while (c < 3);
}