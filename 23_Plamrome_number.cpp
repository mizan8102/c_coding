// Plamrom Number
#include<stdio.h>
int main()
{
	int a,x,y,p;
	printf("Enter any number:");
	scanf("%d",&a);
	x=0;
	p=a;
	do
	{
		x=x*10;
		y=p%10;
		p=p/10;
		x=x+y;
	}
	while(p!=0);
	if(a==x)
	{
		printf("\n The Number is Plamrome");
	}
	else
	{
		printf("\n The Number is plamrome");
	}
}
