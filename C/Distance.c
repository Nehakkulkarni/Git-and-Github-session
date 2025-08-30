#include<stdio.h>
#include<stdlib.h>

int convert2meter(int km);
int convert2inches(int km);
int convert2centimeter(int km);
int convert2feet(int km);

int main()
{
   int km,m,feet,inches,cm;
   int choice;
   printf("Enter distance between two cities km :");
   scanf("%d",&km);
    
    printf("*** Program for Distance! ***\n\n");
	printf("\t1. meters\n");
	printf("\t2. centimeters\n");
	printf("\t3. feet\n");
	printf("\t4. inches\n");
	printf("\t5. Exit the program\n");
	printf("\n\t Enter your choice (1-5):");
	scanf("%d", &choice);
	switch(choice)
	{
	case 1:
		printf("\tDistance in meter: %d", convert2meter(km) );
		break;

	case 2:
		printf("\tDistance in inches is: %d",convert2inches( km)  );
		break;

	case 3:
	     printf("\tDistance in centimeter is: %d", convert2centimeter( km) );
		break;

	case 4:
		printf("\tDistance in feet is: %d", convert2feet( km) );
		break;

	case 5:
		printf("Exit,Goodbye");
		exit(0);
		break;

	default :
		printf("Invalid input");

	}
 
  
}

int convert2meter(int km)
{
   int m;
   m=km*1000;
   return m;

}

int convert2inches(int km)
{
    int inches;
   inches=km*39370.1;
   return inches;
}

int convert2centimeter(int km)
{
    int cm;
   cm=km*100000;
   return cm;
}

int convert2feet(int km)
{
    int feet;
    feet=km*3280.84;
    return feet;
}












