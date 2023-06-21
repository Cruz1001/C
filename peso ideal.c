#include <stdio.h>

int main(){
    float Alt, PI;
    char s;

    printf("Qual a sua altura?");
    scanf("%f", &Alt);

    printf("Qual o seu Sexo? [m/f]");
    scanf("%s", &s);

    switch(s){
        case 'm':
        PI = (72.7 * Alt) - 58;
        break;
        case 'f':
        PI = (62.1 * Alt) - 44.7;
        break;
    }

    printf("Seu peso ideal e %2.f", PI);
    }
