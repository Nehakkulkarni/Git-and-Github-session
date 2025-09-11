#include<stdio.h>
int main()
{
     int cp,sp;
     int profit,loss;
     printf("Enter the cost price of a item");
     scanf("%d",&cp);
     printf("Enter the selling price of a item");
     scanf("%d",&sp);
     if(sp>cp)
     {
        profit=sp-cp;
        printf("The profit is %d \n",profit);
     }
     else if(cp>sp)
     {
        loss=cp-sp;
        printf("The loss is %d \n",loss);
     }
     else
     {
        printf("No profit or loss \n");
     }

    return 0;
}