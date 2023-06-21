#include <stdio.h>
#include <locale.h>

float parcela(num){
    int y;
    float r;

    y = num * num;
    r = (y+1)/(num+3);

    printf("%f", r);
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Em quantas vezes você deseja parcelar?");
    int x;
    scanf("%d", &x);

    parcela(x);

}