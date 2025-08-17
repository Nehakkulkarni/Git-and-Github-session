#include<stdio.h>

int main()
{
    float area;
    float radius;
    float pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of circle is:%f",area);
	return 0;
}