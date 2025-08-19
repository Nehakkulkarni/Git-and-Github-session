#include<stdio.h>
int main(void)
{    
   float far,cel;
    printf("Enter temperature for celcius");
    scanf("%f",&cel);
    cel = (far-32) * 5/9;
    printf("Temperature in Celsius: %f\n",cel);
    printf("Enter temperature for fahrenheit:");
    scanf("%f",&far);
    far = (9/5 * cel) + 32;
    printf("Temperature in fahrenheit: %f\n",far);
}