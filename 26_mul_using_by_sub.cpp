#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	a=0;
	b=y;
	do
	{
		b=b-1;
		a=a+x;
	}while(b!=0);
	printf("The result is :%d",a);
}
