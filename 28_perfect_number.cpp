#include<stdio.h>
int main()
{
	int n,x,y,m,p;
	printf("Enter value of n:");
	scanf("%d",&n);
	p=n/2;
	x=0;
	m=0;
	do
	{
		x++;
		y=n%x;
		if(y==0)
		{
			m=m+x;
		}
	}while(x!=p);
	if(n==m)
	{
		printf("The number is perfect number");
	}
	else
	{
		printf("The number is not perfect number");
	}
}
