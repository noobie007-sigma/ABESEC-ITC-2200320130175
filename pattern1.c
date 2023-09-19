#include<stdio.h>
void main(){
    int count = 0, temp = 0;
    for(int i = 1; i <= 4; i++){
        count++;
        temp = count;
        for(int j = 1; j <= i; j++){
            printf("%d", temp);
            temp++;
        }
        printf("\n");
        
    }
}