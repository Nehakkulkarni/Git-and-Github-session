#include<stdio.h>
int m()
int inches()
int cm()
int feet()

int main()
{
   int km,m,feet,inches,cm;
   int choice;
   printf("Enter distance between two cities km :");
   scanf("%d",km);
    
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
		
		break;

	case 2:
		
		break;

	case 3:
	
		break;

	case 4:
		
		break;

	case 5:
		printf("Exit,Goodbye");
		exit(0);
		break;

	default :
		printf("Invalid input");

	}
  
  
  
  
}
int m()
{
   m=km*1000;
   return m;

}
int inches()
{
   inches=km*39370.1;
   return inches;
}
int cm()
{
   cm=km*100000;
   return cm;
}
int feet()
{
    feet=km*3280.84;
    return feet;
}






