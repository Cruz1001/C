#include <stdio.h>

int main(){

    int i;

    for(i=1; i<=10; i++){

        if(i == 5){
            printf("Legal ");
            continue;
        }

        printf("%d", i);
    }
}