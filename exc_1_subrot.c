#include <stdio.h>

void soma(){
    float x,y,s;
    printf("Digite um numero:");
    scanf("%f", &x);
    printf("Digite outro numero:");
    scanf("%f", &y);
    s = x + y;
    printf("A soma entre eles e %2.f.", s);
}
int main(){
    soma();
}