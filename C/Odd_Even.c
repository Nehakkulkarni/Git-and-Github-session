 #include <stdio.h>
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);

	if( num%2==0)
	{
		printf("The number is Even \n");
	}
	else
		printf("The number is Odd \n");
}