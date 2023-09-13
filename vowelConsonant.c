#include<stdio.h>
int main(){
    char ch;
    printf("Enter any alphabet: ");
    scanf(" %c", &ch);
    if(ch=='A'||ch=='a'||ch=='E'||ch=="e"||ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
}