#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char alunos[5][128];
    float naluno[4], sna, mna;
    int c;

    printf("Insira o nome dos alunos:\n");
    for ( c = 1; c < 5; c++)
    {
        printf("Nome do %d º aluno: ", c);
        gets(alunos[c]);
        fflush(stdin); 
    }
    
    c = 1;

    do
    {
        printf("Qual a nota do(a) %s?", alunos[c]);
        scanf("%f", &naluno[c]);
        c++;
    } while (c < 5);
    
    c = 1;

    do
    {
        sna = naluno[c] + sna;
        c++;
    } while (c < 5);
    
    mna = sna/4;

    c = 1;

    do
    {
        printf("%s Nota: %.2f\n", alunos[c], naluno[c]);
        c++;
    } while (c < 5);
    
    printf("Media da sala: %.2f", mna);
}