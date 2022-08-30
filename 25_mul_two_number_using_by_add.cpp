#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	a=0;
	b=0;
	do
	{
		a=a+x;
		b=b+1;
	}while(b!=y);
	printf("The result is :%d",a);
}
