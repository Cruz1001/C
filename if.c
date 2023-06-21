#include <stdio.h>

int main(){

    float n1, n2, m;

    printf("Insira a primeira nota: \n");
    scanf("%f", &n1);

    printf("Insira a outra nota: \n");
    scanf("%f", &n2);

    m = (n1+n2)/2;

    if(m >= 7.0){
        printf("Aprovado %.2f", m);
    }
    else {
        printf("Reprovado %2f", m);
    }
}