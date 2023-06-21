#include <stdio.h>

int main(){

    int r =1;
    int t= 1;
    int count = 0;
    
    printf("Qual tabuada você quer consultar?");
    scanf("%d", &t);

    do
    {
        r = t * count;
        printf("%d", t);
        printf("x");
        printf("%d", count);
        printf("=");
        printf("%d ", r);
        count++;
    } while (count <= 10);
    
}