#include <stdio.h>

int main(){

    float Sal;

    printf("Calcularei um reajuste em seu salario.\n");
    printf("Insira quanto voce recebe:\n ");
    scanf("%f", &Sal);

    if (Sal < 300){
        Sal = Sal + (Sal * 0.35);
    }
    else{
        Sal = Sal + (Sal * 0.15);
    }

    printf("Seu novo Salario e %.2f", Sal);
}