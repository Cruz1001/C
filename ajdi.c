#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[3][128];

    printf("Nome:");
    gets(nome[0]);
    fflush(stdin);
    
    printf("Nome:");
    gets(nome[1]);
    fflush(stdin);

    printf("%s e %s", nome[0], nome[1]);
}