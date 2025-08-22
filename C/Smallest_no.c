 #include<stdio.h>
 int main(void)
 {
    int a,b;
    printf("Enter first number a:"); scanf("%d",&a);
    printf("Enter second number b:"); scanf("%d",&b);
    if(a<b)
    {
        printf("a is smaller than b");
    }
    else 
    {
        printf("b is smaller than a");
    }
 }