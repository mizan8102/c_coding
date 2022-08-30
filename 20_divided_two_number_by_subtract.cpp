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
	y=b;
	x=0;
	do {
		x++;
		y=y-a;
	}while(y>=0);
	if(y<0)
	{x--;
		y=a+y;
	}
	printf("The result =%d, remainder is :%d\n",x,y);
}
