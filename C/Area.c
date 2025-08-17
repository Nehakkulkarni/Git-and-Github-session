#include<stdio.h>
int main()
{
    float radius;float pi=3.14;//circle
    float side; //square
    float length;float breath;//rectangle
    float base;float height;//triangle
    //circle
    printf("Enter the radius of the circle: ");scanf("%f",&radius);
    printf("Area of circle is:%f \n",pi*radius*radius);
    //square
    printf("Enter the side of the square: ");scanf("%f",&side);
    printf("Area of square is:%f \n",side*side);
    //rectangle
    printf("Enter the length of the rectangle:"); scanf("%f",&length);
    printf("Enter the breath of the rectangle:");scanf("%f",&breath);
    printf("Area of rectangle is:%f \n",length*breath);
    //triangle
    printf("Enter base of triangle:");scanf("%f",&base);
    printf("Enter height of triangle:");scanf("%f",&height);
    printf("Area of triangle is:%f \n",0.5*base*height);
	return 0;
}