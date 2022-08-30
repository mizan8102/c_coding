// Divided two number using by add.
#include<stdio.h>
int main()
{
	int a,b,x,y;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	if(a>b)
	{
		x=a;
		a=b;
		b=x;
	}
	x=0;
	y=0;
	do
	{
		x++;
		y=y+a;
	}
	while(y<=b);
	if(y>b)
		{
			y=y-a;
			x=x-1;
		}
		y=b-y;
		printf("The result is:%d",x);
		printf("\nThe remainder is:%d",y);
}
