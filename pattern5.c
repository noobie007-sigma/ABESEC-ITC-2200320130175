#include<stdio.h>
void main(){
    int ch = 69, temp = 0;
    for(int i = 1; i <= 5; i++){
        temp = ch;
        for(int j = 1; j <= i; j++){
            printf("%c", temp);
            temp++;
        }
        printf("\n");
        ch--;
    }
}