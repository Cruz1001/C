#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vendas[12][4], vmes[12] = {0}, vsem[4] = {0}, vano = 0, i, j;

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 4; j++) {
            printf("Quantas unidades vendemos na semana %d, do mês %d? ", j + 1, i + 1);
            scanf("%d", &vendas[i][j]);
            vmes[i] += vendas[i][j];
            vsem[j] += vendas[i][j];
            vano += vendas[i][j];
        }
    }


    printf("Vendas em janeiro: %d \n", vmes[0]);
    printf("Vendas em fevereiro: %d\n",vmes[1]);
    printf("Vendas em março: %d \n", vmes[2]);
    printf("Vendas em abril: %d\n", vmes[3]);
    printf("Vendas em maio: %d\n", vmes[4]);
    printf("Vendas em junho: %d\n", vmes[5]);
    printf("Vendas em julho: %d\n", vmes[6]);
    printf("Vendas em agosto: %d\n", vmes[7]);
    printf("Vendas em setembro: %d\n", vmes[8]);
    printf("Vendas em outubro: %d\n", vmes[9]);
    printf("Vendas em novembro: %d\n", vmes[10]);
    printf("Vendas em dezembro: %d\n", vmes[11]);

    printf("Vendas por semana:\n");
    for (j = 0;j<4; j++){
        printf("Vendas semana %d: %d\n", j+1,vsem[j]);
    }
    printf("Vendas no ano: %d\n", vano);
}