#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number a:");
    scanf("%d",&a);
    printf("Enter second number b:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greater than b");
    }
    else 
    {
        printf("b is greater than a");
    }
    return 0;
}

