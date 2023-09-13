#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter sides of traingle: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && a==c){
        printf("Equilateral");
    }else if((a==b && a!=c) || (b==c && b!=c) || (a==c && a!=b)){
        printf("Isoceles");
    }else{
        printf("Scalene");
    }
    return 0;
}