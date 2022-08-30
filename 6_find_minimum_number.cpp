#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	if(a<=b)
	{
		if(a==b)
		{
			printf("The number are equal");
		}
		else
		{
			printf("The small number is:%d",a);
		}
	}
	else
	{
		printf("The small number is:%d",b);
	}
}
