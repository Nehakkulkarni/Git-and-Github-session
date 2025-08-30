#include<stdio.h>
int main(void)
{
   float totalSellingPrice, totalProfit, costPricePerItem;
   printf("Enter the total selling and cost price 15 items is:");
   scanf("%f",&totalSellingPrice);
   printf("Enter the total profit of 15 items:");
   scanf("%f",&totalProfit);
   
   costPricePerItem = (totalSellingPrice - totalProfit) / 15;
   printf("The cost price of one item:%f \n",costPricePerItem);
   return 0;
}