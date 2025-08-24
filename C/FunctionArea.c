#include<stdio.h>
float Circlearea(float radius);
float Squarearea(float side);
float rectanglearea(float lenght,float breath);
float trianglearea(float base,float height);

int main()
{
    float radius=4.5;
    printf("Area of circle radius:%f",Circlearea(radius));
	return 0;
}
float Circlearea(float radius)
{
    return 3.14*radius*radius;
    
}
float Squarearea(float side)
{
    return side*side;
}
float rectanglearea(float lenght,float breath)
{
    return lenght*breath;
}
