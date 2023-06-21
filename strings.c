#include <stdio.h>

int main(){
    
    char s[10];

    printf("Digite algo (Scanf convencional):");
    scanf("%s", s);
    fflush(stdin); // serve para evitar erros

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (Scanf aprimorado):\n");
    scanf("%10[^\n]s", s);
    fflush(stdin);
    
    printf("Resultado: %s\n\n", s);
}