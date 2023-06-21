#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int dia, diasemana, semana, i;

    printf("De quem é a vez?\n");

    printf("Em qual semana do mês estamos?");
    scanf("%d", &semana);

    printf("Em que dia da semana estamos?\n");
    printf("[1] Domingo\n");
    printf("[2] Segunda\n");
    printf("[3] Terça\n");
    printf("[4] Quarta\n");
    printf("[5] Quinta\n");
    printf("[6] Sexta\n");
    printf("[7] Sábado\n");
    scanf("%d", &diasemana);

    switch (diasemana){
        case 2:
            printf("Tia Dede");
        break;
        case 3:
            printf("Tia Lia");
        break;
         case 5:
            printf("Tia Detinha");
        break;
    }

    if (semana == 1){
        if (diasemana == 1){
            printf("Bruna");
            return 0;
        }
        if (diasemana == 4){
            printf("Tia Irene");
        }
        if (diasemana == 6){
            printf("Tia Nana");
        }
        if (diasemana == 7){
            printf("Dona Jô");
        }
    }
     if (semana == 5){
        if (diasemana == 1){
            printf("Bruna");
        }
        if (diasemana == 4){
            printf("Tia Irene");
        }
        if (diasemana == 6){
            printf("Tia Nana");
        }
        if (diasemana == 7){
            printf("Dona Jô");
        }
    }

    if (semana == 2){
        if (diasemana == 1){
            printf("Dona Jô");
        }
        if (diasemana == 4){
            printf("Tia Nana");
        }
        if (diasemana == 6){
            printf("Tia Irene");
        }
        if (diasemana == 7){
            printf("Bruna");
        }
    }

    if (semana == 3){
        if (diasemana == 1){
            printf("Tia Irene");
        }
        if (diasemana == 4){
            printf("Bruna");
        }
        if (diasemana == 6){
            printf("Dona Jo");
        }
        if (diasemana == 7){
            printf("Tia Nana");
        }
    }
    if (semana == 4){
        if (diasemana == 1){
            printf("Tia Nana");
        }
        if (diasemana == 4){
            printf("Dona Jo");
        }
        if (diasemana == 6){
            printf("Bruna");
        }
        if (diasemana == 7){
            printf("Tia Irene");
        }
    }
}
