#include<stdio.h>
int main()
{
    float a;
    printf("Enter a number:");
    scanf("%f",&a);
    if(a>0)
    {
        // Check if the number is positive.
        printf("%f is a positive number. \n",a);
    }
    else if(a<0)
    {
        // Check if the number is negative.
        printf("%f is a negative number. \n",a);
    }
    else
    {
        // If neither positive nor negative, it must be zero.
        printf("%f is zero. \n");
    }
    return 0;
}
