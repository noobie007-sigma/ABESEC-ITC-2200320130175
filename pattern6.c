#include<stdio.h>
void main(){
    int count = 0, temp;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 2*i - 1; j++){
            count++;
            temp = count;
            for(int k = 3; k >= i; k++){
                printf(" ");
            }
            for(int l = 1; l <= 2*i - 1; l++){
                printf("%d", temp);
            }
            printf("/n");
        }
    }
}