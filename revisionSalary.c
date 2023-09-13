#include<stdio.h>
int main(){
    int totalSalary;
    int basic;
    char grade;
    printf("Enter your basic salary: ");
    scanf("%d", &basic);
    printf("Enter grade in Capital letters: ");
    scanf(" %c", &grade);
    int hra = 0.2*basic;
    printf("%d\n", hra);
    int da = 0.5*basic;
    printf("%d\n", da);
    int pf = 0.11*basic;
    printf("%d\n", pf);
    totalSalary = basic + hra + da - pf;
    printf("%d\n", totalSalary);
    if(grade == 'A'){
        printf("Salary = %d", (totalSalary + 1700));
    }else if(grade == 'B'){
        printf("Salary = %d", (totalSalary + 1500));
    }else{
        printf("Salary = %d", (totalSalary + 1300));
    }
}