#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int d, m, a, res, x;
    printf("Que dia é hoje?");
    scanf("%d", &d); //dia
    printf("Em que mês estamos?");
    scanf("%d", &m); //mes
    printf("Em que ano estamos?");
    scanf("%d", &a); //ano
    if (m > 2)
    {
        m = m - 2;
        x = 8;
    }
    else
    {
        a = a - 1;
        x = 13;
    }
    res = (x + d + 2 * m + ((7 * m) / 12) + a % 7 +
           a / 4 % 7 - (3 * (1 + a / 100)) / 4 % 7) % 7;
    if (res == 0) printf("Sabado");
    else
        if (res == 1) printf("Domingo");
        else
            if (res == 2) printf("Segunda");
            else
                if (res == 3) printf("Terca");
                else
                    if (res == 4) printf("Quarta");
                    else
                        if (res == 5) printf("Quinta");
                        else
                            if (res == 6) printf("Sexta");
    
    return 0;
}
