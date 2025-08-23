#include <stdio.h>
int main(void)
{
	int phy,chem,math,eng,it,sum;
	float avg;
	printf("Enter Physics marks:");
	scanf("%d",&phy);
	printf("Enter Chemistry marks:");
	scanf("%d",&chem);
	printf("Enter Maths marks:");
	scanf("%d",&math);
	printf("Enter IT marks:");
	scanf("%d",&it);
	printf("Enter English marks:");
	scanf("%d",&eng);
	sum=phy+chem+math+eng+it;
	avg=sum/5;
	printf("final marks are:%f",avg);
}