#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char rg[4], rAlun[5];
    int notAlun[5], c, c1, c2;
    float pa, ta;

    
    
    c = 0;
    c1 = 0;
    pa = 0;
    ta = 0;
    c2 = 0;

    do
    {
        c++;
        notAlun[c] = 0;
    } while (c < 4);
    
    c = 0;

    printf("Digite o Gabárito:");

    do
    {
        c++;
        printf("Qual a %d º resposta?", c);
        scanf("%s", &rg[c]);
    } while ( c <= 2);
    
    c = 0;

    do{
        c++;
        c2 = 0;
        c1 = 0;
        do{
            c2++;
            c1++;
            printf("Qual a resposta da questao %d do aluno %d", c2, c);
            scanf("%s", &rAlun[c1]);

            if (rAlun[c1] ==  rg[c1])
            {
                notAlun[c] = notAlun[c] + 1;
            }
        } while (c1 < 3);
    } while (c < 4);

    c = 0;
    
    do{
        c++;
        if (notAlun[c] >= 2)
        {
            ta = ta + 1;
        }
        
    } while (c < 4);
    
    pa = (ta/4.0) * 100;

    c = 0;

    printf("Taxa de aprovacao: %f porcento.\n", pa);

    printf("Nota dos alunos:\n");

    do
    {
        c++;
        printf("Aluno %d, nota %d\n", c, notAlun[c]);
    } while (c < 4);
    

}