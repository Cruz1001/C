#include <stdio.h>

struct habitantes
{
    char sexo;
    int filhos;
    int idade;
    float salario;
};

typedef struct habitantes habitantes;

int main(){
    habitantes pessoa[5];
    int i, tf;
    float tsm = 0, psm = 0, ms = 0, ts = 0, mf, medsal;

    for ( i = 1; i <= 5; i++)
    {
        printf("Qual o seu Sexo? (m/f)");
        scanf("%s", &pessoa[i].sexo);
        printf("Quantos filhos voce tem?");
        scanf("%d", &pessoa[i].filhos);
        printf("Quantos anos voce tem?");
        scanf("%d", &pessoa[i].idade);
        printf("Quanto você recebe?");
        scanf("%f", &pessoa[i].salario);
        if (pessoa[i].salario > ms){
            ms = ms + pessoa[i].salario;
        }
        if (pessoa[i].sexo = "f" && pessoa[i].salario >= 1000){
            tsm = tsm + pessoa[i].salario;
        } 
        ts = ts + pessoa[i].salario;
        tf = tf + pessoa[i].filhos;
    }
    psm = (tsm/5)*100; 
    medsal = ts/5;
    mf = tf/5;
    printf("Media salario %.2f\n", medsal);
    printf("Media Numero filhos %.2f\n", mf);
    printf("Maior salário %f", ms);
    printf("Percentual de mulheres com salario > 1000 %.2f", psm);
    

}
