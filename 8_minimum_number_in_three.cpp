#include<stdio.h>
int main()
{
	int a,b,c,p;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	if(a<=b && a<=c)
	{
		p=a;
	}
	else 
	{
		if(b<=a && b<=c)
		{
				p=b;	
		}
		else
		{
			p=c;
		}
	}

	printf("The minimum number is =%d",p);
}
