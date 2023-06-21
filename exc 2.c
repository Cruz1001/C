#include <stdio.h>

 int v[4];
 int a[4] = {0,0,0,0}, b[4] = {0,0,0,0};

void posneg(){
    int i;
    
   
    for (i = 1; i <= 4; i++)
    {
        printf("Digite um número:");
        scanf("%d", &v[i]);
    }
    for (i=1; i<=4; i++)
    {
        if (v[i]>0)
        {
            a[i] = v[i];
        }
        if (v[i]<=0){
            b[i] = v[i];
        }
    }

}
int main(){
    printf("Colocarei os números organizados em negátivos e positivos.\n");
    posneg();
    printf("Positivos:\n");
    printf ("%d ,", a[1]);
    printf ("%d ,", a[2]);
    printf ("%d ,", a[3]);
    printf ("%d ,", a[4]);
    printf("Negativos:\n");
    printf("%d ,", b[1]);
    printf("%d ,", b[2]);
    printf("%d ,", b[3]);
    printf("%d ,", b[4]);
   
}
