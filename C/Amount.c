#include<stdio.h>
int main(void)
{
    float base_salary,da,hra,gs;
    printf("Enter Employees Base salary :");
    scanf("%f",&base_salary);

    da=(base_salary*50)/100;
    hra=(base_salary*20)/100;
    gs=base_salary+da+hra;

    printf("Gross salary is :%f",gs);
    return 0;
}