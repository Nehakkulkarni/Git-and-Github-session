 #include<stdio.h>
#include<stdlib.h>


float Circlearea(float radius);
float Squarearea(float side);
float rectanglearea(float lenght,float breath);
float trianglearea(float base,float height);

int main()
{
	int choice;
	float  radius,side, length, breadth, base, height;

	printf("*** Program for Area Calcuation! ***\n\n");
	printf("\t1. Area of circle\n");
	printf("\t2. Area of Square\n");
	printf("\t3. Area of rectangle\n");
	printf("\t4. Area of triangle\n");
	printf("\t5. Exit the program\n");
	printf("\n\tEnter your choice (1-5):");
	scanf("%d", &choice);
	switch(choice)
	{
	case 1:
		printf("enter radius of circle:");
		scanf("%f",&radius);
		printf("Area of circle :%f",Circlearea(radius));
		break;

	case 2:
		printf("enter side of square:");
		scanf("%f",&side);
		printf("Area of square :%f",Squarearea( side) );
		break;

	case 3:
		printf("enter length of rectangle:");
		scanf("%f",&length);
		printf("enter breath of rectangle:");
		scanf("%f",&breadth);
		printf("Area of rectangle:%f",rectanglearea( length, breadth));
		break;

	case 4:
		printf("enter base of triangle:");
		scanf("%f",&base);
		printf("enter side of triangle:");
		scanf("%f",&height);
		printf("Area of triangle:%f",trianglearea( base, height));
		break;

	case 5:
		printf("Exit,Goodbye");
		exit(0);
		break;

	default :
		printf("Invalid input");

	}


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

float rectanglearea(float length,float breath)
{
	return length * breath;
}

float trianglearea(float base,float height)
{
	return 0.5*base*height;
}
