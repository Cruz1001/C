#include <stdio.h>

int main(){

    float Sal, LSal, Imp;
    int Tempo, Grat;

    printf("Ha Quantos anos você trabalha?");
    scanf("%d", &Tempo);

    printf("Qual é o seu salário atual? ");
    scanf("%f", &Sal);

    // Calculo do imposto

    if (Sal < 200){
        Imp = 0;
    }
    if (Sal >= 200 && Sal <= 450){
        Imp = Sal * 0.03;
    }
    if (Sal > 450 && Sal < 700){
        Imp = Sal * 0.08;
    }
    if (Sal >= 700){
        Imp = Sal * 0.12;
    }

    //Calculo da gratificação

    if (Sal > 500 && Tempo < 3){
        Grat = 20;
    }
    if (Sal > 500 && Tempo >= 3){
        Grat = 30;
    }
    if (Sal <= 500 && Tempo < 3){
        Grat = 23;
    }
    if (Sal <= 500 && Tempo >= 3 && Tempo < 6){
        Grat = 35;
    }
    if (Sal <= 500 && Tempo >= 6){
        Grat = 33;
    }

    LSal = Sal - Imp + Grat;
    
    printf("Seu Salario Liquido é: %.2f\n", LSal);
    printf("Com impostos de: %.2f\n", Imp);
    printf("Gratificação de: %d\n", Grat);
    
    if (LSal < 350){
        printf("Classificação A");
    }
    if (LSal > 350 && LSal < 600){
        printf("Classificação B");
    }
    if (LSal >= 600){
        printf("Classificação C");
    }
        
    }
