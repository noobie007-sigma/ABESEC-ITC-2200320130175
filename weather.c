#include<stdio.h>
int main(){
    float tempC;
    printf("Enter the temperature in degrree Celcius: ");
    scanf("%f", &tempC);
    tempC = (int)tempC;
    if(tempC < 0){
        printf("Freezing Weather");
    }else if(tempC < 10){
        printf("Very Cold Weather");
    }else if(tempC < 20){
        printf("Cold Weather");
    }else if(tempC < 30){
        printf("Normal Weather");
    }else if(tempC < 40){
        printf("Hot Weather");
    }else{
        printf("Very Hot Weather");
    }
}