#include <stdio.h>

int main(){
    float n1, n2, m;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);

    printf("Insira a segunda nota: ");
    scanf("%f", &n2);

    m = (n1 + n2)/2;

    if(m >= 7.0 ){
        printf("Aprovado, %2.f", m);
    }
    if(m < 7.0 && m >=3){
        printf("Exame, %2.f", m);
    }
    if(m < 3){
        printf("Reprovado, %2.f", m);
    }
}