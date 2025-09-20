#include<stdio.h>
int fact(int n);

int main()
{   
    int input_number;
    printf("\nEnter number to calculate the factorial -> ");
    scanf("%d",&input_number);
    
    printf("factorial is:%d",fact(input_number));
    return 0;
}


int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factn1 = fact(n-1);
    int factn = factn1*n;
    return factn;
}
 
