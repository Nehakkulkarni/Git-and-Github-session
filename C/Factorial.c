#include<stdio.h>
int fact(int n);
int main()
{   
    printf("factorial is:%d",fact(8));
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
 
 