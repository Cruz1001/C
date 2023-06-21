#include <stdio.h>
// ele pode fazer recuperação?
int main(){

    float n1, n2, m;

    printf("Insira a primeira nota: \n");
    scanf("%f", &n1);

    printf("Insira a outra nota: \n");
    scanf("%f", &n2);

    m = (n1+n2)/2;

    if(m >= 4 && m< 7){ // && = "e".
        printf("Tem direito a recuperacao\n");
    }
}