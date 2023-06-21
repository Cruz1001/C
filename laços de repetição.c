#include <stdio.h>

int main(){
    int m1[2][2], m2[2][2], maior = 0, i,j;

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            scanf("%d", &m1[i][j]);
            if (m1[i][j] > maior){
                maior = m1[i][j];
            }
        }
    }
    printf("Resultado:\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            m2[i][j] = m1[i][j] * maior;
            printf("%d\n", m2[i][j]);
        }
    }

}
